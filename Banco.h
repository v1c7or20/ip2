#ifndef BANCO_H
#define BANCO_H

#include<iostream>
#include"Cajeros.h"
#include"Cola.h"
using namespace std;

class Banco {
  private:
    string nombre;
    int numero_clientes;
    int numcajeros;
    int clientesiguiente;
    Cajero *cajeros;
    Cola *cola;
    public:
    Banco(int _numcajeros,int _numero_clientes);
    int simularAtencion(); // simula proceso de atencion. En un bucle recorrer los cajeros y restar un minuto de atenncion por cada cajero.
    void setCliente( );
    ~Banco();
};

#endif // BANCO_H
