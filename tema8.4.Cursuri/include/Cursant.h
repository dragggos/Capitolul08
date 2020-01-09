#ifndef CURSANT_H
#define CURSANT_H

#include <Persoana.h>


class Cursant : public Persoana
{
    public:
        Cursant(string, string, string);
        virtual ~Cursant();
        void GetNumeComplet();
        void Activitate();
        void Set_notaTeme(double p) {_notaTeme=p;}
        void Set_notaTeste(double n) {_notaTeste=n;}
        void Set_notaProiect(double m) {_notaProiect=m;}
        string Absolva();


    protected:

    private:
        double _notaTeme,_notaTeste,_notaProiect;
        bool HasGrades();
        bool IsAverageOk();

};

#endif // CURSANT_H
