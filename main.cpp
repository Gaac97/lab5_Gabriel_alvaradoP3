#include <iostream>
#include <string>
#include "bodega.h"
#include "menu.h"
#include "platos.h"
#include "experiencia.h"
#include <vector>


using namespace std;
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(){
     vector<menu*>listMenu;
     vector<bodega*>listBodega;
     	bodega* b = new bodega();     
		cout<<"Bienvenido" <<endl;  
		int opcion=0;
		while(opcion!=5){
		
		cout<<"1) ingresar ingredientes de bodega"<<endl;
		cout<<"2) Menu"<<endl;
		cout<<"3) Crear Platos"<<endl;
		cout<<"4) experiencia"<<endl;
		cout<<"5) SAlIR"<<endl;
		cin>>opcion;	
		if(opcion==1){
		char resp='s';
		while(resp=='s'||resp=='S'){
		string ingredientes;
		int cantidad;
		cout<<"Ingrese el nombre del ingrediente:"<<endl;
		cin>>ingredientes;
		cout<<"Ingrese la cantidad:"<<endl;
		cin>>cantidad;
		//b = new bodega(cantidad,ingredientes);
		
		
		
		cout<<"Desea ingresar otro ingrediente s/n"<<endl;
		cin>>resp;
		}//		
		
		
		}
		
			
		}//Fin	
		  
     
     return 0;
}