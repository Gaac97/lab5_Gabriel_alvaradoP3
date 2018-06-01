#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef MENU_H
#define MENU_H
class menu{
	protected:
		int platos;
		string historialVentas;
		string nombre;
		string tipo;
	public:
		menu(int,string,string,string);
		menu();
		int getPlatos();
		void setPlatos(int);

		string getHistorialVentas();
		void setHistorialVentas(string);

		string getNombre();
		void setNombre(string);

		string getTipo();
		void setTipo(string);

};
#endif