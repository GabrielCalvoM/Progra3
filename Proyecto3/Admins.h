#ifndef ADMINS_H
#define ADMINS_H

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
    void LeerAdmins();
    bool VerificarAdmin(int ced);
    bool VerificarNodo(int ced, apagina r);
    adnodo getAdmin(int ced);
    adnodo getNodo(int ced, apagina r);
    void ModificarAdmin(int ced, string nuevo);
    void ModificarNodo(int ced, apagina r, string nuevo);

private:

    PaginaA* raiz = NULL;

};

void ArbolAd::InsertaNodo(int ced, string nom) {
    Inserta(ced, nom, raiz);
}

void ArbolAd::Inserta(int C1, string nom, apagina R) {
    bool EmpujarArriba = false;
    int x = 0;
    apagina xr = NULL;
    apagina P = NULL;

    Empujar(C1, nom, R, &EmpujarArriba, &x, &xr);

    if (EmpujarArriba) {
        P = new PaginaA(x, nom);
        P->rama[0] = raiz;
        P->rama[1] = xr;
        raiz = P;
    }
}

void ArbolAd::Empujar(int C1, string nom, apagina R, bool* EA, int* mediana, apagina* x) {
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

void ArbolAd::BuscarNodo(int cedula, apagina P, bool* Encontrado, int* k) {
    if (cedula < P->admin[1]->cedula) {
        *Encontrado = false;
        *k = 0;
    }
    else {
        *k = P->cuenta;

        while (cedula < P->admin[*k]->cedula && *k > 1) {
            *k -= 1;
        }

        if (cedula == P->admin[*k]->cedula) {
            *Encontrado = true;
        }
        else {
            *Encontrado = false;
        }
    }
}

void ArbolAd::MeterHoja(int x, string nom, apagina xder, apagina P, int k) {
    for (int i = P->cuenta; i >= k + 1; i--) {
        P->admin[i + 1] = P->admin[i];
        P->rama[i + 1] = P->rama[i];
    }

    P->admin[k + 1] = new AdminNodo(x, nom);
    P->rama[k + 1] = xder;
    P->cuenta += 1;
}

void ArbolAd::DividirNodo(int x, string nom, apagina xder, apagina P, int k, int* Mda, apagina* Mder) {
    int posmoda;
    if (k <= 2) {
        posmoda = 2;
    }
    else {
        posmoda = 3;
    }

    *Mder = new PaginaA();

    for (int i = posmoda + 1; i <= 4; i++) {
        (*Mder)->admin[i - posmoda] = P->admin[i];
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

    *Mda = P->admin[P->cuenta]->cedula;
    (*Mder)->rama[0] = P->rama[P->cuenta];
    P->cuenta -= 1;
}

bool ArbolAd::VerificarAdmin(int ced) {
    return VerificarNodo(ced, raiz);
}

bool ArbolAd::VerificarNodo(int ced, apagina r) {
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

adnodo ArbolAd::getAdmin(int ced) {
    return getNodo(ced, raiz);
}

adnodo ArbolAd::getNodo(int ced, apagina r) {
    bool existe = false;
    int k = 0;
    adnodo admin = NULL;

    if (r != NULL) {
        BuscarNodo(ced, r, &existe, &k);

        if (!existe) {
            admin = getNodo(ced, r->rama[k]);
        }
        else if (existe) {
            return r->admin[k];
        }
    }

    return admin;
}

void ArbolAd::ModificarAdmin(int ced, string nuevo) {
    ModificarNodo(ced, raiz, nuevo);
}

void ArbolAd::ModificarNodo(int ced, apagina r, string nuevo) {
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
            r->admin[k]->nombre = nuevo;
        }
    }
}

void ArbolAd::LeerAdmins() {
    ifstream archivo;
    string str;
    apagina aux;

    archivo.open("Administradores.txt");
    aux = raiz;

    while (getline(archivo, str))
    {
        int ced = stoi(ObtenerCodigo(str, 0));
        string nom = ObtenerCodigo(str, 1);
        InsertaNodo(ced, nom);
    }

    archivo.close();
}

#endif //ADMINS_H