#include "Utiles.h"

//---Imprime cadena de caracteres----------

void print(string cadena) {
	cout << cadena;
}

//-------------Lee strings------------------

string readString() {
	string x;
	getline(cin, x);
	return x;
}

//---------------Lee ints-------------------

int readInt() {
	int n;
	bool continuar = true;
	while (true) {
		if (cin >> n) {
			cin.clear();
			cin.ignore(1024, '\n');
			return n;
		}
		else {
			cerr << "\n\t\tIncorrecto, por favor digite un numero >> ";
			cin.clear();
			cin.ignore(1024, '\n');
			wait();
		}
	}

}

//-------------Limpia la pantalla--------------

void clean() {
	system("cls");
}

//--------------------Pausa---------------------

void wait() {
	cin.get();
}
//----------------------------------------------
void pause() {
	system("pause");
}
//----------Convierte de string a int-----------

int convertirInt(string s) {
	stringstream r(s);
	int v;
	r >> v;
	return v;
}

//----------Convierte de int a string -----------

string convertirIntString(int a) {
	string s = std::to_string(a);
	return s;
}
//-----------------Random------------------------
int random() {
	int random = rand();
	return random;
}

//---------------Cambiar de color-----------------
void color(int n)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
}
