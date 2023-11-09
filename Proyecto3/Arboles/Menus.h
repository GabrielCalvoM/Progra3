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

void ModificarM(MNodo* m, int pais, int ciudad, int rest, int menu, string nombren);

class ArbolAA {
public:
    MNodo* raiz = NULL;
    ArbolAA() {}
    bool ArbolVacio() { return raiz == NULL; }
    void Inorden();
    void MostrarE(int pais, int ciudad, int rest, int menu);
    mnodo VerificarM(int codp, int codc, int codr, int codm);
    void LeerMenu(ArbolR restaurantes);
    void InsertaNodo(int pais, int ciudad, int rest, int menu, string nom, ArbolR restaurantes);
    MNodo* insertar(MNodo* r, int codp, int codc, int codr, int codm, string nomb);
    void inorder(MNodo* r);
    void Modificar(int pais, int ciudad, int rest, int menu, string nombren);
    void reporte7();
    void reporte17();
    void borrar(int pais, int ciudad, int rest, int menu, ArbolAA eliminado, ArbolR restaurantes); 

private:
    MNodo* skew(MNodo* r);
    MNodo* split(MNodo* r);


};

#endif // !MENUS_H
