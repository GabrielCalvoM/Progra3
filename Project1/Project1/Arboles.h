#ifndef ARBOLES_H
#define ARBOLES_H

#include "Fila.h"
#include "Admins.h"

class Arboles {
private:
	Arboles() {
		paises.LeerPaises();
		ciudades.LeerCiudades(paises);
		restaurantes.LeerRestaurantes(ciudades);
		menus.LeerMenu(restaurantes);
		productos.LeerProducto(menus);
		clientes.LeerClientes();
		admins.LeerAdmins();
	}
public:
	static Arboles instancia;
	ArbolP paises;
	ArbolC ciudades;
	ArbolR restaurantes;
	ArbolAA menus;
	ArbolPr productos;
	ArbolB clientes;
	ArbolAd admins;

	static Arboles getInstance() {
		Arboles* ptr = &Arboles::instancia;

		if (ptr == NULL) {
			Arboles::instancia = Arboles::Arboles();
		}
		
		return Arboles::instancia;
	}
};

Arboles Arboles::instancia;

#endif //ARBOLES_H