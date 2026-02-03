#include "Tanque.h"
#include <iostream>
using namespace std;

Tanque::Tanque(int _vida, int _salud, int _ataque, int _nivel, int _refuerzo):Personaje(_vida, _salud, _ataque, _nivel){
    refuerzo = _refuerzo;
}
void Tanque::reforzar(){
    int roll = rand() % 100;
    if (roll < refuerzo) {
        turnosInvulnerable = 2;
    }
}

void Tanque::recibeAtaque(int ptosAtaque) {
    if (turnosInvulnerable > 0) {
        turnosInvulnerable--;
        return;
    }
    Personaje::recibeAtaque(ptosAtaque);
}

void Tanque::imprimir(){
    imprimir();
    cout << "REFUERZO: " << refuerzo << endl;
}