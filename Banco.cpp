#include "Banco.h"

Banco::Banco(int _numerocajeros,int _numero_clientes)
{
    numero_clientes=_numero_clientes;
    numcajeros=_numerocajeros;
    cola=new Cola(numero_clientes);
    cajeros=new Cajero[numcajeros];
    varcliente=numero_clientes-numcajeros;
}

Banco::~Banco()
{
    //dtor
}

void Banco::simularAtencion(){
    for(int i=0;i<numcajeros;i++){
    cajeros[i].atender();
    if(cajeros[i].estaLibre()){
        cajeros[i].setTiempo(cola->getClientev2(clientesiguiente));
        clientesiguiente++;
        varcliente--;}}
    }// simula proceso de atencion. En un bucle recorrer los cajeros y restar un minuto de atenncion por cada cajero.
void Banco::setCliente( ){
    cola->getCliente();
    for(int i=0;i<numcajeros;i++){
        cajeros[i].setTiempo(cola->getClientev2(i));}
    clientesiguiente=numcajeros;}

Cola* Banco::getCola(){
    return cola;
}

bool Banco::colavacia(){
    if(varcliente==0){
        return (true);
    }
    else return (false);
}
