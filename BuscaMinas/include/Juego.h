//Priscila Sarai Guzm�n Calgua 9959-23-450
#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"
#include <chrono>    // Para el cron�metro
#include <string>    // Para el nombre del jugador

using namespace std;

class Juego
{
private:
	Tablero tablero;
	int cantidadMinas;
	string nombreJugador;
    int score; // Nuevo atributo para el puntaje
    std::chrono::time_point<std::chrono::system_clock> inicio;
	int aleatorio_en_rango(int minimo, int maximo);
	int filaAleatoria();
	int columnaAleatoria();
	int tiempoTranscurrido();


public:
    Juego(Tablero tablero, int cantidadMinas);
	void colocarMinasAleatoriamente();
	int solicitarFilaUsuario();
	int solicitarColumnaUsuario();
	bool jugadorGana();
	void iniciar(int &vidas);
	void dibujarPortada(string nombreArchivo);

	string getNombreJugador();//Nuevo m�todo para obtener el nombre

	void aumentarScore();  // M�todo para aumentar el puntaje
    int getScore();  // M�todo para obtener el puntaje
};

#endif // JUEGO_H
