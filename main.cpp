#include "Personaje.cpp"
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    Personaje heroe(100, 100, 30, 10);
    Personaje objetivo(120, 120, 30, 3);

    cout << "Stats héroe:" << endl;
    heroe.imprimir();
    cout << endl;

    cout << "Stats enemigo:" << endl;
    objetivo.imprimir();
    cout << endl;

    cout << "Ataque 1(Turno Heroe):" << endl;
    heroe.atacar(objetivo);
    cout << "\nBarra de Salud del heroe" << endl;
    heroe.barraSalud();
    cout << "\nBarra de Salud del enemigo" << endl;
    objetivo.barraSalud();
    cout << endl;

    cout << "Ataque 2(Turno Enemigo):" << endl;
    objetivo.atacar(heroe);
    cout << "\nBarra de Salud del heroe" << endl;
    heroe.barraSalud();
    cout << "\nBarra de Salud del enemigo" << endl;
    objetivo.barraSalud();
    cout << endl;

    cout << "Ataque 3(Turno Héroe):" << endl;
    heroe.atacar(objetivo);
    cout << "\nBarra de Salud del heroe" << endl;
    heroe.barraSalud();
    cout << "\nBarra de Salud del enemigo" << endl;
    objetivo.barraSalud();
    cout << endl;

    cout << "Ataque 4(Turno Enemigo):" << endl;
    objetivo.atacar(heroe);
    cout << "\nBarra de Salud del heroe" << endl;
    heroe.barraSalud();
    cout << "\nBarra de Salud del enemigo" << endl;
    objetivo.barraSalud();
    cout << endl;

    cout << "Ataque 5(Turno Héroe):" << endl;
    heroe.atacar(objetivo);
    cout << "\nBarra de Salud del heroe" << endl;
    heroe.barraSalud();
    cout << "\nBarra de Salud del enemigo" << endl;
    objetivo.barraSalud();
    cout << endl;

    cout << "Ataque 6(Turno Enemigo):" << endl;
    objetivo.atacar(heroe);
    cout << "\nBarra de Salud del heroe" << endl;
    heroe.barraSalud();
    cout << "\nBarra de Salud del enemigo" << endl;
    objetivo.barraSalud();
    cout << endl;

    cout << "Ataque 7(Turno Héroe):" << endl;
    heroe.atacar(objetivo);
    cout << "\nBarra de Salud del heroe" << endl;
    heroe.barraSalud();
    cout << "\nBarra de Salud del enemigo" << endl;
    objetivo.barraSalud();
    cout << endl;

    cout << "Ataque 8(Turno Enemigo):" << endl;
    objetivo.atacar(heroe);
    cout << "\nBarra de Salud del heroe" << endl;
    heroe.barraSalud();
    cout << "\nBarra de Salud del enemigo" << endl;
    objetivo.barraSalud();
    cout << endl;

    cout << "Ataque 9(Turno Héroe):" << endl;
    heroe.atacar(objetivo);
    cout << "\nBarra de Salud del heroe" << endl;
    heroe.barraSalud();
    cout << "\nBarra de Salud del enemigo" << endl;
    objetivo.barraSalud();
    cout << endl;

    cout << "Ataque 10(Turno Enemigo):" << endl;
    objetivo.atacar(heroe);
    cout << "\nBarra de Salud del heroe" << endl;
    heroe.barraSalud();
    cout << "\nBarra de Salud del enemigo" << endl;
    objetivo.barraSalud();
    cout << endl;

    return 0;
}
