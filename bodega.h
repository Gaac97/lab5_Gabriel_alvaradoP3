#include <iostream>
#include <string>
#include <vector>
#include "ingredientes.h"

using namespace std;

#ifndef BODEGA_H
#define BODEGA_H
class bodega{
	private:
		vector<ingredientes*> ingrediente;
		int cantidad;
	public:
		bodega(vector<ingredientes*>,int);
		bodega();
		vector<ingredientes*> getIngrediente();
		void setIngrediente(ingredientes*);

		int getCantidad();
		void setCantidad(int);

};
#endif