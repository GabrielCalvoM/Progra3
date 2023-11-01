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
	Cola fila;
	ListaCaja caja;

	static Arboles& getInstance() {
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
		if (productos.ArbolVacio()) {
			productos.LeerProducto(menus);
			fila.configProd(&productos);
		}
		if (clientes.ArbolVacio())
			clientes.LeerClientes();
		if (admins.ArbolVacio())
			admins.LeerAdmins();
	}

	Arboles(const Arboles&) = delete;
	Arboles& operator=(const Arboles&) = delete;
};

#endif //ARBOLES_H