#include "Roata.h"

Roata::Roata(Anvelopa n, Janta m): _anvelopa{n/*"Dunlop",2.3,iarna*/}, _janta{m/*5, tabla, 10*/}
{

}
bool Roata::IsFlat()
{
    if (_anvelopa.Get_presiune()<1) return true;
      else return false;
}
void Roata::SchimbaRoata(Anvelopa x, Janta y)
{
    _anvelopa=x;
    _janta=y;
}
void Roata::UmflaRoata(float presiune)
{
    _anvelopa.UmflaAnvelopa(presiune);
}
Roata::~Roata()
{
    //dtor
}
