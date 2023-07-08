/*
	Coloca líneas, por las zonas centrales de la matriz
*/

#ifndef EstrategiaCentral_H
#define EstrategiaCentral_H
#include"Estrategia.h"


class EstrategiaCentral :public Estrategia {
private:
	int fila, columna;
public:
	EstrategiaCentral(int, int);
	~EstrategiaCentral();

	int getFila();
	int getColumna();


	void setFila(int);
	void setColumna(int);


	// bool Mover();
	bool displayStrategy();

	string toString();
	friend ostream& operator<<(ostream& out, EstrategiaCentral& object);
	EstrategiaCentral& operator=(EstrategiaCentral&);
};
#endif // !EstrategiaCentral_H

