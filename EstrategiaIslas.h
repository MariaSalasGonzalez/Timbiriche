
#ifndef EstrategiaIslas_H
#define EstrategiaIslas_H
#include"Estrategia.h"

class EstrategiaIslas :public Estrategia {
private:
	int fila, columna;
public:
	EstrategiaIslas(int, int);
	~EstrategiaIslas();

	int getFila();
	int getColumna();


	void setFila(int);
	void setColumna(int);


	// bool Mover();
	bool displayStrategy();

	string toString();
	friend ostream& operator<<(ostream& out, EstrategiaIslas& object);
	EstrategiaIslas& operator=(EstrategiaIslas&);
};
#endif // !EstrategiaIslas_H


