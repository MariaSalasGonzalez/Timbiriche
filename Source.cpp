#include<iostream>
#include"Tablero.h"
#include "abstractCampo.h"
#include "Campo6.h"
#include "Campo9.h"
#include "Campo15.h"
#include "Computadora.h"
#include "Juego.h"
#include "Jugador.h"
#include "Tablero.h"
#include "Usuario.h"
#include "Utiles.h"
#include "Juego.h"

using namespace std;



int main() {

	setlocale(LC_ALL, "");
	
	//abstractCampo *c1 = new Campo6();
	//abstractCampo* c2 = new Campo9();
	//abstractCampo* c3 = new Campo15();

	//Tablero* t = new Tablero();

	//t->getCampos()->agregar(c1);
	//t->getCampos()->agregar(c2);
	//t->getCampos()->agregar(c3);
	////t->getCampos()->agregar(c1);
	//t->crearMatriz();
	//t->llenarMatriz();

	//cout << t->toString(); 

	Juego* j1 = new Juego();
	j1->iniciar();

	cin.get();
	return 0;
}