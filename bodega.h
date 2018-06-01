#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef BODEGA_H
#define BODEGA_H
class bodega{
	protected:
		vector<bodega*> ingredientes;
		int cantidad;
	public:
		bodega(vector<bodega*>,int);
		bodega();
		vector<bodega*> getIngredientes();
		void setIngredientes(bodega*);

		int getCantidad();
		void setCantidad(int);

};
#endif