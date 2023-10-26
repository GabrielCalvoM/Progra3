#ifndef MENUS_H
#define MENUS_H

#include "Restaurantes.h"

class MNodo {
public:
    MNodo(int pais, int ciudad, int rest, int menu, string nom, MNodo* der = NULL, MNodo* izq = NULL, int nivel = 0, int bus = 0) :
        codigop(pais), codigoc(ciudad), codigor(rest), codigom(menu), nombre(nom), level(nivel), Hizq(izq), Hder(der), busqueda(bus) {}


    int codigop, codigoc, codigor, codigom, level, busqueda;
    string nombre;
    MNodo* Hizq, * Hder;

    friend class Pila;
    friend class ArbolAA;

    MNodo* VerificarMR(int codp, int codc, int codr, int codm);
};

typedef MNodo* mnodo;

MNodo* MNodo::VerificarMR(int codp, int codc, int codr, int codm) {
    if (this == NULL) {
        return NULL;
    }
    else if ((codp == codigop) && (codc == codigoc) && (codr == codigor) && (codm == codigom))
        return this;
    else {
        if (Hizq->VerificarMR(codp, codc, codr, codm) != NULL) {
            return Hizq->VerificarMR(codp, codc, codr, codm);
        }
        else {
            return Hder->VerificarMR(codp, codc, codr, codm);
        }
    }
}

void ModificarM(MNodo* m, int pais, int ciudad, int rest, int menu, string nombren)
{
    if (m == NULL)
    {
        return;
    }
    if ((pais == m->codigop) && (ciudad == m->codigoc) && (rest == m->codigor) && (menu == m->codigom))
    {
        m->nombre = nombren;
        return;
    }
    else
    {
        if (menu <= m->codigom)
            ModificarM(m->Hizq, pais, ciudad, rest, menu, nombren);
        else
            ModificarM(m->Hder, pais, ciudad, rest, menu, nombren);
    }
}

class ArbolAA {
public:
    MNodo* raiz = NULL;
    ArbolAA();
    bool ArbolVacio() { return raiz == NULL; }
    void Inorden();
    void MostrarE(int pais, int ciudad, int rest, int menu);
    mnodo VerificarM(int codp, int codc, int codr, int codm);
    void LeerMenu(ArbolR restaurantes);
    void InsertaNodo(int pais, int ciudad, int rest, int menu, string nom, ArbolR restaurantes);
    MNodo* insertar(MNodo* r, int codp, int codc, int codr, int codm, string nomb);
    void inorder(MNodo* r);
    void Modificar(int pais, int ciudad, int rest, int menu, string nombren);
    void reporte(int pais, int ciudad, int rest);
    void reportebuscado();
private:
    MNodo* skew(MNodo* r);
    MNodo* split(MNodo* r);


};

ArbolAA::ArbolAA() {}


mnodo ArbolAA::VerificarM(int codp, int codc, int codr, int codm) {
    if (ArbolVacio())
        return NULL;
    else
        return raiz->VerificarMR(codp, codc, codr, codm);
}

void ArbolAA::LeerMenu(ArbolR restaurantes) {
    ifstream archivo;
    string str;
    MNodo* aux;

    archivo.open("Menu.txt");
    aux = raiz;

    while (getline(archivo, str))
    {
        int codp = stoi(ObtenerCodigo(str, 0));
        int codc = stoi(ObtenerCodigo(str, 1));
        int codr = stoi(ObtenerCodigo(str, 2));
        int codm = stoi(ObtenerCodigo(str, 3));
        string nom = ObtenerCodigo(str, 4);
        InsertaNodo(codp, codc, codr, codm, nom, restaurantes);
    }

    archivo.close();
}

MNodo* ArbolAA::skew(MNodo* r) {
    if (r == nullptr || r->Hizq == nullptr) {
        return r;
    }
    if (r->level == r->Hizq->level) {
        MNodo* leftChild = r->Hizq;
        r->Hizq = leftChild->Hder;
        leftChild->Hder = r;
        return leftChild;
    }
    return r;
}

MNodo* ArbolAA::split(MNodo* r) {
    if (r == nullptr || r->Hder == nullptr || r->Hder->Hder == nullptr) {
        return r;
    }
    if (r->level == r->Hder->Hder->level) {
        MNodo* rightChild = r->Hder;
        r->Hder = rightChild->Hizq;
        rightChild->Hizq = r;
        rightChild->level++;
        return rightChild;
    }
    return r;
}

void ArbolAA::InsertaNodo(int pais, int ciudad, int rest, int menu, string nom, ArbolR restaurantes) {
    if (restaurantes.VerificarRestaurante(pais, ciudad, rest)) {
        if (raiz == NULL) {
            raiz = new MNodo(pais, ciudad, rest, menu, nom);
        }
        else {
            //raiz->InsertaBinario(pais, ciudad, nom);
            insertar(raiz, pais, ciudad, rest, menu, nom);
        }
    }
}

MNodo* ArbolAA::insertar(MNodo* r, int codp, int codc, int codr, int codm, string nomb) {
    if (r == nullptr) {
        r = new MNodo{ codp, codc, codr, codm, nomb, nullptr, nullptr, 1, 0 };
    }
    else if (codm <= r->codigom) {
        r->Hizq = insertar(r->Hizq, codp, codc, codr, codm, nomb);
    }
    else if (codm > r->codigom) {
        r->Hder = insertar(r->Hder, codp, codc, codr, codm, nomb);
    }

    r = skew(r);
    r = split(r);
    return r;
}

void ArbolAA::Modificar(int pais, int ciudad, int rest, int menu, string nombren)
{
    if (raiz != NULL)
        ModificarM(raiz, pais, ciudad, rest, menu, nombren);
}

#endif // !MENUS_H
