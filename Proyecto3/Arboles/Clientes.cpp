#include "Clientes.h"

using namespace std;

// Árbol

void ArbolB::InsertaNodo(int ced, std::string nom) {
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
/*
void Pagina::reporte(Pagina* R) {
    if (R != NULL) {
        for (int i = 1; i <= R->cuenta; i++) {
            ofstream arch("Reporte_Clientes.txt", std::ios::app);
            if (!arch.is_open())
                cout << "ERROR" << endl;
            else
            {
                arch << R->cliente[i]->cedula << " --- " << R->cliente[i]->nombre << endl;
            }
        }
        for (int i = 0; i <= R->cuenta; i++) {
            PreordenR(R->rama[i]);
        }
    }
}

void ArbolB::reporte4()
{
    if (ArbolVacio())
    {
        cout << "No hay productos disponibles" << endl;
    }
    else
    {
        ofstream archivo("Reporte_Clientes.txt");
        if (!archivo.is_open()) {
            cout << "No se pudo abrir el archivo" << endl;
            return;
        }
        archivo << "-----Reporte Clientes-----" << endl << endl;
        archivo << "Cedula  ---- Nombre" << endl << endl;
        archivo.close();

        raiz->reporte(raiz);

        ofstream arch("Reporte_Clientes.txt", std::ios::app);
        if (!arch.is_open())
            cout << "ERROR" << endl;
        else
            arch << endl << endl << "-------------------------------------------";
        arch.close();
    }
}
*/
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


void ArbolB::Eliminar(int C1, ppagina r) {
    bool encontrado = false;
    ppagina P = NULL;

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

void ArbolB::EliminarRegistro(int C1, ppagina r, bool* encontrado) {
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
                EliminarRegistro(r->cliente[k]->cedula, r->rama[k], encontrado);

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

void ArbolB::Quitar(ppagina P, int k) {
    for (int j = k + 1; j < P->cuenta + 1; j++) {
        P->cliente[j - 1]->cedula = P->cliente[j]->cedula;
        P->rama[j - 1] = P->rama[j];
    }

    P->cuenta -= 1;
}

void ArbolB::Sucesor(ppagina P, int k) {
    ppagina Q = P->rama[k];

    while (Q->rama[0] != NULL) {
        Q = Q->rama[0];
    }

    P->cliente[k]->cedula = Q->cliente[k]->cedula;
}

void ArbolB::Restablecer(ppagina P, int k) {
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

void ArbolB::MoverDerecha(ppagina P, int k) {
    ppagina R = P->rama[k];
    ppagina Q = P->rama[k - 1];

    for (int j = R->cuenta; j >= 1; j--) {
        R->cliente[j + 1]->cedula = R->cliente[j]->cedula;
        R->rama[j + 1] = R->rama[j];
    }

    R->cuenta += 1;
    R->rama[1] = R->rama[0];
    R->cliente[1]->cedula = P->cliente[k]->cedula;

    P->cliente[k]->cedula = Q->cliente[Q->cuenta]->cedula;
    R->rama[0] = Q->rama[Q->cuenta];
    Q->cuenta -= 1;
}

void ArbolB::MoverIzquierda(ppagina P, int k) {
    ppagina Q = P->rama[k - 1];
    ppagina R = P->rama[k];

    Q->cuenta += 1;
    Q->cliente[Q->cuenta]->cedula = P->cliente[k]->cedula;
    Q->rama[Q->cuenta] = R->rama[0];

    P->cliente[k]->cedula = R->cliente[1]->cedula;
    P->rama[0] = R->rama[1];
    R->cuenta -= 1;

    for (int j = 1; j <= R->cuenta; j++) {
        R->cliente[j]->cedula = R->cliente[j]->cedula;
        R->rama[j] = R->rama[j + 1];
    }
}

void ArbolB::Combina(ppagina P, int k) {
    ppagina Q = P->rama[k];
    ppagina R = P->rama[k - 1];

    R->cuenta += 1;
    R->cliente[R->cuenta]->cedula = P->cliente[k]->cedula;
    R->rama[R->cuenta] = Q->rama[0];

    for (int j = 1; j <= Q->cuenta; j++) {
        R->cuenta += 1;
        R->cliente[R->cuenta]->cedula = Q->cliente[j]->cedula;
        R->rama[R->cuenta] = Q->rama[j];
    }

    for (int j = k; j <= P->cuenta - 1; j++) {
        P->cliente[j]->cedula = P->cliente[j + 1]->cedula;
        P->rama[j] = P->rama[j + 1];
    }

    P->cuenta -= 1;
    delete Q;
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