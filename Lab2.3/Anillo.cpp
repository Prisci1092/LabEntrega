#include "Anillo.h"

Anillo::Anillo()
{
    srand (time(0));
    this-> aCantidad = rand() % 3 + 5  ;
    this-> aValor = rand() % 101 + 100 ;
    this-> aPeso = rand() % 101 + 200 ;
}

int Anillo::getAcantidad()
{
    return aCantidad;
}

int Anillo::getAvalor()
{
    return aValor;
}

int Anillo::getApeso()
{
    return aPeso;
}


Anillo::~Anillo()
{

}
