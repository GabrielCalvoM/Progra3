#ifndef CIUDADES_H
#define CIUDADES_H

#include "Paises.h"

using namespace std;

class CiudadNodo {
public:

    CiudadNodo(int pais, int ciudad, string nom, CiudadNodo* der = NULL, CiudadNodo* izq = NULL, CiudadNodo* sig = NULL, CiudadNodo* ant = NULL) :
        Hizq(izq), Hder(der), codigop(pais), codigoc(ciudad), nombre(nom), siguiente(sig), anterior(ant), FB(0) {}


    int codigop, codigoc;
    string nombre;
    int FB;
    CiudadNodo* Hizq, * Hder, * siguiente, * anterior;

    friend class Pila;
    friend class ArbolP;

    void InsertaBinario(int pais, int ciudad, string nom);
    CiudadNodo* VerificarCiudad(int pais, int ciudad);
};

typedef CiudadNodo* cnodo;

void CiudadNodo::InsertaBinario(int pais, int ciudad, string nom)
{
    if (pais < codigop) {
        if (Hizq == NULL) {
            Hizq = new CiudadNodo(pais, ciudad, nom);
        }
        else {
            Hizq->InsertaBinario(pais, ciudad, nom);
        }
    }
    else if (pais > codigop) {
        if (Hder == NULL) {
            Hder = new CiudadNodo(pais, ciudad, nom);
        }
        else {
            Hder->InsertaBinario(pais, ciudad, nom);
        }
    }

    else {
        if (ciudad < codigoc) {
            if (Hizq == NULL) {
                Hizq = new CiudadNodo(pais, ciudad, nom);
            }
            else {
                Hizq->InsertaBinario(pais, ciudad, nom);
            }
        }
        else if (ciudad > codigoc) {
            if (Hder == NULL) {
                Hder = new CiudadNodo(pais, ciudad, nom);
            }
            else {
                Hder->InsertaBinario(pais, ciudad, nom);
            }
        }
    }
}

cnodo CiudadNodo::VerificarCiudad(int pais, int ciudad) {
    if (this != NULL) {
        if ((pais == codigop) && (ciudad == codigoc))
            return this;
        else {
            if (Hizq->VerificarCiudad(pais, ciudad))
                return Hizq->VerificarCiudad(pais, ciudad);
            else
                return Hder->VerificarCiudad(pais, ciudad);
        }
    }

    return this;
}

void ModificarC(CiudadNodo* R, int pais, int ciudad, string nombren) {
    if ((pais == R->codigop) && (ciudad == R->codigoc))
    {
        R->nombre = nombren;
    }
    else {
        if (R->Hizq) {
            ModificarC(R->Hizq, pais, ciudad, nombren);

        }
        if (R->Hder) {
            ModificarC(R->Hder, pais, ciudad, nombren);
        }
    }
}

class ArbolC {
public:
    cnodo raiz;

    ArbolC() :raiz(NULL) {}

    void InsertaNodo(int pais, int ciudad, string nom, ArbolP paises);
    bool ArbolVacio() { return raiz == NULL; }
    cnodo VerificarCiudad(int pais, int ciudad);
    void LeerCiudades(ArbolP paises);
    void Preorden();
    void Postorden();
    void Inorden();

    bool Hh = false;

    void InsertaNodo(cnodo padre, CiudadNodo* r, bool, int pais, int ciudad, string nom, bool* hder);
    void RotacionDobleIzquierda(cnodo n, CiudadNodo* n1, CiudadNodo* n2, bool hder);
    void RotacionDobleDerecha(cnodo n, CiudadNodo* n1, CiudadNodo* n2, bool hder);
    void RotacionSimpleIzquierda(cnodo n, CiudadNodo* n1, CiudadNodo* n2, bool hder);
    void RotacionSimpleDerecha(cnodo n, CiudadNodo* n1, CiudadNodo* n2, bool hder);
    void MostrarAVL();
    void Mostrar(cnodo raiz, string indent, bool ultimo);
    void MostrarE(int pais, int ciudad);
    void Modificar(int pais, int ciudad, string nombren);

};

void ArbolC::InsertaNodo(int pais, int ciudad, string nom, ArbolP paises) {
    if (paises.VerificarPais(pais)) {
        if (VerificarCiudad(pais, ciudad) == NULL) {
            if (raiz == NULL) {
                raiz = new CiudadNodo(pais, ciudad, nom);
            }
            else {
                //raiz->InsertaBinario(pais, ciudad, nom);
                bool der = false;
                InsertaNodo(NULL, raiz, false, pais, ciudad, nom, &der);
            }
        }
    }
}

void ArbolC::InsertaNodo(cnodo padre, cnodo ra, bool hh, int pais, int ciudad, string nom, bool* hder) {
    cnodo n1;

    if (ra == NULL) {
        ra = new CiudadNodo(pais, ciudad, nom);
        Hh = true;

        if (*hder) {
            padre->Hder = ra;
        }
        else {
            padre->Hizq = ra;
        }
    }
    else {

        if (ciudad <= ra->codigoc) {
            bool der = false;
            InsertaNodo(ra, ra->Hizq, hh, pais, ciudad, nom, &der);

            if (Hh) {
                switch (ra->FB)
                {
                case 1: ra->FB = 0;
                    Hh = false;
                    break;
                case 0: ra->FB = -1;
                    break;
                case -1: n1 = ra->Hizq;
                    if (n1->FB == -1) {
                        RotacionSimpleIzquierda(padre, ra, n1, *hder);
                    }
                    else {
                        RotacionDobleIzquierda(padre, ra, n1, *hder);
                    }
                    Hh = false;
                    break;
                }
            }
        }
        else{
            bool der = true;
            InsertaNodo(ra, ra->Hder, hh, pais, ciudad, nom, &der);

            if(Hh){
                switch(ra->FB){
                    case -1: ra->FB=0;
                    Hh = false;
                    break;
                    case 0: ra->FB=1;
                    break;
                    case 1:n1=ra->Hder;
                    if(n1->FB=1){
                        RotacionSimpleDerecha(padre, ra, n1, *hder);
                    }else{
                        RotacionDobleDerecha(padre, ra, n1, *hder);
                    }
                    Hh=false;
                    break;
                }
            }
        }
    }
}

void ArbolC::RotacionDobleIzquierda(cnodo padre, CiudadNodo* n, CiudadNodo* n1, bool hder) {
    CiudadNodo* n2;
    n2 = n1->Hder;
    n->Hizq = n2->Hder;
    n2->Hder = n;
    n1->Hder = n2->Hizq;
    n2->Hizq = n1;

    if (n2->FB == 1) {
        n1->FB = -1;
    }
    else {
        n1->FB = 0;
    }
    if (n2->FB == -1) {
        n->FB = 1;
    }
    else {
        n->FB = 0;
    }

    if (padre == NULL) {
        raiz = n2;
    }
    else {
        if (hder)
            padre->Hder = n2;
        else
            padre->Hizq = n2;
    }

    n2->FB = 0;
}

void ArbolC::RotacionDobleDerecha(cnodo padre, CiudadNodo* n, CiudadNodo* n1, bool hder) {
    CiudadNodo* n2;
    n2 = n1->Hizq;
    n->Hder = n2->Hizq;
    n2->Hizq = n;
    n1->Hizq = n2->Hder;
    n2->Hder = n1;

    if (n2->FB == 1) {
        n->FB = -1;
    }
    else {
        n->FB = 0;
    }
    if (n2->FB == -1) {
        n1->FB = 1;
    }
    else {
        n1->FB = 0;
    }

    if (padre == NULL) {
        raiz = n2;
    }
    else {
        if (hder)
            padre->Hder = n2;
        else
            padre->Hizq = n2;
    }

    n2->FB = 0;
}

void ArbolC::RotacionSimpleDerecha(cnodo padre, CiudadNodo* n, CiudadNodo* n1, bool hder) {
    cnodo n2 = n1;
    n->Hder = n1->Hizq;
    n2->Hizq = n;

    if (n2->FB == 1) {
        n->FB = 0;
        n2->FB = 0;
    }
    else {
        n->FB = 1;
        n2->FB = -1;
    }

    if (padre == NULL) {
        raiz = n1;
    }
    else {
        if (hder)
            padre->Hder = n2;
        else
            padre->Hizq = n2;
    }
}

void ArbolC::RotacionSimpleIzquierda(cnodo padre, CiudadNodo* n, CiudadNodo* n1, bool hder) {
    cnodo n2 = n1;
    n->Hizq = n1->Hder;
    n2->Hder = n;

    if (n2->FB == -1) {
        n->FB = 0;
        n2->FB = 0;
    }
    else {
        n->FB = -1;
        n2->FB = -1;
    }

    if (padre == NULL) {
        raiz = n1;
    }
    else {
        if (hder)
            padre->Hder = n2;
        else
            padre->Hizq = n2;
    }
}

cnodo ArbolC::VerificarCiudad(int pais, int ciudad) {
    if (ArbolVacio())
        return NULL;
    else
        return raiz->VerificarCiudad(pais, ciudad);
}

void ArbolC::LeerCiudades(ArbolP paises) {
    ifstream archivo;
    string str;
    cnodo aux;

    archivo.open("Ciudades.txt");
    aux = raiz;

    while (getline(archivo, str))
    {
        int codp = stoi(ObtenerCodigo(str, 0));
        int codc = stoi(ObtenerCodigo(str, 1));
        string nom = ObtenerCodigo(str, 2);
        InsertaNodo(codp, codc, nom, paises);
    }

    archivo.close();
}

void ArbolC::Modificar(int pais, int ciudad, string nombren)
{
    if (!ArbolVacio()){
        ModificarC(raiz, pais, ciudad, nombren);
    }
}

#endif // !CIUDADES_H
