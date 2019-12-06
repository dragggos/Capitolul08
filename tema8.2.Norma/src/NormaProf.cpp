#include "NormaProf.h"
#include "Clasa.h"
#include <iostream>
using namespace std;

NormaProf::NormaProf()
{
    //ctor
}
NormaProf::NormaProf(Clasa a, Clasa b, Clasa c, Materie d)
{
    _clasa1=a;
    _clasa2=b;
    _clasa3=c;
    materie=d;
}
void NormaProf::AfiseazaOre()
{
    _clasa1.AfiseazaOre();
    _clasa2.AfiseazaOre();
    _clasa3.AfiseazaOre();
}
unsigned short NormaProf::CalculeazaTotalOre()
{
 return (_clasa1.Get_orePeSapt()+_clasa2.Get_orePeSapt()+_clasa3.Get_orePeSapt());
}
NormaProf::~NormaProf()
{
    //dtor
}
