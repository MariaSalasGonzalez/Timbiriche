#include "EstrategiaAleatoria.h"


EstrategiaAleatoria::EstrategiaAleatoria(int fila, int columna) :fila(fila), columna(columna)
{
}

EstrategiaAleatoria::~EstrategiaAleatoria()
{

}

int EstrategiaAleatoria::getFila()
{
    return fila;
}

int EstrategiaAleatoria::getColumna()
{
    return columna;
}



void EstrategiaAleatoria::setFila(int fila)
{
    this->fila = fila;
}

void EstrategiaAleatoria::setColumna(int columna)
{
    this->columna = columna;
}



//bool EstrategiaAleatoria::Mover()
//{
//    return true;
//}

bool EstrategiaAleatoria::displayStrategy()
{
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            ////if (matriz[i][j] != NULL-> matriz[i][j]!=NULL) {
            ////    cout << "Valid point start." << "\n";
            ////    //no se si aqui se llama al de dibujar del campo de juego
            ////}
            ////else {
            ////    cout << "Invalid point end." << "\n";
            ////}
            //matriz[i][j]->matriz[i][j] != NULL;
            //return true;
            //el dibujar de la linea!
        }
    }
    return false;
}

string EstrategiaAleatoria::toString()
{
    stringstream a;
    a << "Aleatory Strategy Selected\t" << fila << "\t y \t" << columna << "\n";
    return a.str();
}

EstrategiaAleatoria& EstrategiaAleatoria::operator=(EstrategiaAleatoria& alea)
{
    this->fila = alea.fila;
    this->columna = alea.columna;
    return *this;
}

ostream& operator<<(ostream& out, EstrategiaAleatoria& object)
{
    out << object.toString();
    return out;
}
