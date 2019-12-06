#include "Cerc.h"
#include <math.h>
#define PI 3.14

Cerc::Cerc()
{
    //ctor
}
Cerc::Cerc(double n)
{
    _raza=n;
}

Cerc::~Cerc()
{
    //dtor
}
double Cerc::Arie()
{
    return (PI*pow(_raza,2));
}
double Cerc::Get_raza()
{
    return _raza;
}
void Cerc::Set_raza(double x)
{
    _raza=x;
}
