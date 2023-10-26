#ifndef FILA_H
#define FILA_H

#include "Compras.h"
#include <direct.h>

class CajaNodo {
private:
    Compras compras;
    clnodo cliente;
    CajaNodo* siguiente;

    friend class ListaCaja;

public:
    CajaNodo(Compras lista, clnodo clien, CajaNodo* sig = NULL) {
        compras = lista;
        cliente = clien;
        siguiente = sig;
    }
};

typedef CajaNodo* cjnodo;

class ListaCaja {
private:
    cjnodo primero = NULL;

public:
    bool ListaVacia() { return primero = NULL; }
    void InsertaNodo(Compras lista, clnodo clien);
};

inline void ListaCaja::InsertaNodo(Compras lista, clnodo clien) {
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

class Cola {
private:
    int fondo;
    Compras compras;
    clnodo Cliente[5];

public:
    Cola(ArbolPr lista) {
        fondo = -1;
        for (int i = 0; i < 5; i++) {
            Cliente[i] = NULL;
        }
        compras = Compras(lista);
    }

    bool ColaVacia() { return fondo < 0; }
    bool compraVacía() { return compras.ListaVacia(); }
    void insertaCliente(int ced, ArbolB clientes);
    bool verificarCliente(int ced);
    bool verificarProducto(int pais, int ciudad, int rest, int menu, int prod);
    int  getCant(int pais, int ciudad, int rest, int menu, int prod) { return compras.getCant(pais, ciudad, rest, menu, prod); }
    void pagarFactura(bool llevar, bool tarjeta, ListaCaja lista);
    void agregaProducto(int pais, int ciudad, int rest, int menu, int prod, int cant);
    void borrarProducto(int pais, int ciudad, int rest, int menu, int prod);
    void modificarCant(int pais, int ciudad, int rest, int menu, int prod, int cant);
    void ModificarProdu(int pais, int ciudad, int rest, int menu, int prod, int nmenu, int nprod, int cant);
};

inline void Cola::insertaCliente(int ced, ArbolB clientes) {
    if (clientes.VerificarCliente(ced)) {
        if (fondo < 5 - 1) {
            fondo++;
            Cliente[fondo] = clientes.getCliente(ced);
        }
    }
}

inline bool Cola::verificarCliente(int ced) {
    for (int i = 0; i < 5; i++) {
        if (Cliente[i] != NULL) {
            if (Cliente[i] != NULL && Cliente[i]->cedula == ced) {
                return true;
            }
        }
    }
    return false;
}

inline bool Cola::verificarProducto(int pais, int ciudad, int rest, int menu, int prod) {
    return compras.verificarProducto(pais, ciudad, rest, menu, prod);
}

inline void Cola::pagarFactura(bool llevar, bool tarjeta, ListaCaja lista) {
    int dir = _mkdir("Facturas");
    ofstream arch;
    bool abierto = false;
    int i = 0;
    string nomfac = "";

    while (!abierto) {
        i++;

        if (i <= compras.len()) {
            conodo prod = compras.getProducto(i);
            nomfac = "Facturas/" + to_string(Cliente[0]->cedula) + " " + prod->producto->nombre + to_string(prod->cantidad);
        }
        else {
            i--;
            conodo prod = compras.getProducto(i);
            nomfac = "Facturas/" + to_string(Cliente[0]->cedula) + " " + prod->producto->nombre + to_string(prod->cantidad) + "(" + to_string(i) + ")";
        }

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
    arch << "Producto                  Cantidad            Precio" << endl;
    for (int i = 1; i <= compras.len(); i++) {
        conodo prod = compras.getProducto(i);
        double valor = prod->producto->precio;
        double cant = prod->cantidad;
        arch << indStr(prod->producto->nombre, 26) << indStr(to_string(cant), 20) << indStrl(to_string(valor), 17) << endl;
        precio += cant * valor;
    }
    arch << "---------------------------------------------------------------" << endl;
    arch << "Subtotal:                                           " << indStrl(to_string(precio), 17) << endl;
    arch << "---------------------------------------------------------------" << endl << endl;
    arch << "                                              Descuento" << endl;
    arch << "Modo de pago: " << modoPago(tarjeta, &descuento) << endl;
    arch << "Pedido para:  " << paraLlevar(llevar, &descuento) << endl << endl;
    precio *= descuento;
    arch << "Total:                                              " << indStrl(to_string(precio), 17) << endl << endl;
    arch << "===============================================================";

    arch.close();

    for (int i = 1; i < 5; i++) {
        Cliente[i - 1] = Cliente[i];
    }

    lista.InsertaNodo(compras, Cliente[0]);
    compras.primero = NULL;

    fondo--;
}

inline void Cola::agregaProducto(int pais, int ciudad, int rest, int menu, int prod, int cant) {
    compras.InsertaNodo(pais, ciudad, rest, menu, prod, cant);
}

inline void Cola::borrarProducto(int pais, int ciudad, int rest, int menu, int prod) {
    compras.BorrarNodo(pais, ciudad, rest, menu, prod);
}

inline void Cola::modificarCant(int pais, int ciudad, int rest, int menu, int prod, int cant) {
    compras.ModificarCant(pais, ciudad, rest, menu, prod, cant);
}

inline void Cola::ModificarProdu(int pais, int ciudad, int rest, int menu, int prod, int nmenu, int nprod, int cant) {
    compras.ModificarProdu(pais, ciudad, rest, menu, prod, nmenu, nprod, cant);
}

#endif // !FILA_H
