#include "EstrategiaCentral.h"


EstrategiaCentral::EstrategiaCentral(int fila, int columna) :fila(fila), columna(columna)
{
}

EstrategiaCentral::~EstrategiaCentral()
{

}

int EstrategiaCentral::getFila()
{
    return fila;
}

int EstrategiaCentral::getColumna()
{
    return columna;
}



void EstrategiaCentral::setFila(int fila)
{
    this->fila = fila;
}

void EstrategiaCentral::setColumna(int columna)
{
    this->columna = columna;
}



//bool EstrategiaCentral::Mover()
//{
//    return true;
//}

bool EstrategiaCentral::displayStrategy()
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

string EstrategiaCentral::toString()
{
    stringstream a;
    a << "Estrategia Central\t" << fila << "\t y \t" << columna << "\n";
    return a.str();
}

EstrategiaCentral& EstrategiaCentral::operator=(EstrategiaCentral& alea)
{
    this->fila = alea.fila;
    this->columna = alea.columna;
    return *this;
}

ostream& operator<<(ostream& out, EstrategiaCentral& object)
{
    out << object.toString();
    return out;
}
