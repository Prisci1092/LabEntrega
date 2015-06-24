#include "Collar.h"

Collar::Collar()
{
    srand (time(0));
    this-> coCantidad = rand() % 4 + 2;
    this-> coValor = rand() % 2001 + 2000;
    this-> coPeso = rand() % 501 + 500;
}

int Collar::getCoCantidad()
{
    return coCantidad;
}

int Collar::getCoValor()
{
    return coValor;
}

int Collar::getCoPeso()
{
    return coPeso;
}


Collar::~Collar()
{

}
