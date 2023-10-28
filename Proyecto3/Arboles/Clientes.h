#ifndef CLIENTES_H
#define CLIENTES_H

#include "ArbolAux.h"

class ClienteNodo {
private:
    int cedula;
    string nombre;

    friend class Pagina;
    friend class ArbolB;
    friend class Cola;

public:
    ClienteNodo(int ced, string nom) {
        cedula = ced;
        nombre = nom;
    }
    int getCedula() { return cedula; }
    string getNombre() { return nombre; }
};

typedef ClienteNodo* clnodo;

class Pagina {
public:

    Pagina() {}

    Pagina(int ced, string nom) {
        cliente[1] = new ClienteNodo(ced, nom);
        cuenta = 1;
    }

    void PreordenR(Pagina* R);
    void InordenR();
    void PostordenR(Pagina* R);
    void reporte(Pagina* R);

    int cuenta = 0;
    clnodo cliente[5] = { NULL, NULL, NULL, NULL, NULL };
    Pagina* rama[5] = { NULL, NULL, NULL, NULL, NULL };

    friend class ArbolB;
};

typedef Pagina* ppagina;

class ArbolB {
public:

    bool ArbolVacio() { return raiz == NULL; }
    ppagina getRaiz() { return raiz; }
    void InsertaNodo(int ced, string nom);
    void Inserta(int C1, string nom, ppagina R);
    void Empujar(int C1, string nom, ppagina R, bool* EA, int* mdna, ppagina* x);
    void BuscarNodo(int Clave, ppagina P, bool* Encontrado, int* k);
    void MeterHoja(int Mdna, string nom, ppagina x, ppagina R, int k);
    void DividirNodo(int x, string nom, ppagina xder, ppagina P, int k, int* Mdna, ppagina* mder);
    void LeerClientes();
    bool VerificarCliente(int ced);
    bool VerificarNodo(int ced, ppagina r);
    clnodo getCliente(int ced);
    clnodo getNodo(int ced, ppagina r);
    void MostrarCliente(int ced);
    void MostrarNodo(int ced, ppagina r);
    void ModificarCliente(int ced, string nuevo);
    void ModificarNodo(int ced, ppagina r, string nuevo);
    void MostrarB();
    void Mostrar(ppagina r, string indent, int rama);
    void reporte();
    void reporte_pagina(ppagina r);

private:

    Pagina* raiz = NULL;

};

#endif //CLIENTES_H