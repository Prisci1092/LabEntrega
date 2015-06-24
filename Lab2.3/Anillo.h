/*
 * Moneda.h
 *
 *  Created on: Mayo,2015
 *      Author: Arce
 */


#ifndef ANILLO_H
#define ANILLO_H

#include <iostream>
#include <stdlib.h>
#include <time.h>

class Anillo
{

private:

    int aCantidad;
    int aValor;
    int aPeso;

public:

    Anillo();
    int getAcantidad();
    int getAvalor();
    int getApeso();
    virtual ~Anillo();

};
#endif /* ANILLO_H_ */

