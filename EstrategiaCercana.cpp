#include "EstrategiaCercana.h"



EstrategiaCercana::EstrategiaCercana(int fila, int columna) :fila(fila), columna(columna)
{
}

EstrategiaCercana::~EstrategiaCercana()
{

}

int EstrategiaCercana::getFila()
{
    return fila;
}

int EstrategiaCercana::getColumna()
{
    return columna;
}



void EstrategiaCercana::setFila(int fila)
{
    this->fila = fila;
}

void EstrategiaCercana::setColumna(int columna)
{
    this->columna = columna;
}



//bool EstrategiaCercana::Mover()
//{
//    return true;
//}

bool EstrategiaCercana::displayStrategy()
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

string EstrategiaCercana::toString()
{
    stringstream a;
    a << "Estrategia Cercana\t" << fila << "\t y \t" << columna << "\n";
    return a.str();
}

EstrategiaCercana& EstrategiaCercana::operator=(EstrategiaCercana& alea)
{
    this->fila = alea.fila;
    this->columna = alea.columna;
    return *this;
}

ostream& operator<<(ostream& out, EstrategiaCercana& object)
{
    out << object.toString();
    return out;
}
