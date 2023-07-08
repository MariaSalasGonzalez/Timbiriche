//#pragma once
/*
	Dibuja lineas donde puede y como puede
*/

#ifndef EstrategiaPeriferica_H
#define EstrategiaPeriferica_H
#include"Estrategia.h"


class EstrategiaPeriferica :public Estrategia {
private:
	int fila, columna;
public:
	EstrategiaPeriferica(int, int);
	~EstrategiaPeriferica();

	int getFila();
	int getColumna();


	void setFila(int);
	void setColumna(int);


	// bool Mover();
	bool displayStrategy();

	string toString();
	friend ostream& operator<<(ostream& out, EstrategiaPeriferica& object);
	EstrategiaPeriferica& operator=(EstrategiaPeriferica&);
};
#endif // !EstrategiaPeriferica_H
