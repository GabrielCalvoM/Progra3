#ifndef COMPRAS_H
#define COMPRAS_H

#include "Productos.h"
#include "Clientes.h"

class NodoCompras {
private:
    prnodo producto;
    int cantidad;
    NodoCompras* siguiente = NULL;

    friend class Compras;
    friend class Cola;

public:
    NodoCompras(prnodo produ, int cant, NodoCompras* sig = NULL) {
        producto = produ;
        cantidad = cant;
        siguiente = sig;
    }
};

typedef NodoCompras* conodo;

class Compras {
private:
    ArbolPr listaProd;
    conodo primero = NULL;

    friend class Cola;

public:
    Compras() {

    }

    Compras(ArbolPr lista) {
        listaProd = lista;
    }

    bool ListaVacia() { return primero == NULL; }
    void InsertaNodo(int pais, int ciudad, int rest, int menu, int prod, int cant);
    int  getCant(int pais, int ciudad, int rest, int menu, int prod);
    bool verificarProducto(int pais, int ciudad, int rest, int menu, int prod);
    void BorrarNodo(int pais, int ciudad, int rest, int menu, int prod);
    void ModificarProdu(int pais, int ciudad, int rest, int menu, int prod, int nmenu, int nprod, int cant);
    void ModificarCant(int pais, int ciudad, int rest, int menu, int prod, int cant);
    int len();
    conodo getProducto(int i);
};

#endif // !COMPRAS_H