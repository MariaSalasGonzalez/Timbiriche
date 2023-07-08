#include "Usuario.h"

Usuario::Usuario() {}
Usuario::Usuario(string nick, int puntaje) :Observer(getEmpresaDots(), code), nick(nick) {}
Usuario::Usuario(EmpresaDots* object, string code) : Observer(object, code), nick(" "), puntaje(0) {}
Usuario::Usuario(string nick, int puntaje, EmpresaDots* object, string code) : Observer(object, code), nick(nick), puntaje(puntaje) {}
Usuario:: ~Usuario() {}

string Usuario::getNick() { return nick; }
void Usuario::setNick(string nick) {/* this->nick = nick;*/ }
int Usuario::getPuntaje() { return puntaje; }
void Usuario::setPuntaje(int) { /*this->puntaje = puntaje;*/ }
void Usuario::aumentarPuntaje() { puntaje++; }

