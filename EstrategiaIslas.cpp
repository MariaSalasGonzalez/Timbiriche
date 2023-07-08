#include "EstrategiaIslas.h"


EstrategiaIslas::EstrategiaIslas(int fila, int columna) :fila(fila), columna(columna)
{
}

EstrategiaIslas::~EstrategiaIslas()
{

}

int EstrategiaIslas::getFila()
{
    return fila;
}

int EstrategiaIslas::getColumna()
{
    return columna;
}



void EstrategiaIslas::setFila(int fila)
{
    this->fila = fila;
}

void EstrategiaIslas::setColumna(int columna)
{
    this->columna = columna;
}



//bool EstrategiaIslas::Mover()
//{
//    return true;
//}

bool EstrategiaIslas::displayStrategy()
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

string EstrategiaIslas::toString()
{
    stringstream a;
    a << "Estrategia Islas\t" << fila << "\t y \t" << columna << "\n";
    return a.str();
}

EstrategiaIslas& EstrategiaIslas::operator=(EstrategiaIslas& alea)
{
    this->fila = alea.fila;
    this->columna = alea.columna;
    return *this;
}

ostream& operator<<(ostream& out, EstrategiaIslas& object)
{
    out << object.toString();
    return out;
}
