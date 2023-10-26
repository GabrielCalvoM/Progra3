#include "Arboles.h"

void InordenR(pnodo R) {

    if (R == NULL) {
        return;
    }
    else {
        InordenR(R->Hizq);
        cout << "<< " << R->codigo << R->nombre << " >>" << " - ";
        InordenR(R->Hder);
    }
}

void InordenR(cnodo R) {

    if (R == NULL) {
        return;
    }
    else {
        InordenR(R->Hizq);
        cout << "<< " << R->codigoc << R->nombre << " >>" << " - ";
        InordenR(R->Hder);
    }
}

void InordenR(rnodo R) {

    if (R == NULL) {
        return;
    }
    else {
        InordenR(R->Hizq);
        cout << "<< " << R->codigor << R->nombre << " >>" << " - ";
        InordenR(R->Hder);
    }
}

void InordenR(mnodo R) {

    if (R == NULL) {
        return;
    }
    else {
        InordenR(R->Hizq);
        cout << "<< " << R->codigor << R->nombre << " >>" << " - ";
        InordenR(R->Hder);
    }
}

void InordenR(PrNodo* R) {

    if (R == NULL) {
        return;
    }
    else {
        InordenR(R->Hizq);
        cout << "<< " << R->codigopr << R->nombre << " >>" << " - ";
        InordenR(R->Hder);
    }
}

int main() {
	InordenR(Arboles::getInstance().paises.raiz);
	cout << endl << endl;
	InordenR(Arboles::getInstance().ciudades.raiz);
	cout << endl << endl;
    InordenR(Arboles::getInstance().restaurantes.getRaiz());
    cout << endl << endl;
    InordenR(Arboles::getInstance().menus.raiz);
    cout << endl << endl;
	InordenR(Arboles::getInstance().productos.raiz);
	cout << endl << endl;
    clnodo cliente = Arboles::getInstance().clientes.getCliente(6578);
    cout << cliente->getNombre() << endl << endl;
    Arboles::getInstance().clientes.ModificarCliente(6578, "Pepe");
    cout << cliente->getNombre() << endl << endl;
	
	return 0;
}
