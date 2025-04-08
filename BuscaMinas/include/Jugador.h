//Prscila Sarai Guzmán Calgua 9959-23-450
#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
using namespace std;

class Jugador {
private:
    string nombre;
    int puntuacion;
    double tiempoJuego;

public:
    Jugador();  // Constructor
    Jugador(string nombre);  // Constructor con nombre

    void setNombre(string nombre);
    void setPuntuacion(int puntuacion);
    void setTiempoJuego(double tiempo);

    string getNombre() const;
    int getPuntuacion() const;
    double getTiempoJuego() const;

    void mostrarDatosJugador() const;
};

#endif



