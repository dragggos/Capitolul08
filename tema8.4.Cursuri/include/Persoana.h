#ifndef PERSOANA_H
#define PERSOANA_H
#include <iostream>

using namespace std;

class Persoana
{
    public:
        Persoana(string, string, string);
        virtual ~Persoana();
        void Activitate();
        string Get_prenume() {return _prenume;}
        string Get_materie() {return _materie;}

    protected:
        void GetNumeComplet();
        void Set_prenume(string p) {_prenume=p;}
        void Set_nume(string n) {_nume=n;}
        void Set_materie(string m) {_materie=m;}
    private:
        string _prenume, _nume, _materie;
};

#endif // PERSOANA_H
