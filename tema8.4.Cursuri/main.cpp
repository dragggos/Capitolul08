#include <iostream>
#include "Persoana.h"
#include "Mentor.h"
#include "Cursant.h"

using namespace std;

int main()
{

    Mentor theBest("Dumb","Dude","Spalarea aerului");
    theBest.GetNumeComplet();
    cout<<theBest.Get_prenume();
    theBest.Activitate();
    cout<<" "<<theBest.Get_materie()<<endl;
    Cursant chuck("Chuck", "Noris","Spalarea aerului");
    chuck.GetNumeComplet();
    cout<<endl;
    cout<<chuck.Get_prenume();
    chuck.Activitate();
    cout<<" "<<chuck.Get_materie()<<endl;
    cout<<chuck.Get_prenume()<<" "<<chuck.Absolva()<<endl;
    chuck.Set_notaTeme(6);
    chuck.Set_notaTeste(7);
    chuck.Set_notaProiect(6);
    cout<<chuck.Get_prenume()<<" "<<chuck.Absolva()<<endl;
    theBest.SchimbaMentor("Dumber","Dude");
    theBest.SchimbaMaterie("Numaratul oilor");
    theBest.GetNumeComplet();
    cout<<theBest.Get_prenume();
    theBest.Activitate();
    cout<<" "<<theBest.Get_materie()<<endl;
    Cursant obiWan("Obi Wan","Kenobi","Numaratul oilor");
    obiWan.GetNumeComplet();
    cout<<endl;
    cout<<obiWan.Get_prenume();
    obiWan.Activitate();
    cout<<" "<<obiWan.Get_materie()<<endl;
    cout<<obiWan.Get_prenume()<<" "<<obiWan.Absolva()<<endl;
    obiWan.Set_notaTeme(10);
    obiWan.Set_notaTeste(10);
    obiWan.Set_notaProiect(10);
    cout<<obiWan.Get_prenume()<<" "<<obiWan.Absolva()<<endl;
}
