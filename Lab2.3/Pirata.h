/*
 * Pirata.h
 *
 *  Created on: Mayo,2015
 *      Author: Arce
 */

#ifndef PIRATA_H
#define PIRATA_H

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <fstream>
#include <Tesoro.h>

using namespace std;

class Pirata
{
    private:

        int capacidad;//capacidad en gramos

    public:
        Pirata();
        int saquearRec(int n);
        int sPirata();
        virtual ~Pirata();


};

#endif // PIRATA_H
