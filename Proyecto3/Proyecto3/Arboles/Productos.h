#ifndef PRODUCTOS_H
#define PRODUCTOS_H

#include "Menus.h"

class PrNodo {
public:

    PrNodo(int pais, int ciudad, int rest, int menu, int prod, string nom, int cal, int prec, int cantidad, int comp, PrNodo* der = NULL, PrNodo* izq = NULL, PrNodo* sig = NULL, PrNodo* ant = NULL) :
        Hizq(izq), Hder(der), codigop(pais), codigoc(ciudad), codigor(rest), codigom(menu), codigopr(prod), nombre(nom), kcal(cal), precio(prec), cant(cantidad), compra(comp), siguiente(sig), anterior(ant), FB(0) {}


    int codigop, codigoc, codigor, codigom, codigopr, kcal, precio, cant, compra;
    string nombre;
    int FB;
    PrNodo* Hizq, * Hder, * siguiente, * anterior;

    friend class Pila;
    friend class ArbolP;

    void InsertaBinario(int pais, int ciudad, string nom);
    PrNodo* VerificarProd(int codp, int codc, int codr, int codm, int codpr);
    int  getCant() { return cant; }
    void RestaCant(int cantidad);
    void SumaCant(int cantidad);
};

typedef PrNodo* prnodo;

void ModificarPr(PrNodo* m, int pais, int ciudad, int rest, int menu, int pr, string nombren, string calo, string prec, string cantidad);



class ArbolPr {
public:
    prnodo raiz;

    ArbolPr() :raiz(NULL) {}

    void InsertaNodo(int pais, int ciudad, int rest, int menu, int prod, string nom, int cal, int prec, int cantidad, ArbolAA menus);
    bool ArbolVacio() { return raiz == NULL; }
    bool VerificarPr(int codp, int codc, int codr, int codm, int codpr);
    void LeerProducto(ArbolAA Menus);
    void Preorden();
    void Postorden();
    void Inorden();

    bool Hh = false;

    void InsertaNodo(prnodo padre, PrNodo* r, bool, int pais, int ciudad, int rest, int menu, int prod, string nom, int cal, int prec, int cantidad, bool* hder);
    void RotacionDobleIzquierda(prnodo n, PrNodo* n1, PrNodo* n2, bool hder);
    void RotacionDobleDerecha(prnodo n, PrNodo* n1, PrNodo* n2, bool hder);
    void RotacionSimpleIzquierda(prnodo n, PrNodo* n1, PrNodo* n2, bool hder);
    void RotacionSimpleDerecha(prnodo n, PrNodo* n1, PrNodo* n2, bool hder);
    prnodo getProducto(int pais, int ciudad, int rest, int menu, int prod);
    prnodo getNodo(prnodo r, int pais, int ciudad, int rest, int menu, int prod);
    void MostrarAVL();
    void Mostrar(prnodo raiz, string indent, bool ultimo);
    void MostrarE(int pais, int ciudad, int rest, int menu, int prod);
    void Modificar(int pais, int ciudad, int rest, int menu, int pr, string nombren, string calo, string prec, string cantidad);
    void reporte(int pais, int ciudad, int rest, int menu);
    void reportecant(int pais, int ciudad, int rest, int menu, int prod);
    void reporteprec(int pais, int ciudad, int rest, int menu, int prod);
    void reportecomprado();
    void borrar(int prod); 
};

#endif //PRODUCTOS_H