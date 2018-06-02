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
     vector<bodega*>listBodega;
     vector<ingredientes*>ListIngre;
     	bodega* b = new bodega();   
		cout<<"Bienvenido" <<endl;  
		int opcion=0;
		while(opcion!=5){
		
		cout<<"1) ingresar ingredientes"<<endl;
		cout<<"2) Bodega"<<endl;
		cout<<"3) Crear Platos"<<endl;
		cout<<"4) experiencia"<<endl;
		cout<<"5) SAlIR"<<endl;
		cout<<"Ingrese una opcion"<<endl;	
		cin>>opcion;	
		if(opcion==1){
		char resp='s';
		while(resp=='s'||resp=='S'){
			string nombre;
			string tipo;
			cout<<"Ingrese el nombre del ingrediente:"<<endl;
			cin>>nombr:we;
			cout<<"Ingrese la cantidad:"<<endl;
			cin>>tipo;
			b->setIngredientes(new ingredientes(nombre,tipo));	
		
		cout<<"Desea ingresar otro ingrediente s/n"<<endl;
		cin>>resp;
		}//		
		
		}
		
		if(opcion==2){
			int cantidad;
		cout<<"Ingrese la cantidad de ingredientes:"<<endl;		
		cin>>cantidad;
				
		}
		
			
		}//Fin	
		  
     
     return 0;
}