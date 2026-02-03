#include "Duelista.h"
#include <iostream>
using namespace std;

Duelista::Duelista(int _vida, int _salud, int _ataque, int _nivel, int _counterValue):Personaje(_vida, _salud, _ataque, _nivel){
    counterValue = _counterValue;
}
void Duelista::recibeAtaque(int ptosAtaque) {
    counterValue = ptosAtaque;          // guarda el daño recibido
    Personaje::recibeAtaque(ptosAtaque);
}

int Duelista::calculaAtaque(Duelista& objetivo) {
    if (counterValue > 0) {
        int danio = counterValue * 2;
        counterValue = 0;
        return danio;
    }
    return Personaje::calculaAtaque(objetivo);
}
void Duelista::imprimir(){
    imprimir();
    cout << "COUNTER: " << counterValue << endl;
}