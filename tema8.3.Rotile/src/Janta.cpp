#include "Janta.h"

Janta::Janta()
{
  _nrPrezoane=5;
  _matJanta=aluminiu;
  _diametru=14;
}
Janta::Janta(int a, MatJanta b, int c)
{
  _nrPrezoane=a;
  _matJanta=b;
  _diametru=c;
}
void Janta::SchimbaJanta(MatJanta x, int y)
{
    _matJanta=x;
    _diametru=y;
}
Janta::~Janta()
{
    //dtor
}
