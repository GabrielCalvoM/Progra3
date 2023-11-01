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

void ModificarC(CiudadNodo* R, int pais, int ciudad, string nombren);



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
    bool ArbolVacio() { return raiz == NULL; }
    void borrar(int ciudad); 

};

#endif // !CIUDADES_H
