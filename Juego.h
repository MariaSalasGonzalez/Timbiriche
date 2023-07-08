#pragma once
#include"Tablero.h"
#include "Jugador.h"
#include"Computadora.h"
#include"Campo15.h"
#include"Campo6.h"
#include"Campo9.h"
#include<fstream>

class Juego
{
private:
	Tablero* tablero;
	Jugador* j1;
	Jugador* j2;
	Computadora* com;

	abstractCampo* c1;
	abstractCampo* c2;
	abstractCampo* c3;

	int op;
	int turnos = 1;
	int codigo;
public:
	Juego();
	void iniciar();
	void setJugadores();
	void turno(Jugador*);

	int getTurno();
	void setTurno(int);
	void seleccionaTablero();

	void escribirPuntajes();
	void impPuntajes();
	void opcionesJuego();

	void dibujarLV(int pos_x, int pos_y);
	void dibujarLH(int pos_x, int pos_y);
	//void validarPosicionSalida(int, int, Jugador*);
	//void validarPosicionLlegada(int, int, Jugador*);



};

