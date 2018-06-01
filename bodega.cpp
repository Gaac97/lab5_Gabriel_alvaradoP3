#include "bodega.h"
  
bodega::bodega(vector<bodega*> ingredientes,int cantidad){
        this->ingredientes=ingredientes;
        this->cantidad=cantidad;
}
bodega::bodega(){

}void bodega::setIngredientes(bodega* Cingredientes){
   this-> ingredientes.push_back(Cingredientes);
}
vector<bodega*> bodega::getIngredientes(){
   return ingredientes;
}
void bodega::setCantidad(int cantidad){
   this-> cantidad=cantidad;
}
int bodega::getCantidad(){
   return cantidad;
}
                  
