#include "Cola.h"

Cola::Cola(int _n){
n=_n;
tiempo = 0;
ptr = new Cliente[n];}

Cola::~Cola(){
    //dtor
}
void Cola::getCliente(){
    for(int i=0;i<n;i++){
        Sleep(10);
        ptr[i].setTiempo();
    }
}
void Cola::getClientev3(){
    for(int i=0;i<n;i++){
        ptr[i].setTiempo();
        cout<<ptr[i].getTiempo()<<" ";
    }
   }

int Cola::getClientev2(int c){
        return ptr[c].getTiempo();
}

bool Cola::isEmpty(){

}
