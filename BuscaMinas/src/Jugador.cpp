//Priscila Sarai Guzmán Calgua 9959-23-450
#include "Jugador.h"
#include <iostream>
using namespace std;

Jugador::Jugador() {
    nombre = "SinNombre";
    puntuacion = 0;
    tiempoJuego = 0.0;
}

Jugador::Jugador(string nombre) {
    this->nombre = nombre;
    puntuacion = 0;
    tiempoJuego = 0.0;
}

void Jugador::setNombre(string nombre) {
    this->nombre = nombre;
}

void Jugador::setPuntuacion(int puntuacion) {
    this->puntuacion = puntuacion;
}

void Jugador::setTiempoJuego(double tiempo) {
    this->tiempoJuego = tiempo;
}

string Jugador::getNombre() const {
    return nombre;
}

int Jugador::getPuntuacion() const {
    return puntuacion;
}

double Jugador::getTiempoJuego() const {
    return tiempoJuego;
}

void Jugador::mostrarDatosJugador() const {
    cout << "---- DATOS DEL JUGADOR ----" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Puntos: " << puntuacion << endl;
    cout << "Tiempo de juego: " << tiempoJuego << " segundos" << endl;
}
