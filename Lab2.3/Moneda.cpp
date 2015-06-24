#include "Moneda.h"

Moneda::Moneda()
{
    srand (time(0));
    this-> mCantidad = rand() % 6 + 5 ;
    this-> mValor = rand() % 100 + 1 ;
    this-> mPeso = rand() % 101 + 100 ;
}

int Moneda::getMcantidad()
{
    return mCantidad;
}

int Moneda::getMvalor()
{
    return mValor;
}

int Moneda::getMpeso()
{
    return mPeso;
}


Moneda::~Moneda()
{
}
