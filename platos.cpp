#include "platos.h"

platos::platos(int cantidadIngredientes,int resenaOrigen,int cantidadSabor,int registro,int precio,int valoracion,int cantidadAporte,int duracion){
	this->cantidadIngredientes=cantidadIngredientes;
	this->resenaOrigen=resenaOrigen;
	this->cantidadSabor=cantidadSabor;
	this->registro=registro;
	this->precio=precio;
	this->valoracion=valoracion;
	this->cantidadAporte=cantidadAporte;
	this->duracion=duracion;
}
platos::platos(){

}void platos::setCantidadIngredientes(int cantidadIngredientes){
   this-> cantidadIngredientes=cantidadIngredientes;
}
int platos::getCantidadIngredientes(){
   return cantidadIngredientes;
}
void platos::setResenaOrigen(int resenaOrigen){
   this-> resenaOrigen=resenaOrigen;
}
int platos::getResenaOrigen(){
   return resenaOrigen;
}
void platos::setCantidadSabor(int cantidadSabor){
   this-> cantidadSabor=cantidadSabor;
}
int platos::getCantidadSabor(){
   return cantidadSabor;
}
void platos::setRegistro(int registro){
   this-> registro=registro;
}
int platos::getRegistro(){
   return registro;
}
void platos::setPrecio(int precio){
   this-> precio=precio;
}
int platos::getPrecio(){
   return precio;
}
void platos::setValoracion(int valoracion){
   this-> valoracion=valoracion;
}
int platos::getValoracion(){
   return valoracion;
}
void platos::setCantidadAporte(int cantidadAporte){
   this-> cantidadAporte=cantidadAporte;
}
int platos::getCantidadAporte(){
   return cantidadAporte;
}
void platos::setDuracion(int duracion){
   this-> duracion=duracion;
}
int platos::getDuracion(){
   return duracion;
}
