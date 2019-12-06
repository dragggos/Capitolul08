#include "Cilindru.h"
#include "Cerc.h"
#define PI 3.14

Cilindru::Cilindru()
{
    //ctor
}
Cilindru::Cilindru(double n, double m)
{
    _baza.Set_raza(n);
    _inaltime=m;
}

double Cilindru::Volum()
{
    return(_baza.Arie()*_inaltime);
}
double Cilindru::Arie()
{
    return 2*_baza.Arie()+2*PI*_baza.Get_raza()*_inaltime;
}

Cilindru::~Cilindru()
{
    //dtor
}
