#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef PLATOS_H
#define PLATOS_H
class platos{
	protected:
		int cantidadIngredientes;
		int resenaOrigen;
		int cantidadSabor;
		int registro;
		int precio;
		int valoracion;
		int cantidadAporte;
		int duracion;
		int plato;
		
		string historialVentas;
	public:
		platos(int,int,int,int,int,int,int,int,string);
		platos();
		int getCantidadIngredientes();
		void setCantidadIngredientes(int);

		int getResenaOrigen();
		void setResenaOrigen(int);

		int getCantidadSabor();
		void setCantidadSabor(int);

		int getRegistro();
		void setRegistro(int);

		int getPrecio();
		void setPrecio(int);

		int getValoracion();
		void setValoracion(int);

		int getCantidadAporte();
		void setCantidadAporte(int);

		int getDuracion();
		void setDuracion(int);
		

		int getPlatos();
		void setPlatos(int);

		string getHistorialVentas();
		void setHistorialVentas(string);


};
#endif