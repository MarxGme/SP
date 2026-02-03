#ifndef TANQUE_H
#define TANQUE_H
#include "Personaje.h"

class Tanque: public Personaje {
    private:
    int refuerzo; // Probabilidad de que se vuelva invulnerable por cierto tiempo
};
#endif