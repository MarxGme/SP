#include "Duelista.h"
#include <iostream>
using namespace std;

Duelista::Duelista(int _vida, int _salud, int _ataque, int _nivel, int _counterValue):Personaje(_vida, _salud, _ataque, _nivel){
    counterValue = _counterValue;
    counterActivo = false;
}
void Duelista::recibeAtaque(int ptosAtaque) {
    if (counterActivo) {
        counterValue = ptosAtaque;          // Guarda el daño recibido para el counter
    }
    Personaje::recibeAtaque(ptosAtaque);
}

int Duelista::calculaAtaque(Personaje& objetivo) {
    if (counterActivo && counterValue > 0) {
        int danio = counterValue * 2;
        counterValue = 0;
        counterActivo = false;
        return danio;
    }
    return Personaje::calculaAtaque(objetivo);
}
void Duelista::imprimir(){
    Personaje::imprimir();
    cout << "MULTIPLICADOR DE DAÑO: " << counterValue << endl;
}
void Duelista::counter() {
    // Activa el counter para devolver el próximo daño recibido
    counterValue = 0;
    counterActivo = true;
    cout << "Counter activado" << endl;
}

void Duelista::habilidad() {
    counter();
}
