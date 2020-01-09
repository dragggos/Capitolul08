#include "Cursant.h"

Cursant::Cursant(string a, string b, string c):Persoana(a,b,c), _notaTeme{0}, _notaTeste{0}, _notaProiect{0}
{
    //ctor
}
void Cursant::GetNumeComplet()
{
    cout<<"Cursant: ";
    Persoana::GetNumeComplet();
}
void Cursant::Activitate()
{
    cout<<" studiaza ";
    Persoana::Activitate();
}
string Cursant::Absolva()
{
  if (HasGrades()==false)  return "nu are note suficiente";
    else if (IsAverageOk()==false) return "nu absolva";
       else return "absolva";

}
bool Cursant::HasGrades()
{
    if ((_notaTeme>0)&&(_notaTeste>0)&&(_notaProiect>0)) return true;
      else return false;
}
bool Cursant::IsAverageOk()
{
    if ((_notaTeme+_notaTeste+_notaProiect)/3>=7) return true;
      else return false;
}
Cursant::~Cursant()
{
    //dtor
}
