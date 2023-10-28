#include "Paises.h"

// Nodo

void PaisNodo::InsertaBinario(int num, string nom)
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

pnodo PaisNodo::VerificarPais(int cod) {
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

void ModificarR(PaisNodo* R, int cod, string nombren) {
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


// Arbol

void ArbolP::InsertaNodo(int cod, string nom) {
    if (raiz == NULL) {
        raiz = new PaisNodo(cod, nom);
    }
    else {
        raiz->InsertaBinario(cod, nom);
    }
}

void ArbolP::LeerPaises() {
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

pnodo ArbolP::VerificarPais(int cod) {
    if (ArbolVacio())
        return NULL;
    else
        return raiz->VerificarPais(cod);
}

void ArbolP::Modificar(int cod, string nombren) {
    if (!ArbolVacio())
    {
        ModificarR(raiz, cod, nombren);
    }
}