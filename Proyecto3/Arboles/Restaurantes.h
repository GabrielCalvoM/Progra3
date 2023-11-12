#ifndef RESTAURANTES_H
#define RESTAURANTES_H

#include "Ciudades.h"

class ResNodo {
public:

    int codigop, codigoc, codigor;
    string nombre;
    ResNodo* padre;
    ResNodo* Hizq;
    ResNodo* Hder;
    int color, busqueda;

    friend class ArbolR;
};

typedef ResNodo* rnodo;

void reporte3i(rnodo R, int pais, int ciudad);
void reporte15i(rnodo R);
rnodo rmasbuscado(rnodo R, rnodo MAX);


class ArbolR {
private:
    rnodo Raiz; 
    rnodo TNULL;

    void initializeNULLNode(rnodo nodo, rnodo padre) {
        nodo->codigop = 0;
        nodo->codigoc = 0;
        nodo->codigor = 0;
        nodo->nombre = "";
        nodo->padre = padre;
        nodo->Hizq = nullptr;
        nodo->Hder = nullptr;
        nodo->color = 0;
    }

    rnodo Busqueda(rnodo nodo, int pais, int ciudad, int res) {
        if (nodo == TNULL || ((pais == nodo->codigop) && (ciudad == nodo->codigoc) && (res == nodo->codigor))) {
            return nodo;
        }

        if ((res < nodo->codigor)) {
            return Busqueda(nodo->Hizq, pais, ciudad, res);
        }
        return Busqueda(nodo->Hder, pais, ciudad, res);
    }


    void rbModificar(rnodo uRaiz, rnodo vValor) {
        if (Raiz->padre == nullptr) { 
            Raiz = vValor;
        }
        else if (uRaiz == uRaiz->padre->Hizq) {
            uRaiz->padre->Hizq = vValor;
        }
        else {
            uRaiz->padre->Hder = vValor;
        }
        vValor->padre = uRaiz->padre;
    }

    void insertarBalanceado(rnodo NodoEva) {
        rnodo uValor;
        while (NodoEva->padre->color == 1) {
            if (NodoEva->padre == NodoEva->padre->padre->Hder) {
                uValor = NodoEva->padre->padre->Hizq;
                if (uValor->color == 1) {
                    uValor->color = 0;
                    NodoEva->padre->color = 0;
                    NodoEva->padre->padre->color = 1;
                    NodoEva = NodoEva->padre->padre;
                }
                else {
                    if (NodoEva == NodoEva->padre->Hizq) {
                        NodoEva = NodoEva->padre;
                        RotacionDerecha(NodoEva);
                    }
                    NodoEva->padre->color = 0;
                    NodoEva->padre->padre->color = 1;
                    RotacionIzquierda(NodoEva->padre->padre);
                }
            }
            else {
                uValor = NodoEva->padre->padre->Hder;

                if (uValor->color == 1) {
                    uValor->color = 0;
                    NodoEva->padre->color = 0;
                    NodoEva->padre->padre->color = 1;
                    NodoEva = NodoEva->padre->padre;
                }
                else {
                    if (NodoEva == NodoEva->padre->Hder) {
                        NodoEva = NodoEva->padre;
                        RotacionIzquierda(NodoEva);
                    }
                    NodoEva->padre->color = 0;
                    NodoEva->padre->padre->color = 1;
                    RotacionDerecha(NodoEva->padre->padre);
                }
            }
            if (NodoEva == Raiz) {
                break;
            }
        }
        Raiz->color = 0;
    }

public:
    ArbolR() {
        TNULL = new ResNodo;
        TNULL->color = 0;
        TNULL->Hizq = nullptr;
        TNULL->Hder = nullptr;
        Raiz = TNULL;
    }
    
    void reporte3(int pais, int ciudad)
    {
        if (ArbolVacio())
        {
            cout << "No hay restaurantes disponibles" << endl;
        }
        else
        {
            ofstream archivo("Reporte_Restaurantes.txt");
            if (!archivo.is_open()) {
                cout << "No se pudo abrir el archivo" << endl;
                return;
            }
            archivo << "-----Reporte Restaurantes-----" << endl << endl;
            archivo << "Pais: " << pais << endl;
            archivo << "Ciudad: " << ciudad << endl;
            archivo << "Codigo Reporte ---- Nombre" << endl << endl;
            archivo.close();

            reporte3i(Raiz, pais, ciudad);

            ofstream arch("Reporte_Restaurantes.txt", std::ios::app);
            if (!arch.is_open())
                cout << "ERROR" << endl;
            else
                arch << endl << endl << "-------------------------------------------";
            arch.close();
        }
    }

    void reporte15()
    {
        if (ArbolVacio())
        {
            cout << "No hay restaurantes disponibles" << endl;
        }
        else
        {
            ofstream archivo("Reporte_Restaurantes_Eliminados.txt");
            if (!archivo.is_open()) {
                cout << "No se pudo abrir el archivo" << endl;
                return;
            }
            archivo << "-----Reporte Restaurantes Eliminados-----" << endl << endl;
            archivo << "Codigo Restaurante ----  Codigo Pais ---- Codigo Ciudad ---- Nombre" << endl << endl;
            archivo.close();

            reporte15i(Raiz); 

            ofstream arch("Reporte_Restaurantes_Eliminados.txt", std::ios::app);
            if (!arch.is_open())
                cout << "ERROR" << endl;
            else
                arch << endl << endl << "-------------------------------------------";
            arch.close();
        }
    }

    void reporte6()
    {
        rnodo max = rmasbuscado(Raiz, NULL);

        ofstream archivo("Reporte_Restaurante_mas_Buscado.txt");
        if (!archivo.is_open()) {
            cout << "No se pudo abrir el archivo" << endl;
            return;
        }
        archivo << "-----Reporte Restaurante mas Buscado-----" << endl << endl;
        archivo << "Pais: " << max->codigop << endl;
        archivo << "Ciudad: " << max->codigoc << endl;
        archivo << "Restaurante: " << max->codigor << endl;
        archivo << "Nombre: " << max->nombre << endl;
        archivo << "Busquedas: " << max->busqueda << endl << endl;
        archivo << "-----------------------------------------";
        archivo.close();
    }
    
    rnodo BusquedaM(int pais, int ciudad, int res) {
        return Busqueda(this->Raiz, pais, ciudad, res);
    }

    rnodo minimo(rnodo nodo) {
        while (nodo->Hizq != TNULL) {
            nodo = nodo->Hizq;
        }
        return nodo;
    }

    rnodo maximo(rnodo nodo) {
        while (nodo->Hder != TNULL) {
            nodo = nodo->Hder;
        }
        return nodo;
    }

    rnodo sucesor(rnodo nodo) {
        if (nodo->Hder != TNULL) {
            return minimo(nodo->Hder);
        }

        rnodo y = nodo->padre;
        while (y != TNULL && nodo == y->Hder) {
            nodo = y;
            y = y->padre;
        }
        return y;
    }

    rnodo predecesor(rnodo nodo) {
        if (nodo->Hizq != TNULL) {
            return maximo(nodo->Hizq);
        }

        rnodo y = nodo->padre;
        while (y != TNULL && nodo == y->Hizq) {
            nodo = y;
            y = y->padre;
        }

        return y;
    }


    void borrar(int pais, int ciudad, int rest, ArbolR eliminado, ArbolC ciudades)
    {
        if (ArbolVacio()) {
            cout << "No hay elementos disponibles" << endl;
        }
        if ((Raiz->Hder == NULL) && (Raiz->Hizq == NULL))
        {
            rnodo temp = Raiz;
            Raiz == NULL;
            delete temp;
        }
        else
        {
            rnodo aux = Raiz;


            if ((aux->codigop != pais) && (aux->codigoc != ciudad) && (aux->codigor != rest))
            {
                rnodo temp;
                if (rest > aux->codigor)
                    temp = aux->Hder;
                else
                    temp = aux->Hizq;

                while ((temp->codigop != pais) && (temp->codigoc != ciudad) && (temp->codigor != rest)) 
                {
                    if (rest > temp->codigor)
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

                    rnodo aux1 = temp->Hizq;
                    rnodo aux2 = temp->Hder;

                    if (aux2 == NULL)
                    {
                        aux->Hizq = aux1;
                        eliminado.InsertaNodo(temp->codigop, temp->codigoc, temp->codigor, temp->nombre, ciudades);
                        delete temp;
                    }
                    else
                    {
                        while (aux2->Hizq != NULL)
                            aux2 = aux2->Hizq;

                        aux2->Hizq = aux1->Hder;
                        aux1->Hder = temp->Hder;
                        aux->Hizq = aux1;
                        eliminado.InsertaNodo(temp->codigop, temp->codigoc, temp->codigor, temp->nombre, ciudades);
                        delete temp;
                    }
                }
                else
                {

                    rnodo aux1 = temp->Hizq;
                    rnodo aux2 = temp->Hder;

                    if (aux1 == NULL)
                    {
                        aux->Hder = aux2;
                        eliminado.InsertaNodo(temp->codigop, temp->codigoc, temp->codigor, temp->nombre, ciudades);
                        delete temp;
                    }
                    else {
                        while (aux1->Hder != NULL)
                            aux1 = aux1->Hder;

                        aux1->Hder = aux2;
                        aux->Hder = temp->Hizq;
                        eliminado.InsertaNodo(temp->codigop, temp->codigoc, temp->codigor, temp->nombre, ciudades);
                        delete temp;
                    }
                }
            }
            else
            {
                rnodo aux1 = aux->Hizq;
                rnodo aux2 = aux->Hder;

                while (aux2->Hizq != NULL)
                {
                    aux2 = aux2->Hizq;
                }

                aux2->Hizq = aux1;
                Raiz = aux->Hder;
                eliminado.InsertaNodo(aux->codigop, aux->codigoc, aux->codigor, aux->nombre, ciudades);
                delete aux;
            }

        }
    }

    void RotacionIzquierda(rnodo nodo) {
        rnodo y = nodo->Hder;
        nodo->Hder = y->Hizq;
        if (y->Hizq != TNULL) {
            y->Hizq->padre = nodo;
        }
        y->padre = nodo->padre;
        if (nodo->padre == nullptr) {
            this->Raiz = y;
        }
        else if (nodo == nodo->padre->Hizq) {
            nodo->padre->Hizq = y;
        }
        else {
            nodo->padre->Hder = y;
        }
        y->Hizq = nodo;
        nodo->padre = y;
    }

    void RotacionDerecha(rnodo nodo) {
        rnodo y = nodo->Hizq;
        nodo->Hizq = y->Hder;
        if (y->Hder != TNULL) {
            y->Hder->padre = nodo;
        }
        y->padre = nodo->padre;
        if (nodo->padre == nullptr) {
            this->Raiz = y;
        }
        else if (nodo == nodo->padre->Hder) {
            nodo->padre->Hder = y;
        }
        else {
            nodo->padre->Hizq = y;
        }
        y->Hder = nodo;
        nodo->padre = y;
    }

    // Insercion
    void InsertaNodo(int pais, int ciudad, int res, string nom, ArbolC ciudades) {
        if (ciudades.VerificarCiudad(pais, ciudad)) {
            if (VerificarRestaurante(pais, ciudad, res) == NULL) {
                rnodo nodo = new ResNodo;
                nodo->padre = nullptr;
                nodo->codigop = pais;
                nodo->codigoc = ciudad;
                nodo->codigor = res;
                nodo->nombre = nom;
                nodo->Hizq = TNULL;
                nodo->Hder = TNULL;
                nodo->color = 1;

                rnodo y = nullptr;
                rnodo x = this->Raiz;

                while (x != TNULL) {
                    y = x;

                    if (nodo->codigor <= x->codigor) {
                        x = x->Hizq;
                    }
                    else {
                        x = x->Hder;
                    }
                }

                nodo->padre = y;
                if (y == nullptr) {
                    Raiz = nodo;
                }
                else if (nodo->codigor <= y->codigor) {
                    y->Hizq = nodo;
                }
                else {
                    y->Hder = nodo;
                }

                if (nodo->padre == nullptr) {
                    nodo->color = 0;
                    return;
                }

                if (nodo->padre->padre == nullptr) {
                    return;
                }

                insertarBalanceado(nodo);
            }
        }
    }

    bool ArbolVacio() { return Raiz == TNULL; }

    rnodo VerificarRestaurante(int codp, int codc, int codr) {
        if (ArbolVacio())
            return NULL;
        else
            return VerificarRestauranteR(Raiz, codp, codc, codr);
    }

    rnodo VerificarRestauranteR(rnodo R, int codp, int codc, int codr)
    {
        if (R == NULL) {
            return R;
        }
        else if ((R->codigop == codp) && (R->codigoc == codc) && (R->codigor == codr))
            return R;
        else
        {
            if (VerificarRestauranteR(R->Hizq, codp, codc, codr)) {
                return VerificarRestauranteR(R->Hizq, codp, codc, codr);
            }
            if (VerificarRestauranteR(R->Hder, codp, codc, codr)) {
                return VerificarRestauranteR(R->Hder, codp, codc, codr);
            }

            return NULL;
        }

    }

    void ModificarR(int pais, int ciudad, int rest, string nombren)
    {
        if (!ArbolVacio()) {
            ModificarRR(Raiz, pais, ciudad, rest, nombren);
        }
    }

    void ModificarRR(rnodo R, int pais, int ciudad, int rest, string nombren)
    {
        if ((pais == R->codigop) && (ciudad == R->codigoc) && (rest == R->codigor))
        {
            R->nombre = nombren;
        }
        else {
            if (R->Hizq != NULL) {
                ModificarRR(R->Hizq, pais, ciudad, rest, nombren);

            }
            if (R->Hder != NULL) {
                ModificarRR(R->Hder, pais, ciudad, rest, nombren);
            }
        }
    }

    void LeerRestaurantes(ArbolC ciudades) {
        ifstream archivo;
        string str;

        archivo.open("Restaurantes.txt");

        while (getline(archivo, str))
        {
            int codp = stoi(ObtenerCodigo(str, 0));
            int codc = stoi(ObtenerCodigo(str, 1));
            int codr = stoi(ObtenerCodigo(str, 2));
            string nom = ObtenerCodigo(str, 3);
            InsertaNodo(codp, codc, codr, nom, ciudades);
        }

        archivo.close();
    }

    rnodo getRaiz() {
        return this->Raiz;
    }
};

#endif // !RESTAURANTES_H
