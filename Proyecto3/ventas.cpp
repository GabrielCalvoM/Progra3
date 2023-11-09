#include "ventas.h"

ventas::~ventas()
{
    vnodo aux;

    while (primero) {
        aux = primero;
        primero = primero->siguiente;
        delete aux;
    }
    primero = NULL;
}

void ventas::InsertarFinal(int cedula, int total, int factura)//76
{
    if (ListaVacia())
        primero = new ventasNodo(cedula, total, factura);
    else
    {

        vnodo aux = primero;
        while (aux->siguiente != NULL)
            aux = aux->siguiente;
        vnodo nuevo = new ventasNodo(cedula, total, factura);
        aux->siguiente = nuevo;
    }
}

void ventas::reporte5(int cedula)
{
    ofstream archivo("Reporte_Compras_Cliente.txt");
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo" << endl;
    }
    archivo << "---------Reporte Compas Cliente---------" << endl << endl;
    archivo << "Cliente: " << cedula << endl;
    archivo << "Total  ---  Numero Factura" << endl << endl; 
    
    vnodo aux = primero; 
    while (aux != NULL)
    {
        if (aux->cliente == cedula)
        {
            archivo << aux->total << "   " << aux->numero << endl; 
        }
        aux = aux->siguiente; 
    }
    
    archivo << endl << "-----------------------------------"; 
    archivo.close();  

} 

void ventas::reporte9() 
{
    ofstream archivo("Reporte_Factura_Mayor.txt");
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo" << endl;
    }
    archivo << "---------Reporte Factura Mayor Monto---------" << endl << endl;

    vnodo aux = primero;
    vnodo mayor = primero;
    while (aux->siguiente != NULL)
    {
        aux->siguiente;
        if (aux->total > mayor->total)
        {
            mayor = aux; 
        }
        aux = aux->siguiente; 
    }

    archivo << "Cliente: " << mayor->cliente << endl;
    archivo << "Total: " << mayor->total << endl;
    archivo << "Factura: " << mayor->numero << endl;

    archivo << endl << "-----------------------------------";  
    archivo.close();

}

void ventas::reporte10()
{
    ofstream archivo("Reporte_Factura_Menor.txt");
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo" << endl;
    }
    archivo << "---------Reporte Factura Menor Monto---------" << endl << endl;

    vnodo aux = primero;
    vnodo menor = primero;
    while (aux->siguiente != NULL)
    {
        aux->siguiente;
        if (aux->total < menor->total)
            menor = aux;
        aux = aux->siguiente;
    }

    archivo << "Cliente: " << menor->cliente << endl;
    archivo << "Total: " << menor->total << endl;
    archivo << "Factura: " << menor->numero << endl;

    archivo << endl << "-----------------------------------";
    archivo.close();

}

