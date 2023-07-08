//#pragma once
/*
	Dibuja lineas donde puede y como puede
*/

#ifndef EstrategiaCercana_H
#define EstrategiaCercana_H
#include"Estrategia.h"


class EstrategiaCercana :public Estrategia {
private:
	int fila, columna;
public:
	EstrategiaCercana(int, int);
	~EstrategiaCercana();

	int getFila();
	int getColumna();


	void setFila(int);
	void setColumna(int);


	// bool Mover();
	bool displayStrategy();

	string toString();
	friend ostream& operator<<(ostream& out, EstrategiaCercana& object);
	EstrategiaCercana& operator=(EstrategiaCercana&);
};
#endif // !EstrategiaCercana_H
