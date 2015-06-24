/*
 * Corona
 *  Created on: Mayo,2015
 *      Author: Arce
 */

#ifndef CORONA_H
#define CORONA_H

#include <iostream>
#include <stdlib.h>
#include <time.h>

class Corona {

private:
	int crCantidad;
	int crValor;
	int crPeso;

public:
	Corona();
	int getCrcantidad();
	int getCrvalor();
	int getCrpeso();
	virtual ~Corona();

};

#endif /* MONEDA_H_ */
