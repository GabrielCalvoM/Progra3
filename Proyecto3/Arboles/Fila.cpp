#include "Fila.h"

// Caja

void ListaCaja::InsertaNodo(Compras lista, clnodo clien) {
    if (ListaVacia()) {
        primero = new CajaNodo(lista, clien);
    }
    else {
        cjnodo aux = primero;

        while (aux->siguiente != NULL && aux->cliente != clien) {
            aux = aux->siguiente;
        }

        if (aux->cliente != clien) {
            aux->siguiente = new CajaNodo(lista, clien);
        }
    }
}



//Fila

void Cola::insertaCliente(int ced, ArbolB clientes) {
    if (clientes.VerificarCliente(ced)) {
        if (fondo < 4) {
            fondo++;
            Cliente[fondo] = clientes.getCliente(ced);
        }
    }
}

bool Cola::verificarCliente(int ced) {
    for (int i = 0; i < 5; i++) {
        if (Cliente[i] != NULL) {
            if (Cliente[i] != NULL && Cliente[i]->cedula == ced) {
                return true;
            }
        }
    }
    return false;
}

bool Cola::verificarProducto(int pais, int ciudad, int rest, int menu, int prod) {
    return compras.verificarProducto(pais, ciudad, rest, menu, prod);
}

void Cola::pagarFactura(bool llevar, bool tarjeta, ListaCaja lista) {
    int dir = _mkdir("Facturas");
    ofstream arch;
    bool abierto = false;
    int i = 0;
    string nomfac = "";
    clnodo cliente = Cliente[0];

    while (!abierto) {
        i++;
        nomfac = "Facturas/" + to_string(cliente->cedula) + " (" + to_string(i) + ")";

        if (!archivo_existe(nomfac)) {
            abierto = true;
        }
    }

    nomfac += ".txt";
    arch.open(nomfac.c_str());
    double precio = 0;
    double descuento = 1;

    arch << "===============================================================" << endl << endl;
    arch << "                    Informacion del cilente" << endl << endl;
    arch << "Nombre:   " + Cliente[0]->nombre << endl;
    arch << "CCedula:   " << Cliente[0]->cedula << endl << endl;
    arch << "Producto                  Cantidad                  Precio" << endl;
    for (int i = 0; i < compras.len(); i++) {
        conodo prod = compras.getProducto(i);
        double valor = prod->producto->precio;
        double cant = prod->cantidad;
        arch << indStr(prod->producto->nombre, 26) << indStr(to_string(cant), 20) << indStrl(to_string(valor), 17) << endl;
        precio += cant * valor;
    }
    arch << "---------------------------------------------------------------" << endl;
    arch << "Subtotal:                                     " << indStrl(to_string(precio), 17) << endl;
    arch << "---------------------------------------------------------------" << endl << endl;
    arch << "                                              Descuento" << endl;
    arch << "Modo de pago: " << modoPago(tarjeta, &descuento) << endl;
    arch << "Pedido para:  " << paraLlevar(llevar, &descuento) << endl << endl;
    precio *= descuento;
    arch << "Total:                                        " << indStrl(to_string(precio), 17) << endl << endl;
    arch << "===============================================================";

    arch.close();

    for (int i = 1; i < 5; i++) {
        Cliente[i - 1] = Cliente[i];
    }
    
    lista.InsertaNodo(compras, Cliente[0]);
    compras.primero = NULL;

    fondo--;
}

void Cola::agregaProducto(int pais, int ciudad, int rest, int menu, int prod, int cant) {
    compras.InsertaNodo(pais, ciudad, rest, menu, prod, cant);
}

void Cola::borrarProducto(int pais, int ciudad, int rest, int menu, int prod) {
    compras.BorrarNodo(pais, ciudad, rest, menu, prod);
}

void Cola::modificarCant(int pais, int ciudad, int rest, int menu, int prod, int cant) {
    compras.ModificarCant(pais, ciudad, rest, menu, prod, cant);
}

void Cola::ModificarProdu(int pais, int ciudad, int rest, int menu, int prod, int nmenu, int nprod, int cant) {
    compras.ModificarProdu(pais, ciudad, rest, menu, prod, nmenu, nprod, cant);
}