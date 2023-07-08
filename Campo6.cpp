#include "Campo6.h"
#include <sstream>

Campo6::Campo6()
	:abstractCampo(2, 3)
{}


string Campo6::toString()
{
	stringstream a;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (matriz[i][j] != NULL)
				a << " x ";
			if (matriz[i][j] == false)
				a << " - ";
		}
		a << endl;
	}
	return a.str();
}

