#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include<iostream>
#include<string>
#include<sstream>

#include "Usuario.h"

using namespace std;

class Computadora : public Usuario
{
private:
	string nick;
	int puntaje;
public:
	Computadora();
	virtual ~Computadora();
	string toString();

};

#endif