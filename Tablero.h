#pragma once
#include "abstractCampo.h"
#include "Vector.h"
#include "Utiles.h"

class Tablero 
{
private:

	Vector<abstractCampo> *vCampos;
	int separador = 0;
	bool ** matriz;
	int fila = 0;
	int columna = 0;

public:


	// Constructor
	Tablero();


	// Gets
	Vector<abstractCampo>* getCampos() { return this->vCampos; }
	int getSeparador() { return separador; }
	bool** getMatriz() { return this->matriz; }
	int getFila() { return fila; }
	int getColumna() { return columna; }


	// Sets
	void setSeparador(int separador) {	this->separador = separador; }
	void setFila(int fila) { this->fila = fila; }
	void setColumna(int columna) { this->columna = columna; }


	void calcularFilasColumnas();
	void crearMatriz(); 
	void llenarMatriz(); 

	// toString
	string toString();

	





};

