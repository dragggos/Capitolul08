#include "Mentor.h"



Mentor::Mentor(string a, string b, string c) : Persoana(a,b,c)
{
   //ctor
}
void Mentor::GetNumeComplet()
{
    cout<<"Mentor: ";
    Persoana::GetNumeComplet();
    cout<<endl;
}
void Mentor::Activitate()
{
    cout<<" preda ";
    Persoana::Activitate();

}
void Mentor::SchimbaMaterie(string a)
{
    Persoana::Set_materie(a);
}
void Mentor::SchimbaMentor(string a,string b)
{
    Persoana::Set_prenume(a);
    Persoana::Set_nume(b);
}
Mentor::~Mentor()
{
    //dtor
}
