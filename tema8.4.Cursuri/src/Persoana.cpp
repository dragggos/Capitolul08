#include "Persoana.h"

Persoana::Persoana(string a, string b, string c)
{
    _prenume=a;
    _nume=b;
    _materie=c;
}
void Persoana::Activitate()
{
    cout<<"cursul";
}
void Persoana::GetNumeComplet()
{
    cout<<_prenume<<" "<<_nume;
}
Persoana::~Persoana()
{
    //dtor
}
