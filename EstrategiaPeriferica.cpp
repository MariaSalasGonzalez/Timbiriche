#include "EstrategiaPeriferica.h"


EstrategiaPeriferica::EstrategiaPeriferica(int fila, int columna) :fila(fila), columna(columna)
{
}

EstrategiaPeriferica::~EstrategiaPeriferica()
{

}

int EstrategiaPeriferica::getFila()
{
    return fila;
}

int EstrategiaPeriferica::getColumna()
{
    return columna;
}



void EstrategiaPeriferica::setFila(int fila)
{
    this->fila = fila;
}

void EstrategiaPeriferica::setColumna(int columna)
{
    this->columna = columna;
}



//bool EstrategiaPeriferica::Mover()
//{
//    return true;
//}

bool EstrategiaPeriferica::displayStrategy()
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

string EstrategiaPeriferica::toString()
{
    stringstream a;
    a << "Estrategia Periferica\t" << fila << "\t y \t" << columna << "\n";
    return a.str();
}

EstrategiaPeriferica& EstrategiaPeriferica::operator=(EstrategiaPeriferica& alea)
{
    this->fila = alea.fila;
    this->columna = alea.columna;
    return *this;
}

ostream& operator<<(ostream& out, EstrategiaPeriferica& object)
{
    out << object.toString();
    return out;
}