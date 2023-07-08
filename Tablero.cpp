#include "Tablero.h"

Tablero::Tablero()
{
	vCampos = new Vector<abstractCampo>();
}



void Tablero::calcularFilasColumnas()
{
	for (int i = 0; i < vCampos->getCantidad();  i++) {
		fila += vCampos->getVecM(i)->getFila();
		columna += vCampos->getVecM(i)->getColumna();
	}
}

void Tablero::crearMatriz()
{
	this->calcularFilasColumnas();
	matriz = new bool* [fila];
	for (int i = 0; i < fila; i++) {
		matriz[i] = new bool[columna];
	}


}

void Tablero::llenarMatriz()
{
	for (int k = 0; k < vCampos->getCantidad(); k++) {
		for (int j = separador; j < vCampos->getVecM(k)->getColumna() + separador; j++) {
			for (int i = 0; i < vCampos->getVecM(k)->getFila(); i++) {
				matriz[i][j] = vCampos->getVecM(k)->getData(i, j - separador);
			}
		}
		separador += vCampos->getVecM(k)->getColumna();
	}
}

string Tablero::toString()
{
    stringstream x;
    //for (int m = 0; m < columna; m++)
    //{
    //    if (m == 0) {
    //        x << " " << m + 1;
    //    }
    //    else x << "     " << m + 1;
    //}
    x << "\n\n";
    //matriz[0][0] = 0;
    //matriz[0][1] = 1;
    //matriz[0][2] = 1;
    //matriz[1][2] = 1;
    //matriz[1][1] = 1;

    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {

            if (matriz[i][j] != NULL && matriz[i][j] != true)
            {
                x << "   ";
            }
            else
            {
                color(3);
                x << " o ";
            }
            if (matriz[i][j] == true && matriz[i][j + 1] == true)
                x << " - ";
            else
                x << "   ";
        }
        x << endl;

        for (int j = 0; j < columna; j++) {
            x << "   ";
            if (matriz[i][j] == true && matriz[i + 1][j] == true)
                x << " | ";
        }
        x << "\n";
       
       
    }
    return x.str();
}