#ifndef ARBOLAUX_H
#define ARBOLAUX_H

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

inline string ObtenerCodigo(string codigo, int pos) {
    if (codigo != "") {
        int i = 0;
        string cod;
        const char* coma = ";";
        char caracter = *coma;

        for (int j = 0; j <= pos; j++) {
            while ((codigo[i] != caracter) && (i != codigo.length())) {
                if (j == pos) {
                    cod += codigo[i];
                }

                i++;
            }

            i++;
        }

        return cod;
    }

    return "";
}

inline bool archivo_existe(string nombre) {
    ifstream archivo(nombre.c_str());
    return archivo.good();
}

inline string indStr(string texto, int espacios) {
    string text = "";

    if (texto.length() < espacios) {
        text += texto;

        for (int i = texto.length(); i < espacios; i++) {
            text += " ";
        }
    }

    return text;
}

inline string indStrl(string texto, int espacios) {
    string text = "";

    if (texto.length() < espacios) {
        text += texto;

        for (int i = texto.length(); i < espacios; i++) {
            text = " " + text;
        }
    }

    return text;
}

inline string modoPago(bool tarjeta, double* descuento) {
    string texto = "";

    if (!tarjeta) {
        texto = indStr("Tarjeta", 38) + indStrl("3%", 11);
        *descuento -= 0.03;
    }
    else {
        texto = indStr("Efectivo", 38) + indStrl("1%", 11);
        *descuento -= 0.01;
    }

    return texto;
}



inline string paraLlevar(bool afuera, double* descuento) {
    string texto = "";

    if (!afuera) {
        texto = indStr("Llevar", 38) + indStrl("3%", 11);
        *descuento -= 0.03;
    }
    else {
        texto = indStr("Comer", 38) + indStrl("1%", 11);
        *descuento -= 0.01;
    }

    return texto;
}

#endif //ARBOLAUX_H