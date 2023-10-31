#ifndef ADMINS_H
#define ADMINS_H

#include "ArbolAux.h"

class AdminNodo {
private:
    int cedula;
    string nombre;

    friend class PaginaA;
    friend class ArbolAd;
    friend class Cola;

public:
    AdminNodo(int ced, string nom) {
        cedula = ced;
        nombre = nom;
    }

    int getCedula() { return cedula; }
    string getNombre() { return nombre; }
};

typedef AdminNodo* adnodo;

class PaginaA {
public:

    PaginaA() {}

    PaginaA(int ced, string nom) {
        admin[1] = new AdminNodo(ced, nom);
        cuenta = 1;
    }

    int cuenta = 0;
    adnodo admin[5] = { NULL, NULL, NULL, NULL, NULL };
    PaginaA* rama[5] = { NULL, NULL, NULL, NULL, NULL };

    friend class ArbolAd;
};

typedef PaginaA* apagina;

class ArbolAd {
public:

    bool ArbolVacio() { return raiz == NULL; }
    void InsertaNodo(int ced, string nom);
    void Inserta(int C1, string nom, apagina R);
    void Empujar(int C1, string nom, apagina R, bool* EA, int* mdna, apagina* x);
    void BuscarNodo(int Clave, apagina P, bool* Encontrado, int* k);
    void MeterHoja(int Mdna, string nom, apagina x, apagina R, int k);
    void DividirNodo(int x, string nom, apagina xder, apagina P, int k, int* Mdna, apagina* mder);

    void EliminarAdmin(int x) { Eliminar(x, raiz); }
    void Eliminar(int C1, apagina raiz);
    void EliminarRegistro(int C1, apagina raiz, bool* encontrado);
    void Quitar(apagina P, int k);
    void Sucesor(apagina P, int k);
    void Restablecer(apagina P, int k);
    void MoverDerecha(apagina P, int k);
    void MoverIzquierda(apagina P, int k);
    void Combina(apagina P, int k);

    void LeerAdmins();
    bool VerificarAdmin(int ced);
    bool VerificarNodo(int ced, apagina r);
    adnodo getAdmin(int ced);
    adnodo getNodo(int ced, apagina r);

    void ModificarAdmin(int ced, string nuevo);
    void ModificarNodo(int ced, apagina r, string nuevo);

private:

    apagina raiz = NULL;

};

#endif //ADMINS_H