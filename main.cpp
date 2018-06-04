#include <iostream>
#include <string>
#include "bodega.h"
#include "menu.h"
#include "platos.h"
#include "experiencia.h"
#include <vector>
#include "ingredientes.h"
#include "platos.h"
#include <fstream>
#include <stdlib.h>

using namespace std;
using std::cout;
using std::endl;
using std::cin;
using std::string;

void escribir(vector<ingredientes*>);

int main(){
     vector<bodega*>ListBodega;
     vector<ingredientes*>ListIngre;
     vector<platos*>ListPlatos;
     	bodega* b = new bodega();  
     	ingredientes* i = new ingredientes(); 
     	platos* p = new platos();
		cout<<"Bienvenido" <<endl;  
		int opcion=0;
		while(opcion!=6){
		
		cout<<"1) ingresar ingredientes"<<endl;
		cout<<"2) Bodega"<<endl;
		cout<<"3) Crear Platos"<<endl;
		cout<<"4) experiencia"<<endl;
		cout<<"5) Guardar en archivo de texto"<<endl;
		cout<<"6) salir"<<endl;
		cout<<"Ingrese una opcion"<<endl;	
		cin>>opcion;	
		if(opcion==1){
		char resp='s';
		while(resp=='s'||resp=='S'){
			string nombre;
			string tipo;
			cout<<"Ingrese el nombre del ingrediente:"<<endl;
			cin>>nombre;
			cout<<"Ingrese la cantidad:"<<endl;
			cin>>tipo;			
			i = new ingredientes(nombre,tipo);
			ListIngre.push_back(i);
		
		cout<<"Desea ingresar otro ingrediente s/n"<<endl;
		cin>>resp;
		}//FinWhile	
		
		
		}
		
		if(opcion==2){
				int numero;
				int cantidad;
				cout<<"Que ingrediente desea"<<endl;
				for(int i=0;i<ListIngre.size();i++){		
				cout<< i<<"." << ListIngre[i]->getNombre()<< endl; 
				}	
				cin>>numero;				
			cout<<"Ingrese la cantidad del ingrediente"<<endl;
			cin>>cantidad;
			bodega* b = new bodega();
			b= new bodega(ListIngre,cantidad);
			ListBodega.push_back(b);
		
		}
		
		
		
		if(opcion==3){
		int cantidadIngre,cantidadSabor,registro,precio,valoracion,cantidadAporte,duracion,plato;
		string historial,resena;
		cout<<"Ingrese la cantidad de ingredientes:"<<endl;		
		cin>>cantidadIngre;
		
		cout<<"Ingrese la reseña:"<<endl;		
		cin>>resena;
		
		cout<<"Ingrese la cantidad :"<<endl;		
		cin>>cantidadSabor;
		
		cout<<"Ingrese el registro:"<<endl;		
		cin>>registro;
		
		cout<<"Ingrese el precio:"<<endl;		
		cin>>precio;
		
		cout<<"Ingrese la valoracion:"<<endl;		
		cin>>valoracion;
		
		cout<<"Ingrese la cantidad de aporte:"<<endl;		
		cin>>cantidadAporte;
		
		cout<<"Ingrese la duracion:"<<endl;		
		cin>>duracion;				

		cout<<"Ingrese el historial del plato :"<<endl;		
		cin>>historial;
		
		p= new platos(cantidadIngre,resena,cantidadSabor,registro,precio,valoracion,cantidadAporte,duracion,historial);		
		ListPlatos.push_back(p);
		
		}
		
		
		if(opcion==5){
		escribir(ListIngre);	//Solo escribo en el texto	
		
		}
		
			
		}//Fin	
		  
     
     return 0;
}


/*void listar(vector<ingredientes> lista){
for(int i=0;i<lista.size();i++){
cout<< i << lista[i].getNombre()<< endl; 
}

}*/


void escribir(vector<ingredientes*> list){
  ofstream file("ingredientes.txt");
  if (file.is_open()) {
    file<<"LISTA DE INGREDIENTES"<<endl;
    for (int i = 0; i < list.size(); i++) {
      if (dynamic_cast<ingredientes*>(list.at(i))) {
        ingredientes* temp = dynamic_cast<ingredientes*>(list.at(i));
        file<<"Nombre: "<<list.at(i)->getNombre()<<"TIPO:"<<list.at(i)->getTipo()<<endl;
      	}      

		}
	
	}
	 file.close();
}





/*
void cargar(){
vector<ingredientes*>Lista;
string contenido;
cout <<"ingrese el nombre del archivo que quieres leer"<<endl;
cin.ignore;
getline(cin,contenido);
contenido += ".txt";
ifstream fs(contenido.c_str(), ios::in);
char linea[200];
long contador = OL;
	if(fs.fail(){
		cerr<<"El archivo no existe"<<endl;

	}else{	
	while(!fs.eof(){
	fs.getline(linea,sizeof(linea);
	
	cout<<linea<<endl;
	if((++contador%24)==0){
	cout <<"continuar..."<<endl;	
		cin.get();
	
	
		}	
	
	}
	fs.close();
	system("pause");	
	


	}
}*/