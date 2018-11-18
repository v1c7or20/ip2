#ifndef CAJEROS_H
#define CAJEROS_H


class Cajero {
  private:
    int id;
    int tiempo;
  public:
    void setTiempo(int _tiempo);
    void atender(); // resta un minuto de atencion.
    bool estaLibre();
    int get_tiempo(){return tiempo;}// Devuelve true si ya no esta ocupado.
    Cajero();
    ~Cajero();
};


#endif // CAJEROS_H
