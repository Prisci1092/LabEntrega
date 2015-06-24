/*
 * Moneda.h
 *
 *  Created on: Mayo,2015
 *      Author: Arce
 */

#ifndef MONEDA_H
#define MONEDA_H

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Moneda {

private:
	int mCantidad;
	int mValor;
	int mPeso;

public:
	Moneda();
	int getMcantidad();
	int getMvalor();
	int getMpeso();
	virtual ~Moneda();

};

#endif /* MONEDA_H_ */
