/*
 * Moneda.h
 *
 *  Created on: Mayo,2015
 *      Author: Arce
 */

#ifndef COLLAR_H
#define COLLAR_H

#include <iostream>
#include <stdlib.h>
#include <time.h>

class Collar {

private:
	int coCantidad;
	int coValor;
	int coPeso;

public:
	Collar();
	int getCoCantidad();
	int getCoValor();
	int getCoPeso();
	virtual ~Collar();

};
#endif /* COLLAR_H_ */
