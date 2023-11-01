#include "Menus.h"

// Nodo

MNodo* MNodo::VerificarMR(int codp, int codc, int codr, int codm) {
    if (this == NULL) {
        return NULL;
    }
    else if ((codp == codigop) && (codc == codigoc) && (codr == codigor) && (codm == codigom))
        return this;
    else {
        if (Hizq->VerificarMR(codp, codc, codr, codm) != NULL) {
            return Hizq->VerificarMR(codp, codc, codr, codm);
        }
        else {
            return Hder->VerificarMR(codp, codc, codr, codm);
        }
    }
}

void ModificarM(MNodo* m, int pais, int ciudad, int rest, int menu, string nombren)
{
    if (m == NULL)
    {
        return;
    }
    if ((pais == m->codigop) && (ciudad == m->codigoc) && (rest == m->codigor) && (menu == m->codigom))
    {
        m->nombre = nombren;
        return;
    }
    else
    {
        if (menu <= m->codigom)
            ModificarM(m->Hizq, pais, ciudad, rest, menu, nombren);
        else
            ModificarM(m->Hder, pais, ciudad, rest, menu, nombren);
    }
}

void ArbolAA::borrar(int menu)
{
    if (ArbolVacio()) {
        cout << "No hay elementos disponibles" << endl;
    }
    if ((raiz->Hder == NULL) && (raiz->Hizq == NULL))
    {
        MNodo* temp = raiz;
        raiz == NULL;
        delete temp;
    }
    else
    {
        MNodo* aux = raiz;


        if (aux->codigom != menu)
        {
            MNodo* temp;
            if (menu > aux->codigom)
                temp = aux->Hder;
            else
                temp = aux->Hizq;

            while (temp->codigom != menu)
            {
                if (temp->codigom > menu)
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

                MNodo* aux1 = temp->Hizq;
                MNodo* aux2 = temp->Hder;

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

                MNodo* aux1 = temp->Hizq;
                MNodo* aux2 = temp->Hder;

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
            MNodo* aux1 = aux->Hizq;
            MNodo* aux2 = aux->Hder;

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



// Árbol

mnodo ArbolAA::VerificarM(int codp, int codc, int codr, int codm) {
    if (ArbolVacio())
        return NULL;
    else
        return raiz->VerificarMR(codp, codc, codr, codm);
}

void ArbolAA::LeerMenu(ArbolR restaurantes) {
    ifstream archivo;
    string str;
    MNodo* aux;

    archivo.open("Menu.txt");
    aux = raiz;

    while (getline(archivo, str))
    {
        int codp = stoi(ObtenerCodigo(str, 0));
        int codc = stoi(ObtenerCodigo(str, 1));
        int codr = stoi(ObtenerCodigo(str, 2));
        int codm = stoi(ObtenerCodigo(str, 3));
        string nom = ObtenerCodigo(str, 4);
        InsertaNodo(codp, codc, codr, codm, nom, restaurantes);
    }

    archivo.close();
}

MNodo* ArbolAA::skew(MNodo* r) {
    if (r == nullptr || r->Hizq == nullptr) {
        return r;
    }
    if (r->level == r->Hizq->level) {
        MNodo* leftChild = r->Hizq;
        r->Hizq = leftChild->Hder;
        leftChild->Hder = r;
        return leftChild;
    }
    return r;
}

MNodo* ArbolAA::split(MNodo* r) {
    if (r == nullptr || r->Hder == nullptr || r->Hder->Hder == nullptr) {
        return r;
    }
    if (r->level == r->Hder->Hder->level) {
        MNodo* rightChild = r->Hder;
        r->Hder = rightChild->Hizq;
        rightChild->Hizq = r;
        rightChild->level++;
        return rightChild;
    }
    return r;
}

void ArbolAA::InsertaNodo(int pais, int ciudad, int rest, int menu, string nom, ArbolR restaurantes) {
    if (restaurantes.VerificarRestaurante(pais, ciudad, rest)) {
        if (raiz == NULL) {
            raiz = new MNodo(pais, ciudad, rest, menu, nom);
        }
        else {
            //raiz->InsertaBinario(pais, ciudad, nom);
            insertar(raiz, pais, ciudad, rest, menu, nom);
        }
    }
}

MNodo* ArbolAA::insertar(MNodo* r, int codp, int codc, int codr, int codm, string nomb) {
    if (r == nullptr) {
        r = new MNodo{ codp, codc, codr, codm, nomb, nullptr, nullptr, 1, 0 };
    }
    else if (codm <= r->codigom) {
        r->Hizq = insertar(r->Hizq, codp, codc, codr, codm, nomb);
    }
    else if (codm > r->codigom) {
        r->Hder = insertar(r->Hder, codp, codc, codr, codm, nomb);
    }

    r = skew(r);
    r = split(r);
    return r;
}

void ArbolAA::Modificar(int pais, int ciudad, int rest, int menu, string nombren)
{
    if (raiz != NULL)
        ModificarM(raiz, pais, ciudad, rest, menu, nombren);
}