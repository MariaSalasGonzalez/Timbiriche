#include "Computadora.h"

Computadora::Computadora() :Usuario(nick, puntaje) {}

Computadora::~Computadora()
{
}

string Computadora::toString() {
	stringstream s;
	s << "Usuario: " << this->getNick() << "Puntaje: " << this->getPuntaje() << endl;
	return s.str();
}