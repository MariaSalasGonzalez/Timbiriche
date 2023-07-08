#ifndef JUGADOR_H
#define JUGADOR_H

#include<iostream>
#include<string>
#include<sstream>

using namespace std;

#include "Usuario.h"
#include"EmpresaDots.h"
//class EmpresaDots;
class Jugador : public Usuario {
private:
	string id;
	string code;
public:
	Jugador(string, int);
	Jugador(string, int, string);
	Jugador(string nick, string id, int puntaje, EmpresaDots* object, string code);
	virtual ~Jugador();

	string getId();
	void setId(string);

	string getNick();
	void setNick(string nick);
	int getPuntaje();
	void setPuntaje(int);
	void aumentarPuntaje();

	void notify();
	void update();
	string toString();

};
#endif