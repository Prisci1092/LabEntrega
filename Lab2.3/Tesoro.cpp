#include "Tesoro.h"

Tesoro::Tesoro()
{
    m = Moneda();
    cr = Corona();
    cl = Collar();
    a = Anillo();
}

int Tesoro::sTesoro()
{
     ofstream myfile;
     myfile.open ("Tesoro.txt");
     myfile << "Tesoro: \n\tMoneda: \tCantidad: "<<m.getMcantidad()<<"\tValor: "<<m.getMvalor()<<"\tPeso: "<<m.getMpeso()
     <<"\n\tCorona: \tCantidad: "<<cr.getCrcantidad()<<"\tValor: "<<cr.getCrvalor()<<"\tPeso: "<<cr.getCrpeso()
     <<"\n\tCollar: \tCantidad: "<<cl.getCoCantidad()<<"\tValor: "<<cl.getCoValor()<<"\tPeso: "<<cl.getCoPeso()
     <<"\n\tAnillo: \tCantidad: "<<a.getAcantidad()<<"\tValor: "<<a.getAvalor()<<"\tPeso: "<<a.getApeso();
     myfile.close();
     return 0;
}


Tesoro::~Tesoro()
{

}
