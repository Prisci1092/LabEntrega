#include "Pirata.h"

Pirata::Pirata()
{
    capacidad = rand() % 1001 + 1000 ;
}

int Pirata::saquearRec(int n)
{
  int bulto = 0 ;
  bulto = bulto + n;
   if(bulto >= 1000 && bulto <=2000 ){
     saquearRec(n);
   }
   return bulto;
}

int Pirata::sPirata()
{
     ofstream myfile;
     myfile.open ("Robado-Recursivo.txt");
     myfile << "Capacidad del Pirata:  "<<;
     myfile.close();
     return 0;
}

Pirata::~Pirata()
{

}
