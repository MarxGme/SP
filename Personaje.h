#ifndef PERSONAJE_H
#define PERSONAJE_H

class Personaje{
private:
    // Atributos
    int vida;
    int salud;
    int ataque;
    int nivel;
public:
    // Constructor por defecto
    Personaje(){
        vida = 0;
        salud = 0;
        ataque = 0;
        nivel = 0;
    }
    // Constructor con parámetros
    Personaje(int _vida, int _salud, int _ataque, int _nivel){
        vida = _vida;
        salud = _salud;
        ataque = _ataque;
        nivel = _nivel;
    }
    // Getter y Setters
    int getVida();
    void setVida(int _vida);
    int getSalud();
    void setSalud(int _salud);
    int getAtaque();
    void setAtaque(int _ataque);
    int getNivel();
    void setNivel(int _nivel);

    int calcularSalud();
    void barraSalud();
    int calculaAtaque(Personaje& objetivo);
    virtual void recibeAtaque(int ptosAtaque);
    void atacar(Personaje& objetivo);
    virtual void imprimir();
    virtual void habilidad();
    


};

#endif 
