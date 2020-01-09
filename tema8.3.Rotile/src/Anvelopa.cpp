#include "Anvelopa.h"

Anvelopa::Anvelopa()
{
    _brand="Michelin";
    _presiune=2.2;
    _tipAnvelopa=vara;
}
Anvelopa::Anvelopa(string x, float y, TipAnvelopa z)
{
    _brand=x;
    _presiune=y;
    _tipAnvelopa=z;
}
void Anvelopa::UmflaAnvelopa(float n)
{
    if (n>3) _presiune=3;
      else _presiune=n;
}

Anvelopa::~Anvelopa()
{
    //dtor
}
