
#ifndef VENTAS_H 
#define VENTAS_H
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
class ventasNodo
{
public:


    ventasNodo(int cedula, int precio)//3
    {
        cliente = cedula;
        total = precio;
        siguiente = NULL;
    }

    ventasNodo(int cedula, int precio, ventasNodo* signodo)
    {
        cliente = cedula;
        total = precio;
        siguiente = signodo;
    }


private:
    int cliente = 0;
    int total = 0;
    int numero = 0;
    ventasNodo* siguiente;// Clase Autoreferencia


    friend class ventas;

};

typedef ventasNodo* vnodo; //Alias

class ventas {
public:
    ventas() { primero = NULL; }//constructor
    ~ventas();//destructor


    void InsertarFinal(int cedula, int total);
    bool ListaVacia() { return primero == NULL; } //retorna True o False
    void reporte5(int cedula);
    void reporte9();
    void reporte10();
    void reporte12();

private:
    vnodo primero;
};




#endif // !VENTAS_H
