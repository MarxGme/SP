#ifndef CURANDERO_H
#define CURANDERO_H
#include "Personaje.h"

class Curandero: public Personaje {
    private:
    int curacion;
    public:
    Curandero(int _vida, int _salud, int _ataque, int _nivel, int _curacion);
    void imprimir();
    int getCuracion();
    int calculaAtaque(Curandero& objetivo);
    void recibeAtaque(int ptosAtaque) override;
    void curar();
    void habilidad() override;

};
#endif
