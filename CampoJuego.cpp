#include "CampoJuego.h"
#include <sstream>

//-----------Constructor-----------------------
CampoJuego::CampoJuego(int fila, int columna)
	:abstractField(fila, columna)
{
	vec= new Vector<abstractField>;
}

bool CampoJuego::add(bool elemento, int fila, int columna)
{
	return true;
}

string CampoJuego::toString()
{
	return vec->toString();
}

int CampoJuego::getFila()
{
	return fila;
}

int CampoJuego::getColumna()
{
	return columna;
}

bool CampoJuego::addC_Matriz(Campo* x)
{
	return vec->agregar(x);
}

//-----------------Destructor------------------
CampoJuego::~CampoJuego()
{}