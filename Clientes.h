#ifndef CLIENTES_H
#define CLIENTES_H

#include <stdlib.h>
#include <ctime>
#include<windows.h>

class Cliente {
  int tiempo;
  public:
  void setTiempo(); // recorrer array/lista y asignar aleatoriamente la atencion entre 3 y 15 minutos. Uno representa un minuto.
  int getTiempo();
  Cliente();
  ~Cliente();
};

#endif // CLIENTES_H
