#include "Tanque.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Tanque::Tanque(int _vida, int _salud, int _ataque, int _nivel, int _refuerzo):Personaje(_vida, _salud, _ataque, _nivel){
    refuerzo = _refuerzo;
    turnosInvulnerable = 0;
}
void Tanque::reforzar(){
    int roll = rand() % 100;
    if (roll < refuerzo) {       //Si el roll es menor a refuerzo, es invulnerable por 2 turnos
        turnosInvulnerable = 2;
        cout << "Refuerzo activado: invulnerable por 2 turnos" << endl;
    } else {
        cout << "Refuerzo fallo" << endl;
    }
}

void Tanque::recibeAtaque(int ptosAtaque) {
    if (turnosInvulnerable > 0) {
        turnosInvulnerable--;       //Para que nada mas sean 2 turnos siendo inmortal
        return;
    }
    Personaje::recibeAtaque(ptosAtaque);
}

void Tanque::imprimir(){
    Personaje::imprimir();
    cout << "REFUERZO: " << refuerzo << endl;
}
void Tanque::habilidad() {
    reforzar();
}
