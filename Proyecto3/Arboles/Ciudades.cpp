#include "Ciudades.h"

// Nodo

void reporte16i(CiudadNodo* R)
{
    if (R == NULL)
        return;
    else
    {
            ofstream archivo("Reporte_Ciudades_Eliminadas.txt", std::ios::app);
            if (!archivo.is_open())
                cout << "ERROR" << endl;
            else
            {
                archivo << R->codigoc << "     " << R->codigop << "     " << R->nombre << endl;
                archivo.close();
            }
        
        reporte16i(R->Hizq);
        reporte16i(R->Hder);
    }
}

void ArbolC::reporte16()
{
    if (ArbolVacio())
    {
        cout << "No hay ciudades disponibles" << endl;
    }
    else
    {
        ofstream archivo("Reporte_Ciudades_Eliminadas.txt");
        if (!archivo.is_open()) {
            cout << "No se pudo abrir el archivo" << endl;
            return;
        }
        archivo << "-----Reporte Ciudades Eliminadas-----" << endl << endl;
        archivo << "Codigo Ciudad -- Codigo Pais -- Nombre" << endl << endl;
        archivo.close();

        reporte16i(raiz);

        ofstream arch("Reporte_Ciudades_Eliminadas.txt", std::ios::app);
        if (!arch.is_open())
            cout << "ERROR" << endl;
        else
            arch << endl << endl << "-------------------------------------------";
        arch.close();
    }
}

void reporte2i(CiudadNodo* R, int pais)
{
    if (R == NULL)
        return;
    else
    {

        if (R->codigop == pais)
        {
            ofstream archivo("Reporte_Ciudades.txt", std::ios::app);
            if (!archivo.is_open())
                cout << "ERROR" << endl;
            else
            {
                archivo << R->codigoc << "     " << R->nombre << endl;
                archivo.close();
            }
        }
        reporte2i(R->Hizq, pais);
        reporte2i(R->Hder, pais);
    }
}

void ArbolC::reporte2(int pais)
{
    if (ArbolVacio())
    {
        cout << "No hay ciudades disponibles" << endl;
    }
    else
    {
        ofstream archivo("Reporte_Ciudades.txt");
        if (!archivo.is_open()) {
            cout << "No se pudo abrir el archivo" << endl;
            return;
        }
        archivo << "-----Reporte Ciudades-----" << endl << endl;
        archivo << "Pais: " << pais << endl;
        archivo << "Codigo Ciudad ---- Nombre" << endl << endl;
        archivo.close();

        reporte2i(raiz, pais); 

        ofstream arch("Reporte_Ciudades.txt", std::ios::app);
        if (!arch.is_open())
            cout << "ERROR" << endl;
        else
            arch << endl << endl << "-------------------------------------------";
        arch.close();
    }
}

void ArbolC::borrar(int pais, int ciudad, ArbolC eliminados, ArbolP paises)
{
    if (ArbolVacio()) {
        cout << "No hay elementos disponibles" << endl;
    }
    if ((raiz->Hder == NULL) && (raiz->Hizq == NULL))
    {
        if ((raiz->codigop == pais) && (raiz->codigoc == ciudad))
        {
            cnodo temp = raiz;
            raiz == NULL;
            eliminados.InsertaNodo(temp->codigop, temp->codigoc, temp->nombre, paises);
            delete temp;
        } 
    }
    else
    {
        cnodo aux = raiz;

        if ((aux->codigop  != pais) && (aux->codigoc != ciudad))
        {
            cnodo temp;
            if (ciudad > aux->codigoc)
                temp = aux->Hder;
            else
                temp = aux->Hizq;

            while ((temp->codigoc != ciudad)&&(temp->codigop != pais))
            {
                if (temp->codigoc > ciudad)
                {
                    aux = temp;
                    temp = temp->Hizq;
                }
                else
                {
                    aux = temp;
                    temp = temp->Hder;
                }
            }

            if (aux->Hizq == temp)
            {

                cnodo aux1 = temp->Hizq;
                cnodo aux2 = temp->Hder;

                if (aux2 == NULL)
                {
                    aux->Hizq = aux1;
                    eliminados.InsertaNodo(temp->codigop, temp->codigoc, temp->nombre, paises);
                    delete temp;
                }
                else
                {
                    while (aux2->Hizq != NULL)
                        aux2 = aux2->Hizq;

                    aux2->Hizq = aux1->Hder;
                    aux1->Hder = temp->Hder;
                    aux->Hizq = aux1;
                    eliminados.InsertaNodo(temp->codigop, temp->codigoc, temp->nombre, paises);
                    delete temp;
                }
            }
            else
            {

                cnodo aux1 = temp->Hizq;
                cnodo aux2 = temp->Hder;

                if (aux1 == NULL)
                {
                    aux->Hder = aux2;
                    eliminados.InsertaNodo(temp->codigop, temp->codigoc, temp->nombre, paises); 
                    delete temp;
                }
                else {
                    while (aux1->Hder != NULL)
                        aux1 = aux1->Hder;

                    aux1->Hder = aux2;
                    aux->Hder = temp->Hizq;
                    eliminados.InsertaNodo(temp->codigop, temp->codigoc, temp->nombre, paises); 
                    delete temp;
                }
            }
        }
        else
        {
            cnodo aux1 = aux->Hizq;
            cnodo aux2 = aux->Hder;

            while (aux2->Hizq != NULL)
            {
                aux2 = aux2->Hizq;
            }

            aux2->Hizq = aux1;
            raiz = aux->Hder;
            eliminados.InsertaNodo(aux->codigop, aux->codigoc, aux->nombre, paises); 
            delete aux;
        }


    }
}


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



// Árbol

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
        else {
            bool der = true;
            InsertaNodo(ra, ra->Hder, hh, pais, ciudad, nom, &der);

            if (Hh) {
                switch (ra->FB) {
                case -1: ra->FB = 0;
                    Hh = false;
                    break;
                case 0: ra->FB = 1;
                    break;
                case 1:n1 = ra->Hder;
                    if (n1->FB = 1) {
                        RotacionSimpleDerecha(padre, ra, n1, *hder);
                    }
                    else {
                        RotacionDobleDerecha(padre, ra, n1, *hder);
                    }
                    Hh = false;
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
    if (!ArbolVacio()) {
        ModificarC(raiz, pais, ciudad, nombren);
    }
}