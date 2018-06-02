#include "bodega.h"
#include "ingredientes.h"
  
bodega::bodega(vector<ingredientes*> ingrediente,int cantidad){
        this->ingrediente=ingrediente;
        this->cantidad=cantidad;
}
bodega::bodega(){

}void bodega::setIngrediente(ingredientes* ingrediente){
   this-> ingrediente.push_back(ingrediente);
}
vector<ingredientes*> bodega::getIngrediente(){
   return ingrediente;
}
void bodega::setCantidad(int cantidad){
   this-> cantidad=cantidad;
}
int bodega::getCantidad(){
   return cantidad;
}
                  
