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
    bool ListaVacia() { return primero == NULL; }
    void InsertaNodo(Compras lista, clnodo clien);
};

class Cola {
private:
    int fondo = -1;
    Compras compras;
    clnodo Cliente[5];

public:
    Cola() {
            fondo = -1;
            for (int i = 0; i < 5; i++) {
                Cliente[i] = NULL;
            }
    }

    Cola(ArbolPr lista) {
        fondo = -1;
        for (int i = 0; i < 5; i++) {
            Cliente[i] = NULL;
        }
        compras = Compras(lista);
    }

    void configProd(ArbolPr lista) { compras = Compras(lista); }

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

#endif // !FILA_H
