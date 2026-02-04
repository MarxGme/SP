#include "Curandero.h"
#include <iostream>
using namespace std;

Curandero::Curandero(int _vida, int _salud, int _ataque, int _nivel, int _curacion):Personaje(_vida, _salud, _ataque, _nivel){
    curacion = _curacion;
}
void Curandero::recibeAtaque(int ptosAtaque) {
    Personaje::recibeAtaque(ptosAtaque);
}

void Curandero::curar(){
    int hp = getSalud();
    int maxHp = getVida();
    int nuevoHp = hp + curacion;
    if (nuevoHp > maxHp) {
        nuevoHp = maxHp;
    }
    setSalud(nuevoHp);
    cout << "Curación: +" << curacion << "| HP actual: " << getSalud() << endl;
}

void Curandero::imprimir(){
    Personaje::imprimir();
    cout << "CURACIÓN: " << curacion << endl;
}
void Curandero::habilidad() {
    curar();
}
