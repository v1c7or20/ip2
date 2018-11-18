#ifndef COLA_H
#define COLA_H

#include"Clientes.h"
#include<iostream>
#include<windows.h>
using namespace std;

class Cola {
  private:
    int n;
    int tiempo;
    Cliente *ptr;
    int tipoCola;
  public:
    Cola(int _n);
    int getTamanio();
    void getCliente(); // obtiene el primer cliente y lo retira de la cola.
    int getClientev2(int c);
    void getClientev3();
    bool isEmpty(); // verifica si esta vacia la cola.
    ~Cola();
};

#endif // COLA_H
