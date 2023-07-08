#include "abstractCampo.h"


abstractCampo::abstractCampo(int fila, int columna)
	:fila(fila), columna(columna)
{
	matriz = new bool* [fila];
	for (int i = 0; i < fila; i++) {
		matriz[i] = new bool[columna];
	}

	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < columna; j++) {
			matriz[i][j] = false;
		}
	}

}

abstractCampo::~abstractCampo()
{
	for (int i = 0; i < fila; i++)
	{
		delete[] matriz[i];
	}
	delete[] matriz;
}


void abstractCampo::setTrue(int fila, int columna)
{
	this->matriz[fila, columna] = new bool(true);
}

bool abstractCampo::getData(int i, int j)
{
	return matriz[i][j];
}

int abstractCampo::getColumna()
{
	return this-> columna;
}

int abstractCampo::getFila()
{
	return this->fila;
}

ostream& operator<<(ostream& out, abstractCampo& object)
{
	out << object.toString();
	return out;
}


