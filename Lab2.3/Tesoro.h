/*
 * Tesoro.h
 *
 *  Created on: Mayo,2015
 *      Author: Arce
 */

#ifndef TESORO_H
#define TESORO_H

#include <fstream>
#include "Moneda.h"
#include "Collar.h"
#include "Corona.h"
#include "Anillo.h"

using namespace std;

class Tesoro
{
private:
    Moneda m;
    Corona cr;
    Collar cl;
    Anillo a;
public:
    Tesoro();
    int sTesoro();
    virtual ~Tesoro();

};
#endif /* TESORO_H_ */
