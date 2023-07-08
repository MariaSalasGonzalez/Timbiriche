//#pragma once
/*
	Dibuja lineas donde puede y como puede
*/

#ifndef EstrategiaAleatoria_H
#define EstrategiaAleatoria_H
#include"Estrategia.h"


class EstrategiaAleatoria :public Estrategia {
private:
	int fila, columna;
public:
	EstrategiaAleatoria(int, int);
	~EstrategiaAleatoria();

	int getFila();
	int getColumna();


	void setFila(int);
	void setColumna(int);


	// bool Mover();
	bool displayStrategy();

	string toString();
	friend ostream& operator<<(ostream& out, EstrategiaAleatoria& object);
	EstrategiaAleatoria& operator=(EstrategiaAleatoria&);
};
#endif // !EstrategiaAleatoria_H
