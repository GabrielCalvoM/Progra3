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

inline void Compras::InsertaNodo(int pais, int ciudad, int rest, int menu, int prod, int cant) {
    prnodo producto = listaProd.getProducto(pais, ciudad, rest, menu, prod);

    if (producto->cant >= cant) {
        if (producto != NULL) {
            if (ListaVacia()) {
                primero = new NodoCompras(producto, cant);
                producto->RestaCant(cant);
            }
            else {
                conodo aux = primero;

                while (aux->siguiente != NULL && producto != aux->producto) {
                    aux = aux->siguiente;
                }

                if (producto != aux->producto) {
                    aux->siguiente = new NodoCompras(producto, cant);
                    producto->RestaCant(cant);
                }
            }
        }
    }
}

inline int Compras::getCant(int pais, int ciudad, int rest, int menu, int prod) {
    prnodo producto = listaProd.getProducto(pais, ciudad, rest, menu, prod);

    if (producto != NULL) {
        if (!ListaVacia()) {
            conodo aux = primero;

            while (aux->siguiente != NULL && producto != aux->producto) {
                aux = aux->siguiente;
            }

            if (producto == aux->producto) {
                return producto->getCant();
            }
        }
    }

    return 0;
}

inline bool Compras::verificarProducto(int pais, int ciudad, int rest, int menu, int prod) {
    prnodo producto = listaProd.getProducto(pais, ciudad, rest, menu, prod);

    if (producto != NULL) {
        if (!ListaVacia()) {
            conodo aux = primero;

            while (aux->siguiente != NULL && producto != aux->producto) {
                aux = aux->siguiente;
            }

            if (producto == aux->producto) {
                return true;
            }
        }
    }

    return false;
}

inline void Compras::BorrarNodo(int pais, int ciudad, int rest, int menu, int prod) {
    prnodo producto = listaProd.getProducto(pais, ciudad, rest, menu, prod);

    if (producto != NULL) {
        if (ListaVacia()) {
        }
        else if (primero->producto == producto) {
            conodo temp = primero;
            producto->SumaCant(temp->cantidad);
            primero = primero->siguiente;
            delete temp;
        }
        else {
            conodo aux = primero;

            while (aux->siguiente != NULL && producto != aux->siguiente->producto) {
                aux = aux->siguiente;
            }

            if (aux->siguiente != NULL) {
                if (aux->siguiente->producto == producto) {
                    conodo temp = aux->siguiente;
                    producto->SumaCant(temp->cantidad);
                    aux->siguiente = aux->siguiente->siguiente;
                    delete temp;
                }
            }
        }
    }
}

inline void Compras::ModificarProdu(int pais, int ciudad, int rest, int menu, int prod, int nmenu, int nprod, int cant) {
    prnodo producto = listaProd.getProducto(pais, ciudad, rest, menu, prod);
    prnodo nuevo = listaProd.getProducto(pais, ciudad, rest, nmenu, nprod);

    if (nuevo->cant >= cant) {
        if (producto != NULL) {
            if (ListaVacia()) {
            }
            else {
                conodo aux = primero;

                while (aux->siguiente != NULL && producto != aux->producto) {
                    aux = aux->siguiente;
                }

                if (producto == aux->producto) {
                    aux->producto->SumaCant(aux->cantidad);
                    aux->producto = nuevo;
                    aux->cantidad = cant;
                    aux->producto->RestaCant(cant);
                }
            }
        }
    }
}

inline void Compras::ModificarCant(int pais, int ciudad, int rest, int menu, int prod, int cant) {
    prnodo producto = listaProd.getProducto(pais, ciudad, rest, menu, prod);

    if (producto != NULL) {
        if (ListaVacia()) {
        }
        else {
            conodo aux = primero;

            while (aux->siguiente != NULL && producto != aux->producto) {
                aux = aux->siguiente;
            }

            if (producto->cant + aux->cantidad >= cant) {
                if (producto = aux->producto) {
                    if (aux->cantidad < cant) {
                        producto->RestaCant(cant - aux->cantidad);
                    }
                    else if (aux->cantidad > cant) {
                        producto->SumaCant(aux->cantidad - cant);
                    }

                    aux->cantidad = cant;
                }
            }
        }
    }
}

inline int Compras::len() {
    conodo aux = primero;
    int largo = 0;

    while (aux != NULL) {
        aux = aux->siguiente;
        largo++;
    }

    return largo;
}

inline conodo Compras::getProducto(int i) {
    conodo aux = primero;
    int nodo = 1;

    if (i > len())
        return NULL;

    while (aux != NULL && nodo < i) {
        aux = aux->siguiente;
        nodo++;
    }

    return aux;
}

#endif // !COMPRAS_H