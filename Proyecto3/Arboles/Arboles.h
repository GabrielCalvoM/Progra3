#ifndef ARBOLES_H
#define ARBOLES_H

#include "Fila.h"
#include "Admins.h"
#include "ventas.h"

class Arboles {
public:
	ArbolP paises;
	ArbolP paises_el;
	ArbolC ciudades;
	ArbolC ciudades_el;
	ArbolR restaurantes;
	ArbolR restaurantes_el;
	ArbolAA menus;
	ArbolAA menus_el;
	ArbolPr productos;
	ArbolPr  productos_el; 
	ArbolB clientes;
	ArbolAd admins;
	Cola fila;
	ListaCaja caja;
	ventas ventas; 

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