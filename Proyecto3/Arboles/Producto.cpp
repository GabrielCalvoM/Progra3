#include "Productos.h"

// Nodo

prnodo PrNodo::VerificarProd(int codp, int codc, int codr, int codm, int codpr) {
    if ((codp == codigop) && (codc == codigoc) && (codr == codigor) && (codm == codigom) && (codpr == codigopr))
        return this;
    else {
        if (codpr <= codigopr)
        {
            if (Hizq) {
                return Hizq->VerificarProd(codp, codc, codr, codm, codpr);
            }
        }
        else
        {
            if (Hder) {
                return Hder->VerificarProd(codp, codc, codr, codm, codpr);
            }
        }

        return NULL;
    }
}

typedef PrNodo* prnodo;

PrNodo* prmascomprado(PrNodo* R, PrNodo* MAX)
{
    if (R == NULL)
        return MAX;
    else
    {
        if (MAX == NULL)
            MAX = R;

        if (R->compra > MAX->compra)
            MAX = R;

        prnodo max1 = prmascomprado(R->Hizq, MAX);
        prnodo max2 = prmascomprado(R->Hder, MAX);

        if (max1->compra > MAX->compra)
            MAX = max1;
        if (max2->compra > MAX->compra)
            MAX = max2;

        return MAX;

    }

}

void PrNodo::RestaCant(int cantidad) {
    compra -= cantidad;
    cant -= cantidad;
}

void PrNodo::SumaCant(int cantidad) {
    compra += cantidad;
    cant += cantidad;
}

void ModificarPr(PrNodo* m, int pais, int ciudad, int rest, int menu, int pr, string nombren, string calo, string prec, string cantidad)
{
    if (m == NULL)
    {
        return;
    }
    if ((pais == m->codigop) && (ciudad == m->codigoc) && (rest == m->codigor) && (menu == m->codigom) && (pr == m->codigopr))
    {
        if (nombren != ".")
            m->nombre = nombren;
        if (calo != ".")
            m->kcal = stoi(calo);
        if (prec != ".")
            m->precio = stoi(prec);
        if (cantidad != ".")
            m->cant = stoi(cantidad);

        return;
    }
    else
    {
        if (pr < m->codigopr)
            ModificarPr(m->Hizq, pais, ciudad, rest, menu, pr, nombren, calo, prec, cantidad);
        else
            ModificarPr(m->Hder, pais, ciudad, rest, menu, pr, nombren, calo, prec, cantidad);
    }
}
void reporte14i(PrNodo* R)
{
    if (R == NULL)
        return;
    else
    {
            ofstream archivo("Reporte_Productos_Eliminados.txt", std::ios::app);
            if (!archivo.is_open())
                cout << "ERROR" << endl;
            else
            {
                archivo << R->codigopr << "     " << R->codigop << "     " << R->codigoc << "     " << R->codigor << "     " << R->codigom << "     " << R->nombre << endl;
                archivo.close();
            }
        
        reporte14i(R->Hizq);
        reporte14i(R->Hder);
    }
}

void reporte13i(PrNodo* R, int pais, int ciudad, int rest, int menu, int prod)
{
    if (R == NULL)
        return;
    else
    {
        if ((R->codigop == pais) && (R->codigoc == ciudad) && (R->codigor == rest) && (R->codigom == menu) && (R->codigopr == prod))
        {
            ofstream archivo("Reporte_Cantidad_Producto.txt", std::ios::app);
            if (!archivo.is_open())
                cout << "ERROR" << endl;
            else
            {
                archivo << R->cant << "     " << R->nombre << endl;
                archivo.close();
            }
        }
        reporte13i(R->Hizq, pais, ciudad, rest, menu, prod);
        reporte13i(R->Hder, pais, ciudad, rest, menu, prod);
    }
}

void reporte11i(PrNodo* R, int pais, int ciudad, int rest, int menu, int prod)
{
    if (R == NULL)
        return;
    else
    {
        if ((R->codigop == pais) && (R->codigoc == ciudad) && (R->codigor == rest) && (R->codigom == menu) && (R->codigopr == prod))
        {
            ofstream archivo("Reporte_Precio_Producto.txt", std::ios::app);
            if (!archivo.is_open())
                cout << "ERROR" << endl;
            else
            {
                archivo << R->precio << "     " << R->nombre << endl;
                archivo.close();
            }
        }
        reporte11i(R->Hizq, pais, ciudad, rest, menu, prod);
        reporte11i(R->Hder, pais, ciudad, rest, menu, prod);
    }
}

// Árbol

void ArbolPr::Modificar(int pais, int ciudad, int rest, int menu, int pr, string nombren, string calo, string prec, string cantidad)
{
    if (!ArbolVacio())
        ModificarPr(raiz, pais, ciudad, rest, menu, pr, nombren, calo, prec, cantidad);
}

void ArbolPr::reporte8()
{
    prnodo max = prmascomprado(raiz, NULL);

    ofstream archivo("Reporte_Producto_mas_Comprado.txt");
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo" << endl;
        return;
    }
    archivo << "-----Reporte Producto mas Comprado-----" << endl << endl;
    archivo << "Pais: " << max->codigop << endl;
    archivo << "Ciudad: " << max->codigoc << endl;
    archivo << "Restaurante: " << max->codigor << endl;
    archivo << "Menu: " << max->codigom << endl;
    archivo << "Producto: " << max->codigopr << endl;
    archivo << "Nombre: " << max->nombre << endl;
    archivo << "Compra: " << max->compra << endl << endl;
    archivo << "-----------------------------------------";
    archivo.close();
}

void ArbolPr::reporte13(int pais, int ciudad, int rest, int menu, int prod)
{
    if (ArbolVacio())
    {
        cout << "No hay productos disponibles" << endl;
    }
    else
    {
        ofstream archivo("Reporte_Cantidad_Producto.txt");
        if (!archivo.is_open()) {
            cout << "No se pudo abrir el archivo" << endl;
            return;
        }
        archivo << "-----Reporte Cantidad de un Producto-----" << endl << endl;
        archivo << "Pais: " << pais << endl;
        archivo << "Ciudad: " << ciudad << endl;
        archivo << "Restaurante: " << rest << endl;
        archivo << "Menu: " << menu << endl;
        archivo << "Producto: " << prod << endl;
        archivo << "Cantidad Producto  ---- Nombre" << endl << endl;
        archivo.close();

        reporte13i(raiz, pais, ciudad, rest, menu, prod);

        ofstream arch("Reporte_Cantidad_Producto.txt", std::ios::app);
        if (!arch.is_open())
            cout << "ERROR" << endl;
        else
            arch << endl << endl << "-------------------------------------------";
        arch.close();
    }
}

void ArbolPr::reporte11(int pais, int ciudad, int rest, int menu, int prod)
{
    if (ArbolVacio())
    {
        cout << "No hay productos disponibles" << endl;
    }
    else
    {
        ofstream archivo("Reporte_Precio_Producto.txt");
        if (!archivo.is_open()) {
            cout << "No se pudo abrir el archivo" << endl;
            return;
        }
        archivo << "-----Reporte Precio de un Producto-----" << endl << endl;
        archivo << "Pais: " << pais << endl;
        archivo << "Ciudad: " << ciudad << endl;
        archivo << "Restaurante: " << rest << endl;
        archivo << "Menu: " << menu << endl;
        archivo << "Producto: " << prod << endl;
        archivo << "Precio Producto  ---- Nombre" << endl << endl;
        archivo.close();

        reporte11i(raiz, pais, ciudad, rest, menu, prod);

        ofstream arch("Reporte_Precio_Producto.txt", std::ios::app);
        if (!arch.is_open())
            cout << "ERROR" << endl;
        else
            arch << endl << endl << "-------------------------------------------";
        arch.close();
    }
}

void ArbolPr::reporte14()
{
    if (ArbolVacio())
    {
        cout << "No hay productos disponibles" << endl;
    }
    else
    {
        ofstream archivo("Reporte_Productos_Eliminados.txt");
        if (!archivo.is_open()) {
            cout << "No se pudo abrir el archivo" << endl;
            return;
        }
        archivo << "-----Reporte Productos-----" << endl << endl;
        archivo << "Codigo Producto  ---- Codigo Pais  ---- Codigo Ciudad  ---- Codigo Restaurante  ---- Codigo Menu  ---- Nombre" << endl << endl;
        archivo.close();

        reporte14i(raiz);

        ofstream arch("Reporte_Productos_Eliminados.txt", std::ios::app);
        if (!arch.is_open())
            cout << "ERROR" << endl;
        else
            arch << endl << endl << "-------------------------------------------";
        arch.close();
    }
}

void ArbolPr::borrar(int pais, int ciudad, int rest, int menu, int prod, ArbolPr eliminado, ArbolAA menus)
{
    if (ArbolVacio()) {
        cout << "No hay elementos disponibles" << endl;
    }
    if ((raiz->Hder == NULL) && (raiz->Hizq == NULL))
    {
        if ((raiz->codigop == pais) && (raiz->codigoc == ciudad) && (raiz->codigor == rest) && (raiz->codigom == menu) && (raiz->codigopr == prod))
        {
            prnodo temp = raiz;
            raiz == NULL;
            eliminado.InsertaNodo(temp->codigop, temp->codigoc, temp->codigor, temp->codigom, temp->codigopr, temp->nombre, temp->kcal, temp->precio, temp->cant, menus);
            delete temp;
        }
    }
    else
    {
        prnodo aux = raiz;


        if ((raiz->codigop != pais) && (raiz->codigoc != ciudad) && (raiz->codigor != rest) && (raiz->codigom != menu) && (raiz->codigopr != prod))
        {
            prnodo temp;
            if (prod > aux->codigopr)
                temp = aux->Hder;
            else
                temp = aux->Hizq;

            while ((raiz->codigop != pais) && (raiz->codigoc != ciudad) && (raiz->codigor != rest) && (raiz->codigom != menu) && (raiz->codigopr != prod)) 
            {
                if (temp->codigopr > prod)
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

                prnodo aux1 = temp->Hizq;
                prnodo aux2 = temp->Hder;

                if (aux2 == NULL)
                {
                    aux->Hizq = aux1;
                    eliminado.InsertaNodo(temp->codigop, temp->codigoc, temp->codigor, temp->codigom, temp->codigopr, temp->nombre, temp->kcal, temp->precio, temp->cant, menus);
                    delete temp;
                }
                else
                {
                    while (aux2->Hizq != NULL)
                        aux2 = aux2->Hizq;

                    aux2->Hizq = aux1->Hder;
                    aux1->Hder = temp->Hder;
                    aux->Hizq = aux1;
                    eliminado.InsertaNodo(temp->codigop, temp->codigoc, temp->codigor, temp->codigom, temp->codigopr, temp->nombre, temp->kcal, temp->precio, temp->cant, menus);
                    delete temp;
                }
            }
            else
            {

                prnodo aux1 = temp->Hizq;
                prnodo aux2 = temp->Hder;

                if (aux1 == NULL)
                {
                    aux->Hder = aux2;
                    eliminado.InsertaNodo(temp->codigop, temp->codigoc, temp->codigor, temp->codigom, temp->codigopr, temp->nombre, temp->kcal, temp->precio, temp->cant, menus);
                    delete temp;
                }
                else {
                    while (aux1->Hder != NULL)
                        aux1 = aux1->Hder;

                    aux1->Hder = aux2;
                    aux->Hder = temp->Hizq;
                    eliminado.InsertaNodo(temp->codigop, temp->codigoc, temp->codigor, temp->codigom, temp->codigopr, temp->nombre, temp->kcal, temp->precio, temp->cant, menus);
                    delete temp;
                }
            }
        }
        else
        {
            prnodo aux1 = aux->Hizq;
            prnodo aux2 = aux->Hder;

            while (aux2->Hizq != NULL)
            {
                aux2 = aux2->Hizq;
            }

            aux2->Hizq = aux1;
            raiz = aux->Hder;
            eliminado.InsertaNodo(aux->codigop, aux->codigoc, aux->codigor, aux->codigom, aux->codigopr, aux->nombre, aux->kcal, aux->precio, aux->cant, menus);
            delete aux;
        }


    }
}

bool ArbolPr::VerificarPr(int codp, int codc, int codr, int codm, int codpr) {
    if (ArbolVacio())
        return false;
    else
        return raiz->VerificarProd(codp, codc, codr, codm, codpr);
}

void ArbolPr::InsertaNodo(int pais, int ciudad, int rest, int menu, int prod, string nom, int cal, int prec, int cant, ArbolAA menus) {
    if (menus.VerificarM(pais, ciudad, rest, menu)) {
        if (raiz == NULL) {
            raiz = new PrNodo(pais, ciudad, rest, menu, prod, nom, cal, prec, cant, 0);
        }
        else {
            //raiz->InsertaBinario(pais, ciudad, nom);
            bool hder = false;
            InsertaNodo(NULL, raiz, false, pais, ciudad, rest, menu, prod, nom, cal, prec, cant, &hder);
        }
    }
}

void ArbolPr::InsertaNodo(prnodo padre, prnodo ra, bool hh, int pais, int ciudad, int rest, int menu, int prod, string nom, int cal, int prec, int cant, bool* hder) {
    prnodo n1;

    if (ra == NULL) {
        ra = new PrNodo(pais, ciudad, rest, menu, prod, nom, cal, prec, cant, 0);
        Hh = true;

        if (*hder) {
            padre->Hder = ra;
        }
        else {
            padre->Hizq = ra;
        }
    }
    else {

        prnodo n2 = NULL;
        prnodo n3 = NULL;

        if (pais != ra->codigop || ciudad != ra->codigoc || rest != ra->codigor || menu != ra->codigom || prod != ra->codigopr) {
            if (prod <= ra->codigopr) {
                if (ra->Hizq == NULL) {
                    ra->Hizq = new PrNodo(pais, ciudad, rest, menu, prod, nom, cal, prec, cant, 0);
                    Hh = true;
                }
                bool der = false;
                InsertaNodo(ra, ra->Hizq, Hh, pais, ciudad, rest, menu, prod, nom, cal, prec, cant, &der);

                if (Hh) {
                    switch (ra->FB) {
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
                if (ra->Hder == NULL) {
                    ra->Hder = new PrNodo(pais, ciudad, rest, menu, prod, nom, cal, prec, cant, 0);
                    Hh = true;
                }
                bool der = true;
                InsertaNodo(ra, ra->Hder, Hh, pais, ciudad, rest, menu, prod, nom, cal, prec, cant, &der);

                if (Hh) {
                    switch (ra->FB) {
                    case -1: ra->FB = 0;
                        Hh = false;
                        break;
                    case 0: ra->FB = 1;
                        break;
                    case 1: n1 = ra->Hder;
                        if (n1->FB == 1) {
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
}

void ArbolPr::LeerProducto(ArbolAA menus) {
    ifstream archivo;
    string str;
    prnodo aux;

    archivo.open("Productos.txt");
    aux = raiz;

    while (getline(archivo, str))
    {
        int codp = stoi(ObtenerCodigo(str, 0));
        int codc = stoi(ObtenerCodigo(str, 1));
        int codr = stoi(ObtenerCodigo(str, 2));
        int codm = stoi(ObtenerCodigo(str, 3));
        int codpr = stoi(ObtenerCodigo(str, 4));
        string nom = ObtenerCodigo(str, 5);
        int kcal = stoi(ObtenerCodigo(str, 6));
        int prec = stoi(ObtenerCodigo(str, 7));
        int cant = stoi(ObtenerCodigo(str, 8));
        InsertaNodo(codp, codc, codr, codm, codpr, nom, kcal, prec, cant, menus);
    }

    archivo.close();
}

void ArbolPr::RotacionDobleIzquierda(PrNodo* padre, PrNodo* n, PrNodo* n1, bool hder) {
    PrNodo* n2;
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

void ArbolPr::RotacionDobleDerecha(prnodo padre, PrNodo* n, PrNodo* n1, bool hder) {
    PrNodo* n2;
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

void ArbolPr::RotacionSimpleDerecha(prnodo padre, PrNodo* n, PrNodo* n1, bool hder) {
    prnodo n2 = n1;
    n->Hder = n1->Hizq;
    n1->Hizq = n;

    if (n1->FB == 1) {
        n->FB = 0;
        n1->FB = 0;
    }
    else {
        n->FB = 1;
        n1->FB = -1;
    }

    if (padre == NULL) {
        raiz = n1;
    }
    else {
        if (hder)
            padre->Hder = n1;
        else
            padre->Hizq = n1;
    }
}

void ArbolPr::RotacionSimpleIzquierda(prnodo padre, PrNodo* n, PrNodo* n1, bool hder) {
    prnodo n2 = n1;
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

prnodo ArbolPr::getProducto(int pais, int ciudad, int rest, int menu, int prod) {
    return getNodo(raiz, pais, ciudad, rest, menu, prod);
}

prnodo ArbolPr::getNodo(prnodo ra, int pais, int ciudad, int rest, int menu, int prod) {
    if (ra == NULL) {
        return NULL;
    }
    else if (pais == ra->codigop && ciudad == ra->codigoc && rest == ra->codigor && menu == ra->codigom && prod == ra->codigopr) {
        return ra;
    }
    else {
        if (prod <= ra->codigopr) {
            return getNodo(ra->Hizq, pais, ciudad, rest, menu, prod);
        }
        else {
            return getNodo(ra->Hder, pais, ciudad, rest, menu, prod);
        }
    }
}