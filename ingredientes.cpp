#include "ingredientes.h"
#include <iostream>
using namespace std;
ingredientes::ingredientes(string nombre,string tipo){
        this->nombre=nombre;
        this->tipo=tipo;
}
ingredientes::ingredientes(){

}void ingredientes::setNombre(string nombre){
   this-> nombre=nombre;
}
string ingredientes::getNombre(){
   return nombre;
}
void ingredientes::setTipo(string tipo){
   this-> tipo=tipo;
}
string ingredientes::getTipo(){
   return tipo;
}
