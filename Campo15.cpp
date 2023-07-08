#include "Campo15.h"
#include <sstream>

Campo15::Campo15()
	:abstractCampo(5, 3)
{}

string Campo15::toString()
{
	stringstream a;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			if (matriz[i][j] == false)
				a << " - ";
		}
		a << endl;
	}
	return a.str();
}

