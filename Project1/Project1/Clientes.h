#ifndef CLIENTES_H
#define CLIENTES_H

using namespace std;

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

void ArbolB::InsertaNodo(int ced, string nom) {
    Inserta(ced, nom, raiz);
}

void ArbolB::Inserta(int C1, string nom, ppagina R) {
    bool EmpujarArriba = false;
    int x = 0;
    ppagina xr = NULL;
    ppagina P = NULL;

    Empujar(C1, nom, R, &EmpujarArriba, &x, &xr);

    if (EmpujarArriba) {
        P = new Pagina(x, nom);
        P->rama[0] = raiz;
        P->rama[1] = xr;
        raiz = P;
    }
}

void ArbolB::Empujar(int C1, string nom, ppagina R, bool* EA, int* mediana, ppagina* x) {
    int k = 0;
    bool Esta = false;

    if (R == NULL) {
        *EA = true;
        *mediana = C1;
        x = NULL;
    }
    else {
        BuscarNodo(C1, R, &Esta, &k);

        if (!Esta) {
            Empujar(C1, nom, R->rama[k], EA, mediana, x);

            if (*EA) {
                if (R->cuenta < 4) {
                    *EA = false;
                    MeterHoja(*mediana, nom, *x, R, k);
                }
                else {
                    *EA = true;
                    DividirNodo(*mediana, nom, *x, R, k, mediana, x);
                }
            }
        }
    }
}

void ArbolB::BuscarNodo(int cedula, ppagina P, bool* Encontrado, int* k) {
    if (cedula < P->cliente[1]->cedula) {
        *Encontrado = false;
        *k = 0;
    }
    else {
        *k = P->cuenta;

        while (cedula < P->cliente[*k]->cedula && *k > 1) {
            *k -= 1;
        }

        if (cedula == P->cliente[*k]->cedula) {
            *Encontrado = true;
        }
        else {
            *Encontrado = false;
        }
    }
}

void ArbolB::MeterHoja(int x, string nom, ppagina xder, ppagina P, int k) {
    for (int i = P->cuenta; i >= k + 1; i--) {
        P->cliente[i + 1] = P->cliente[i];
        P->rama[i + 1] = P->rama[i];
    }

    P->cliente[k + 1] = new ClienteNodo(x, nom);
    P->rama[k + 1] = xder;
    P->cuenta += 1;
}

void ArbolB::DividirNodo(int x, string nom, ppagina xder, ppagina P, int k, int* Mda, ppagina* Mder) {
    int posmoda;
    if (k <= 2) {
        posmoda = 2;
    }
    else {
        posmoda = 3;
    }

    *Mder = new Pagina();

    for (int i = posmoda + 1; i <= 4; i++) {
        (*Mder)->cliente[i - posmoda] = P->cliente[i];
        (*Mder)->rama[i - posmoda] = P->rama[i];
    }

    (*Mder)->cuenta = 4 - posmoda;
    P->cuenta = posmoda;

    if (k <= 2) {
        MeterHoja(x, nom, xder, P, k);
    }
    else {
        MeterHoja(x, nom, xder, *Mder, k - posmoda);
    }

    *Mda = P->cliente[P->cuenta]->cedula;
    (*Mder)->rama[0] = P->rama[P->cuenta];
    P->cuenta -= 1;
}

bool ArbolB::VerificarCliente(int ced) {
    return VerificarNodo(ced, raiz);
}

bool ArbolB::VerificarNodo(int ced, ppagina r) {
    bool existe = false;
    int k = 0;

    if (r != NULL) {
        BuscarNodo(ced, r, &existe, &k);

        if (existe == false) {
            for (int i = 0; i <= r->cuenta; i++) {
                if (existe == false) {
                    existe = VerificarNodo(ced, r->rama[i]);
                }
            }
        }
    }

    return existe;
}

clnodo ArbolB::getCliente(int ced) {
    return getNodo(ced, raiz);
}

clnodo ArbolB::getNodo(int ced, ppagina r) {
    bool existe = false;
    int k = 0;
    clnodo cliente = NULL;

    if (r != NULL) {
        BuscarNodo(ced, r, &existe, &k);

        if (!existe) {
            cliente = getNodo(ced, r->rama[k]);
        }
        else if (existe) {
            return r->cliente[k];
        }
    }

    return cliente;
}

void ArbolB::ModificarCliente(int ced, string nuevo) {
    ModificarNodo(ced, raiz, nuevo);
}

void ArbolB::ModificarNodo(int ced, ppagina r, string nuevo) {
    bool existe = false;
    int k = 0;

    if (r != NULL) {
        BuscarNodo(ced, r, &existe, &k);

        if (existe == false) {
            for (int i = 0; i <= r->cuenta; i++) {
                if (existe == false) {
                    ModificarNodo(ced, r->rama[i], nuevo);
                }
            }
        }
        else {
            r->cliente[k]->nombre = nuevo;
        }
    }
}

void ArbolB::LeerClientes() {
    ifstream archivo;
    string str;
    ppagina aux;

    archivo.open("Clientes.txt");
    aux = raiz;

    while (getline(archivo, str))
    {
        int ced = stoi(ObtenerCodigo(str, 0));
        string nom = ObtenerCodigo(str, 1);
        InsertaNodo(ced, nom);
    }

    archivo.close();
}

#endif //CLIENTES_H