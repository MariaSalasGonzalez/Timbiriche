#include "Jugador.h"

Jugador::Jugador(string nick, int puntaje) :Usuario(nick, puntaje)
{
}

Jugador::Jugador(string nick, int puntaje, string id) : Usuario(nick, puntaje), id(id) {}

Jugador::Jugador(string nick, string id, int puntaje, EmpresaDots* object, string code)
{
}

Jugador::~Jugador() {}

string Jugador::getId() { return id; }

void Jugador::setId(string id) { this->id = id; }

string Jugador::getNick()
{
	return string();
}

void Jugador::setNick(string nick)
{
	this->getNick() = nick;
}



int Jugador::getPuntaje() { return 0; }

void Jugador::setPuntaje(int puntaje) { puntaje = puntaje; }


void Jugador::aumentarPuntaje()
{
}

void Jugador::notify()
{

}

void Jugador::update()
{
	code = getEmpresaDots()->getCode();
	cout << endl;
	cout << toString();
}


string Jugador::toString()
{
	stringstream s;
	s << "Usuario:\t " << this->getNick() << "\tId:\t" << this->getId() << "\tPuntaje:\t " << this->getPuntaje() << endl;
	return s.str();
}
