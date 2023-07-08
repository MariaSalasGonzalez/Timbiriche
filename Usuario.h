#ifndef USUARIO_H
#define USUARIO_H

#include<iostream>
#include<string>
#include<sstream>
#include"Observer.h"
using namespace std;

class Observer;
class Usuario :public Observer {
private:
	string nick;
	int puntaje;
	string code;
public:
	Usuario();
	Usuario(string nick, int puntaje);
	Usuario(EmpresaDots* object, string code);
	Usuario(string nick, int puntaje, EmpresaDots* object, string code);
	virtual ~Usuario();

	virtual string getNick();
	virtual void setNick(string nick);
	virtual int getPuntaje();
	virtual void setPuntaje(int);
	virtual void aumentarPuntaje();

	virtual string toString() = 0;
};
#endif