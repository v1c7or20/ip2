#include "Banco.h"

Banco::Banco(int _numerocajeros,int _numero_clientes)
{
    numero_clientes=_numero_clientes;
    numcajeros=_numerocajeros;
    cola=new Cola(numero_clientes);
    cajeros=new Cajero[numcajeros];


}

Banco::~Banco()
{
    //dtor
}

int Banco::simularAtencion(){

}// simula proceso de atencion. En un bucle recorrer los cajeros y restar un minuto de atenncion por cada cajero.
void Banco::setCliente( ){
    cola->getCliente();
    for(int i=0;i<numcajeros;i++){
        cajeros[i].setTiempo(cola->getClientev2(i));}
        clientesiguiente=numcajeros-1;
        }
