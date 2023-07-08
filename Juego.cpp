#include "Juego.h"

Juego::Juego()
{
	c1 = new Campo6();
	c2 = new Campo9();
	c3 = new Campo15();
	tablero = new Tablero();
}

void Juego::iniciar()
{

	bool finalizar = false;
	int ops;
	bool finalizarJ = false;
	string option;
	string nick1;
	string nick2;


	while (!finalizar) {
		finalizar = false;
		print("\n\n\n\n");
		color(3);
		print("\t\t");
		print("\t         _ __ ___   ___ _ __  _   _ \n ");
		print(" \t\t\t\t| '_ ` _ \\ / _ \\ '_ \\| | | | \n");
		print(" \t\t\t\t| | | | | |  __/ | | | |_| |    \n");
		print(" \t\t\t\t|_| |_| |_|\\___|_| |_|\\__,_|\n");
		print(" \t\t\t\t\t  TIMBIRICHE\n\n");
		cout << "\n\n";
		color(7);
		print("\n\n");
		color(8);
		print("\t\t1) Nuevo Juego. \n");
		color(2);
		print("\t\t2) Cargar Partida. \n");
		color(5);
		print("\t\t0) Salir del juego. \n\n");
		color(9);
		print("\t\tDigite una opcion -------->\t");
		ops = readInt();
		color(3);
		print("\n");

		switch (ops)
		{

		case 1: // Nuevo Juego
		{
			clean();
			//finalizarJ = false;
			seleccionaTablero();
			wait();
			clean();
			break;
		}
		case 2: {
			clean();
			wait();
			color(4);
			print("  Cargando Partida ---> ");
			wait();

			wait();
			clean();
			break;
		}
		case 0: // Salir
		{
			clean();
			color(4);
			print("\n\n\n\t\tGracias por jugar!.");
			color(7);
			wait();
			clean();
			finalizar = true;
			break;
		}
		default:
		{
			clean();
			print("\n\n\n\t\tError, la opcion no es valida, intente de nuevo!");
			wait();
			clean();
			break;
		}

		}
	}
}

	
void Juego::setJugadores()
{
	//Informacion de Jugadores
	string nombre;

	print("\n\t\tJugador 1 - Digite su nombre: ");
	nombre = readString();
	j1 = new Jugador(nombre,codigo);
	print("\n\t\tJugador 2 - Digite su nombre: ");
	nombre = readString();
	j2 = new Jugador(nombre,codigo);
	clean();
}

void Juego::turno(Jugador* j_actual)
{
	string letra;
	int f, c, ops;
	int can = 0;
	string resp = "s";
	string resp2 = "s";
	int pos;

	print("\n\nTurno de: \n");
	print(j_actual->toString());
	print("Escriba la posición en la que quiere dibujar su línea");
	cin >> pos;




}

int Juego::getTurno() { return turnos; }

void Juego::setTurno(int turnos) { this->turnos = turnos;}

void Juego::seleccionaTablero()
{
	bool end = false;
	while (!end){
		end = false;

		    color(5);
			print("\n");
			print("\t      *Creador de campos*\n");
			color(5);
			print("\t *Seleccione su campo favorito*\n");
			color(6);
			print(" \t   xxxxxxxxxxxxxxxxxxxxxxxxxx\n");
			print(" \t   x [1]. Seis Puntos.      x\n");
			print(" \t   x [2]. Nueve Puntos.     x\n");
			print(" \t   x [3]. Quince Puntos.    x\n");
			print(" \t   x [4]. Vizualizar campo. x\n");
			print(" \t   x [5]. Comenzar a jugar. x\n");
			print(" \t   x [6]. Borrar Campo .    x\n");
			print(" \t   x [0]. Salir.            x\n");
			print(" \t   xxxxxxxxxxxxxxxxxxxxxxxxxx\n");
			print(" \t\tDigite una opcion -------->\t");
			op = readInt();
			color(3);
			print("\n");

			switch (op) {

			case 1:
			{
				color(5);
				print("Has creado un campo de 6 puntos.");
				tablero->getCampos()->agregar(c1);
				wait();
				clean();
				break;
			}

			case 2:
			{
				print("Has creado un campo de 9 puntos.");
				tablero->getCampos()->agregar(c2);
				wait();
				clean();
				break;
			}
			case 3:
			{
				print("Has creado un campo de 15 puntos");
				tablero->getCampos()->agregar(c3);
				wait();
				clean();
				break;
			}

			case 4: 
			{
				print("Este es el campo que has creado, ya puedes comenzar a jugar");
				//print("\n\n");
				wait();
				print("\n");
				tablero->crearMatriz();
				tablero->llenarMatriz();
				print(tablero->toString());
				wait();
				clean();

			break;

			}

			case 5:
			{

				print("\t Bienvenido al juego...");
				print("\t Cargando partida...");
				wait();
				print("\t>>>>>>>>>>>>>>>>>>>>>>>");
				wait();
				print("\nPor favor selecciona tu modo de juego...");
				print("\n");
				opcionesJuego();
				clean();
				print("\n");
				

				wait();
				clean();
				break;

			}


			case 0:
			{
				clean();
				color(4);
				print("\n\n\n\t\tGracias por jugar!.");
				color(7);
				wait();
				clean();
				end = true;
				break;

			}


			default:
			{

				print("Opción no válida");
				clean();
				break;
			}

			}
	}
		
}


//Archivos

void Juego::escribirPuntajes() {
	ofstream salida("../Puntajes.txt");

	if (salida.fail()) {
		print("No se pudo abrir el archivo.");
	}

	salida << endl;
	salida << "Marcador Final: " << endl;
	salida << endl;
	salida << "El puntaje del jugador 1 es: " << j1->getPuntaje() << endl;
	salida << "El puntaje del jugador 2 es: " << j2->getPuntaje() << endl;
	salida.close();
}

void Juego::impPuntajes() {
	string s;
	ifstream entrada("../Puntajes.txt");
	entrada.seekg(0);

	if (entrada.is_open())
	{
		while (getline(entrada, s, '\n'))
		{
			print(s + '\n');
		}
	}


	entrada.close();
}

void Juego::opcionesJuego()
{
	bool end = false;
	while (!end) {
		end = false;

		clean();

		color(5);
		print("\n");
		print("\t      *Modos de Juego Disponibles*\n");
		color(5);
		print("\t      *Seleccione su modo favorito*\n");
		color(6);
		print(" \t   xxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
		print(" \t   x [1]. Jugador vs. Jugador. x\n");
		print(" \t   x [2]. Jugador vs. Máquina. x\n");
		print(" \t   x [3]. Neh! Ninguno...      x\n");
		print(" \t   xxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
		print(" \t\tDigite una opcion -------->\t");
		op = readInt();
		color(3);
		print("\n");

		switch (op) {

		case 1:
		{
			color(5);
			print("Has seleccionado Jugador vs Jugador.");
			print("\n");
			tablero->crearMatriz();
			tablero->llenarMatriz();
			print(tablero->toString());
			wait();
			clean();
			break;
		}

		case 2:
		{
			print("Has seleccionado Jugador vs. Máquina.");
			wait();
			print("\n");
			tablero->crearMatriz();
			tablero->llenarMatriz();
			print(tablero->toString());
			clean();
			break;
		}
		case 3:
		{
			print("Has Salido del juego...");
			wait();
			clean();
			color(7);
			wait();
			clean();
			end = true;
			break;
		}

		default:
		{
			print("Opción no válida");
			clean();
			break;
		}

		}
	}

}

void Juego::dibujarLV(int pos_x, int pos_y)
{

	


}

void Juego::dibujarLH(int pos_x, int pos_y)
{




}

