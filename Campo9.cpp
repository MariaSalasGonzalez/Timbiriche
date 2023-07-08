#include "Campo9.h"
#include <sstream>

Campo9::Campo9()
	:abstractCampo(3, 3)
{}


string Campo9::toString()
{
	stringstream a;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (matriz[i][j] == false)
				a << " - ";
		}
		a << endl;
	}
	return a.str();
}

