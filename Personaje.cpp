#include "Personaje.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int Personaje::getVida(){
    return vida;
}

void Personaje::setVida(int _vida){
    vida = _vida;
}

int Personaje::getSalud(){
    return salud;
}

void Personaje::setSalud(int _salud){
    salud = _salud;
}

int Personaje::getAtaque(){
    return ataque;
}

void Personaje::setAtaque(int _ataque){
    ataque = _ataque;
}

int Personaje::getNivel(){
    return nivel;
}

void Personaje::setNivel(int _nivel){
    nivel = _nivel;
}

int Personaje::calcularSalud(){
    if (vida <= 0){
        return 0;
    }
    int porcentaje = (salud * 100) / vida;
    if (porcentaje < 0){
        porcentaje = 0;
    } else if (porcentaje > 100){
        porcentaje = 100;
    }
    return porcentaje;
}

void Personaje::barraSalud(){
    const int total = 20;
    int porcentaje = calcularSalud();
    int vidaDis = (porcentaje * total) / 100;
    int vidaPer = total - vidaDis;

    cout << "[";
    for (int i = 0; i < vidaDis; i++){
        cout << "#";
    }
    for (int i = 0; i < vidaPer; i++){
        cout << "-";
    }
    cout << "] " << porcentaje << "%" << endl;
}

int Personaje::calculaAtaque(Personaje& objetivo){
    int ataqueBase = ataque + (nivel * 2);
    int mitad = ataqueBase / 2;
    if (mitad < 1){
        mitad = 1;
    }

    int minAtaque = 0;
    int maxAtaque = 0;
    if (objetivo.getNivel() > nivel){
        minAtaque = 1;
        maxAtaque = mitad;
    } else {
        minAtaque = mitad;
        maxAtaque = ataque;
    }
    
    if (maxAtaque < minAtaque){
        maxAtaque = minAtaque;
    }

    return minAtaque + (rand() % (maxAtaque - minAtaque + 1));
}

void Personaje::recibeAtaque(int ptosAtaque){
    int nuevaSalud = salud - ptosAtaque;
    if (nuevaSalud < 0){
        nuevaSalud = 0;
    }
    setSalud(nuevaSalud);
}

void Personaje::atacar(Personaje& objetivo){
    int danio = calculaAtaque(objetivo);
    objetivo.recibeAtaque(danio);
    cout << "Daño inflingido: " << danio << endl;
}

void Personaje::imprimir(){
    cout << "VIDA MÁXIMA: " << getVida() << endl;
    cout << "SALUD ACTUAL: " << getSalud() << endl;
    cout << "ATAQUE: " << getAtaque() << endl;
    cout << "NIVEL: " << getNivel() << endl;
    barraSalud();
}