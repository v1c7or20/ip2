#ifndef CAJEROS_H
#define CAJEROS_H


class Cajero {
  private:
    int id;
    int tiempo=0;
    int tiempo_total=0;
  public:
    void setTiempo(int _tiempo);
    void atender(); // resta un minuto de atencion.
    bool estaLibre();
    int get_tiempo(){return tiempo;}// Devuelve true si ya no esta ocupado.
    Cajero();
    ~Cajero();
    int gettiempototal();
};


#endif // CAJEROS_H
