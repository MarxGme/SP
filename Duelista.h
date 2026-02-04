#ifndef DUELISTA_H
#define DUELISTA_H
#include "Personaje.h"

class Duelista: public Personaje {
    private:
    int counterValue; // El atributo tiene la capacidad de regresar el daño x2
    bool counterActivo; // Solo devuelve daño si se activó la habilidad
    public:
    Duelista(int _vida, int _salud, int _ataque, int _nivel, int _counterValue);
    void imprimir();
    int calculaAtaque(Personaje& objetivo);
    void recibeAtaque(int ptosAtaque) override;
    void counter();
    void habilidad() override;
};
#endif
