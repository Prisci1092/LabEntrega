#include "Moneda.h"
#include "Collar.h"
#include "Corona.h"
#include "Anillo.h"
#include "Tesoro.h"
#include "Pirata.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    Tesoro t = Tesoro();
    t.sTesoro();
    Pirata p = Pirata();
    p.sPirata();
    return 0;

}

