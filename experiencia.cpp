#include "experiencia.h"

experiencia::experiencia(int registroClientes,int evaluacion,int TotalDinero){
	this->registroClientes=registroClientes;
	this->evaluacion=evaluacion;
	this->TotalDinero=TotalDinero;
}
experiencia::experiencia(){

}void experiencia::setRegistroClientes(int registroClientes){
   this-> registroClientes=registroClientes;
}
int experiencia::getRegistroClientes(){
   return registroClientes;
}
void experiencia::setEvaluacion(int evaluacion){
   this-> evaluacion=evaluacion;
}
int experiencia::getEvaluacion(){
   return evaluacion;
}
void experiencia::setTotalDinero(int TotalDinero){
   this-> TotalDinero=TotalDinero;
}
int experiencia::getTotalDinero(){
   return TotalDinero;
}
