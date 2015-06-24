#include "Corona.h"

Corona::Corona()
{
    srand (time(0));
    this-> crCantidad = rand() % 5 + 1 ;
    this-> crValor = rand() % 1501 + 500 ;
    this-> crPeso = rand() % 1001 + 2000 ;
}

int Corona::getCrcantidad()
{
    return crCantidad;
}

int Corona::getCrvalor()
{
    return crValor;
}

int Corona::getCrpeso()
{
    return crPeso;
}


Corona::~Corona()
{

}
