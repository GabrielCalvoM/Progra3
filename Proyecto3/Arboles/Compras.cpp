#include "Compras.h"

// Lista

void Compras::InsertaNodo(int pais, int ciudad, int rest, int menu, int prod, int cant) {
    prnodo producto = listaProd->getProducto(pais, ciudad, rest, menu, prod);

    if (producto != NULL) {
        if (producto->cant >= cant) {
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

int Compras::getCant(int pais, int ciudad, int rest, int menu, int prod) {
    prnodo producto = listaProd->getProducto(pais, ciudad, rest, menu, prod);

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

bool Compras::verificarProducto(int pais, int ciudad, int rest, int menu, int prod) {
    prnodo producto = listaProd->getProducto(pais, ciudad, rest, menu, prod);

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

void Compras::BorrarNodo(int pais, int ciudad, int rest, int menu, int prod) {
    prnodo producto = listaProd->getProducto(pais, ciudad, rest, menu, prod);

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

void Compras::ModificarProdu(int pais, int ciudad, int rest, int menu, int prod, int nmenu, int nprod, int cant) {
    prnodo producto = listaProd->getProducto(pais, ciudad, rest, menu, prod);
    prnodo nuevo = listaProd->getProducto(pais, ciudad, rest, nmenu, nprod);

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

void Compras::ModificarCant(int pais, int ciudad, int rest, int menu, int prod, int cant) {
    prnodo producto = listaProd->getProducto(pais, ciudad, rest, menu, prod);

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

int Compras::len() {
    conodo aux = primero;
    int largo = 0;

    while (aux != NULL) {
        aux = aux->siguiente;
        largo++;
    }

    return largo;
}

conodo Compras::getProducto(int i) {
    conodo aux = primero;
    int nodo = 0;

    if (i >= len())
        return NULL;

    while (aux != NULL && nodo < i) {
        aux = aux->siguiente;
        nodo++;
    }

    return aux;
}