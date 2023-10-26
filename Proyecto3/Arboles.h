#ifndef ARBOLES_H
#define ARBOLES_H

#include "Fila.h"
#include "Admins.h"

class Arboles {
public:
	ArbolP paises;
	ArbolC ciudades;
	ArbolR restaurantes;
	ArbolAA menus;
	ArbolPr productos;
	ArbolB clientes;
	ArbolAd admins;
	Cola fila = Cola(productos);

	static Arboles getInstance() {
		static Arboles instancia;
		return instancia;
	}

private:
	Arboles() {
		if (paises.ArbolVacio())
			paises.LeerPaises();
		if (ciudades.ArbolVacio())
			ciudades.LeerCiudades(paises);
		if (restaurantes.ArbolVacio())
			restaurantes.LeerRestaurantes(ciudades);
		if (menus.ArbolVacio())
			menus.LeerMenu(restaurantes);
		if (productos.ArbolVacio())
			productos.LeerProducto(menus);
		if (clientes.ArbolVacio())
			clientes.LeerClientes();
		if (admins.ArbolVacio())
			admins.LeerAdmins();
		if (fila.ColaVacia())
			fila = Cola(productos);
	}

};

#endif //ARBOLES_H