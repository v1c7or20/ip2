#include "Cajeros.h"

Cajero::Cajero()
{
    //ctor
}

Cajero::~Cajero()
{
    //dtor
}

void Cajero::setTiempo(int _tiempo){
    tiempo=_tiempo;
    tiempo_total+=tiempo;
}
void Cajero::atender(){
    tiempo=tiempo-1;
} // resta un minuto de atencion.
bool Cajero::estaLibre(){
    if (tiempo==0){
        return (true);
    }
    else return false;
}

int Cajero::gettiempototal(){
    return (tiempo_total);
}
