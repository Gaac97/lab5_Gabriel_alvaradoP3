#include "menu.h"

menu::menu(int platos,string historialVentas,string nombre,string tipo){
	this->platos=platos;
	this->historialVentas=historialVentas;
	this->nombre=nombre;
	this->tipo=tipo;
}
menu::menu(){

}void menu::setPlatos(int platos){
   this-> platos=platos;
}
int menu::getPlatos(){
   return platos;
}
void menu::setHistorialVentas(string historialVentas){
   this-> historialVentas=historialVentas;
}
string menu::getHistorialVentas(){
   return historialVentas;
}
void menu::setNombre(string nombre){
   this-> nombre=nombre;
}
string menu::getNombre(){
   return nombre;
}
void menu::setTipo(string tipo){
   this-> tipo=tipo;
}
string menu::getTipo(){
   return tipo;
}
