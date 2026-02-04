#ifndef TANQUE_H
#define TANQUE_H
#include "Personaje.h"

class Tanque: public Personaje {
    private:
    int refuerzo; // Probabilidad de que se vuelva invulnerable por cierto tiempo
    int turnosInvulnerable; // Atributo añadido para calcular los turnos siendo invulnerable
    public:
    Tanque(int _vida, int _salud, int _ataque, int _nivel, int _refuerzo);
    void imprimir();
    int calculaAtaque(Tanque& objetivo);
    void reforzar();
    void recibeAtaque(int ptoAtaque) override;
    void habilidad() override;
};
#endif
