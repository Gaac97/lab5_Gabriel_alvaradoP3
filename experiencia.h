#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef EXPERIENCIA_H
#define EXPERIENCIA_H
class experiencia{
	protected:
		int registroClientes;
		int evaluacion;
		int TotalDinero;
	public:
		experiencia(int,int,int);
		experiencia();
		int getRegistroClientes();
		void setRegistroClientes(int);

		int getEvaluacion();
		void setEvaluacion(int);

		int getTotalDinero();
		void setTotalDinero(int);

};
#endif