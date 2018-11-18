#include <iostream>
#include <random>
#include"Clientes.h"
#include"Cola.h"
#include<iomanip>
#include"Cajeros.h"
#include"Banco.h"
using namespace std;




int main()
{
    Cliente c1;
    c1.setTiempo();
    cout<<c1.getTiempo()<<endl;
    int n;
    cin>>n;
    int tiempos[n];
    Cola co1(n);
    co1.getClientev3();
    cout<<"\n";
    for(int i=0;i<n;i++){
    tiempos[i]=co1.getClientev2(i);
    }
    for(int i=0;i<n;i++){
    cout<<setw(20)<<tiempos[i]<<"\n";}
    Cajero ca1;
    ca1.setTiempo(tiempos[1]);
    cout<<ca1.get_tiempo();
    while(!ca1.estaLibre()){
            ca1.atender();
            cout<<"atiendo";
    }
    Banco b1(n,n-2);
    b1.setCliente();
    int i=0;
    while( i<15){
    b1.simularAtencion();
    i++;}


  /*
  1. Establecer numero de clientes
  2. Establecer numero de cajeros.
  3. Asignar tiempo aleatorio a los clientes.
  4. Asignar aleatoriamente los clientes a la cola escenario 1. Y Según prioridad a escenario 2.
  5. Mostrar el tiempo de ejecución.

  Consideraciones.

  Puede incorporar Herencia en el proyecto.
  Use relaciones entre clases como se describe en el código de ejemplo.
  */
  return 0;
}
