#pragma once
#include "Vector.h"
#include "C_Matriz.h"
#include "Campo.h"

//Este es el composite, el campo resultante

class CampoJuego :public abstractField
{

private:
	Vector<abstractField>* vec;
	int fila;
	int columna;

public:

	//-----------------Constructor------------------------
	CampoJuego(int fila, int columna);


	//-----------------Destructor-------------------------
	~CampoJuego();
	
	//-----------------Métodos----------------------------
	bool add(bool elemento, int fila, int columna);
	string toString();
	int getFila();
	int getColumna();



	// Componente COMPUESTO XD (composite)

	bool addC_Matriz(Campo* x);



};




