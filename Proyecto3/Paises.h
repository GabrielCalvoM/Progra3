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

inline void PaisNodo::InsertaBinario(int num, string nom)
{
    if (num < codigo) {
        if (Hizq == NULL) {
            Hizq = new PaisNodo(num, nom);
        }
        else {
            Hizq->InsertaBinario(num, nom);
        }
    }
    else if (num > codigo) {
        if (Hder == NULL) {
            Hder = new PaisNodo(num, nom);
        }
        else {
            Hder->InsertaBinario(num, nom);
        }
    }
}

inline pnodo PaisNodo::VerificarPais(int cod) {
    if (cod == codigo)
        return this;
    else {
        if (Hizq) {
            if (Hizq->VerificarPais(cod))
                return Hizq->VerificarPais(cod);
        }
        else if (Hder) {
            if (Hder->VerificarPais(cod))
                return Hder->VerificarPais(cod);
        }

        return NULL;
    }
}

inline void ModificarR(PaisNodo* R, int cod, string nombren) {
    if (R == NULL)
    {
        return;
    }
    if (R->codigo == cod)
    {
        R->nombre = nombren;
    }
    if (R->codigo < cod)
        ModificarR(R->Hder, cod, nombren);
    if (R->codigo > cod)
        ModificarR(R->Hizq, cod, nombren);
    return;
}



class ArbolP {
public:
    pnodo raiz;

    ArbolP() :raiz(NULL) {}

    bool ArbolVacio() { return raiz == NULL; }
    void InsertaNodo(int cod, string nom);
    void LeerPaises();
    pnodo VerificarPais(int cod);
    void Modificar(int cod, string nombren);
};

inline void ArbolP::InsertaNodo(int cod, string nom) {
    if (raiz == NULL) {
        raiz = new PaisNodo(cod, nom);
    }
    else {
        raiz->InsertaBinario(cod, nom);
    }
}

inline void ArbolP::LeerPaises() {
    ifstream archivo;
    string str;
    pnodo aux;

    archivo.open("Paises.txt");
    aux = raiz;

    while (getline(archivo, str))
    {
        int cod = stoi(ObtenerCodigo(str, 0));
        string nom = ObtenerCodigo(str, 1);
        InsertaNodo(cod, nom);
    }

    archivo.close();
}

inline pnodo ArbolP::VerificarPais(int cod) {
    if (ArbolVacio())
        return NULL;
    else
        return raiz->VerificarPais(cod);
}

inline void ArbolP::Modificar(int cod, string nombren) {
    if (!ArbolVacio())
    {
        ModificarR(raiz, cod, nombren);
    }
}

#endif //PAISES_H