#include "Clientes.h"

Cliente::Cliente()
{
}

Cliente::~Cliente()
{
    //dtor
}

void Cliente::setTiempo(){
    Sleep(100);
    srand(time(NULL));
    tiempo=(rand()%13)+3;
}
int Cliente::getTiempo(){
    return tiempo;
}
