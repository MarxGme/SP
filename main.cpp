#include "Personaje.cpp"
#include "Curandero.cpp"
#include "Duelista.cpp"
#include "Tanque.cpp"
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand(static_cast<unsigned>(time(nullptr))); // Se usa para generar una semilla distinta cada vez que se corra y la probabilidad de refuerzo sea aleaoria

    cout << "\nElige tu heroe:" << endl;
    cout << "1) Duelista" << endl;
    cout << "2) Curandero" << endl;
    cout << "3) Tanque" << endl;
    cout << "Opcion: ";

    int tipo = 0;
    cin >> tipo;

    Personaje* heroe = nullptr;
    if (tipo == 1) {
        heroe = new Duelista(100, 100, 30, 10, 0);
    } else if (tipo == 2) {
        heroe = new Curandero(90, 90, 20, 10, 25);
    } else if (tipo == 3) {
        heroe = new Tanque(140, 140, 20, 8, 50);
    } else {
        cout << "Opcion invalida.Elige un héroe" << endl;
        return 0;
    }

    Tanque objetivo(120, 120, 30, 3, 30);

    cout << "\nStats heroe:" << endl;
    heroe->imprimir();
    cout << endl;

    cout << "Stats enemigo:" << endl;
    objetivo.imprimir();
    cout << endl;

    int opcion = 0;
    while (opcion != 3 && heroe->getSalud() > 0 && objetivo.getSalud() > 0) {
        cout << "\n=== MENU ===" << endl;
        cout << "1) Atacar" << endl;
        cout << "2) Habilidad" << endl;
        cout << "3) Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "\nTurno heroe:" << endl;
            heroe->atacar(objetivo);
        } else if (opcion == 2) {
            cout << "\nTurno heroe (habilidad):" << endl;
            heroe->habilidad();
        } else if (opcion == 3) {
            cout << "Saliendo..." << endl;
            break;
        } else {
            cout << "Opcion invalida." << endl;
            continue;
        }

        if (objetivo.getSalud() > 0) {
            cout << "\nTurno enemigo:" << endl;
            objetivo.atacar(*heroe);
        }

        cout << "\nBarra de Salud del heroe" << endl;
        heroe->barraSalud();
        cout << "\nBarra de Salud del enemigo" << endl;
        objetivo.barraSalud();
        cout << endl;
    }

    delete heroe;
    return 0;
}
