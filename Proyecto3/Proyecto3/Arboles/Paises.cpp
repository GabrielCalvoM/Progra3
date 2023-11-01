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

void ArbolP::borrar(int cod)
{
    if (ArbolVacio()) {
        cout << "No hay elementos disponibles" << endl;
    }
    if ((raiz->Hder == NULL) && (raiz->Hizq == NULL))
    {
        pnodo temp = raiz;
        raiz == NULL;
        delete temp;
    }
    else
    {
        pnodo aux = raiz;


        if (aux->codigo != cod)
        {
            pnodo temp;
            if (cod > aux->codigo)
                temp = aux->Hder;
            else
                temp = aux->Hizq;

            while (temp->codigo != cod)
            {
                if (temp->codigo > cod)
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

                pnodo aux1 = temp->Hizq;
                pnodo aux2 = temp->Hder;

                if (aux2 == NULL)
                {
                    aux->Hizq = aux1;
                    delete temp;
                }
                else
                {
                    while (aux2->Hizq != NULL)
                        aux2 = aux2->Hizq;

                    aux2->Hizq = aux1->Hder;
                    aux1->Hder = temp->Hder;
                    aux->Hizq = aux1;
                    delete temp;
                }
            }
            else
            {

                pnodo aux1 = temp->Hizq;
                pnodo aux2 = temp->Hder;

                if (aux1 == NULL)
                {
                    aux->Hder = aux2;
                    delete temp;
                }
                else {
                    while (aux1->Hder != NULL)
                        aux1 = aux1->Hder;

                    aux1->Hder = aux2;
                    aux->Hder = temp->Hizq;
                    delete temp;
                }
            }
        }
        else
        {
            pnodo aux1 = aux->Hizq;
            pnodo aux2 = aux->Hder;

            while (aux2->Hizq != NULL)
            {
                aux2 = aux2->Hizq;
            }

            aux2->Hizq = aux1;
            raiz = aux->Hder;
            delete aux;
        }


    }
}

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