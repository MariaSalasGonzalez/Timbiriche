#pragma once
#include<sstream>

using namespace std;

class abstractCampo   

{
protected:

	bool ** matriz;
	int fila;
	int columna;

public:

	abstractCampo(int, int);
	~abstractCampo();

	void setTrue(int, int);
	bool getData(int, int);
	virtual string toString() = 0;


	int getColumna();
	int getFila();

	friend ostream& operator<<(ostream& out, abstractCampo& object);


};

