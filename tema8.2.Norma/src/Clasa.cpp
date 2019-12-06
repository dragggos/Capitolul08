#include "Clasa.h"
#include <iostream>
using namespace std;

Clasa::Clasa()
{
    //ctor
}
Clasa::Clasa(unsigned short m, unsigned short p, char n)
{
    _an=m;
    _orePeSapt=p;
    _litera=n;
}
void Clasa::AfiseazaOre()
{
    cout<<"Clasa a "<<_an<<_litera<<" : "<<_orePeSapt<<" ore/sapt"<<endl;
}
unsigned short Clasa::Get_orePeSapt()
{
    return _orePeSapt;
}

Clasa::~Clasa()
{
    //dtor
}
