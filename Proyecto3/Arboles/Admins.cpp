#include "Admins.h"

using namespace std;


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


void ArbolAd::Eliminar(int C1, apagina r) {
    bool encontrado = false;
    apagina P = NULL;

    EliminarRegistro(C1, r, &encontrado);
    if (!encontrado) {

    }
    else {
        if (raiz->cuenta == 0) {
            P = raiz;
            raiz = raiz->rama[0];
            delete P;
        }
    }
}

void ArbolAd::EliminarRegistro(int C1, apagina r, bool* encontrado) {
    int k = 0;

    if (r == NULL) {
        *encontrado = false;
    }
    else {
        BuscarNodo(C1, r, encontrado, &k);

        if (*encontrado) {
            if (r->rama[k - 1] == NULL) {
                Quitar(r, k);
            }
            else {
                Sucesor(r, k);
                EliminarRegistro(r->admin[k]->cedula, r->rama[k], encontrado);

                if (r->rama[k]->cuenta < 2) {
                    Restablecer(r, k);
                }

                if (!*encontrado) {
                    return;
                }
            }
        }
        else {
            EliminarRegistro(C1, r->rama[k], encontrado);
            if (r->rama[k] == NULL) {
                if (r->rama[k]->cuenta < 2) {
                    Restablecer(r, k);
                }
            }
        }
    }
}

void ArbolAd::Quitar(apagina P, int k) {
    for (int j = k + 1; j < P->cuenta + 1; j++) {
        P->admin[j - 1]->cedula = P->admin[j]->cedula;
        P->rama[j - 1] = P->rama[j];
    }

    P->cuenta -= 1;
}

void ArbolAd::Sucesor(apagina P, int k) {
    apagina Q = P->rama[k];

    while (Q->rama[0] != NULL) {
        Q = Q->rama[0];
    }

    P->admin[k]->cedula = Q->admin[k]->cedula;
}

void ArbolAd::Restablecer(apagina P, int k) {
    if (k > 0) {
        if (P->rama[k - 1]->cuenta > 2) {
            MoverDerecha(P, k);
        }
        else {
            Combina(P, k);
        }
    }
    else {
        if (P->rama[1]->cuenta > 2) {
            MoverIzquierda(P, 1);
        }
        else {
            Combina(P, 1);
        }
    }
}

void ArbolAd::MoverDerecha(apagina P, int k) {
    apagina R = P->rama[k];
    apagina Q = P->rama[k - 1];

    for (int j = R->cuenta; j >= 1; j--) {
        R->admin[j + 1]->cedula = R->admin[j]->cedula;
        R->rama[j + 1] = R->rama[j];
    }

    R->cuenta += 1;
    R->rama[1] = R->rama[0];
    R->admin[1]->cedula = P->admin[k]->cedula;

    P->admin[k]->cedula = Q->admin[Q->cuenta]->cedula;
    R->rama[0] = Q->rama[Q->cuenta];
    Q->cuenta -= 1;
}

void ArbolAd::MoverIzquierda(apagina P, int k) {
    apagina Q = P->rama[k - 1];
    apagina R = P->rama[k];

    Q->cuenta += 1;
    Q->admin[Q->cuenta]->cedula = P->admin[k]->cedula;
    Q->rama[Q->cuenta] = R->rama[0];

    P->admin[k]->cedula = R->admin[1]->cedula;
    P->rama[0] = R->rama[1];
    R->cuenta -= 1;

    for (int j = 1; j <= R->cuenta; j++) {
        R->admin[j]->cedula = R->admin[j]->cedula;
        R->rama[j] = R->rama[j + 1];
    }
}

void ArbolAd::Combina(apagina P, int k) {
    apagina Q = P->rama[k];
    apagina R = P->rama[k - 1];

    R->cuenta += 1;
    R->admin[R->cuenta]->cedula = P->admin[k]->cedula;
    R->rama[R->cuenta] = Q->rama[0];

    for (int j = 1; j <= Q->cuenta; j++) {
        R->cuenta += 1;
        R->admin[R->cuenta]->cedula = Q->admin[j]->cedula;
        R->rama[R->cuenta] = Q->rama[j];
    }

    for (int j = k; j <= P->cuenta - 1; j++) {
        P->admin[j]->cedula = P->admin[j + 1]->cedula;
        P->rama[j] = P->rama[j + 1];
    }

    P->cuenta -= 1;
    delete Q;
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