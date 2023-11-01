#ifndef PAISES_H
#define PAISES_H

#include "ArbolAux.h"

using namespace std;

class PaisNodo {
public:

    PaisNodo(int num, string nom, PaisNodo* der = NULL, PaisNodo* izq = NULL, PaisNodo* sig = NULL, PaisNodo* ant = NULL) :
        Hizq(izq), Hder(der), codigo(num), nombre(nom), siguiente(sig), anterior(ant), FB(0) {}


    int codigo;
    string nombre;
    int FB;
    PaisNodo* Hizq, * Hder, * siguiente, * anterior;

    friend class Pila;
    friend class ArbolP;

    void InsertaBinario(int num, string nom);
    PaisNodo* VerificarPais(int cod);
};

typedef PaisNodo* pnodo;

void ModificarR(PaisNodo* R, int cod, string nombren);

class ArbolP {
public:
    pnodo raiz;

    ArbolP() :raiz(NULL) {}

    bool ArbolVacio() { return raiz == NULL; }
    void InsertaNodo(int cod, string nom);
    void LeerPaises();
    pnodo VerificarPais(int cod);
    void Modificar(int cod, string nombren);
    bool ArbolVacio() { return raiz == NULL; }
    void borrar(int pais); 
};

#endif //PAISES_H