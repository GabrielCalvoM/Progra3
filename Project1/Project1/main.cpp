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

void Pagina::InordenR() {
    if (this == NULL) {
        return;
    }
    else {
        if (rama[0])
            rama[0]->InordenR();

        for (int i = 1; i <= cuenta; i++) {
            cout << "<< " << cliente[i]->cedula << cliente[i]->nombre << " >>" << " - ";
            if (rama[i])
                rama[i]->InordenR();
        }
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
    Arboles::getInstance().clientes.getRaiz()->InordenR();
    cout << endl << endl;
    clnodo cliente = Arboles::getInstance().clientes.getCliente(1);
    cout << cliente->getNombre() << endl << endl;
    Arboles::getInstance().clientes.ModificarCliente(1, "Pepe");
    cout << cliente->getNombre() << endl << endl;
	
	return 0;
}
