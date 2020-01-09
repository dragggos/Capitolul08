#ifndef MASINA_H
#define MASINA_H
#include "Roata.h"
#include <iostream>

using namespace std;


class Masina
{
    public:
        Masina(Roata, Roata, Roata, Roata);
        virtual ~Masina();
        void AfiseazaStareRoti(string);
        void UmflaRoti(float);
        void UmflaRoata(short, float);
        void SchimbaRoti(Roata, Roata, Roata, Roata);
        void SchimbaRoata(short, Roata);
        void AfiseazaTipCauciucuri(string);
    protected:

    private:
        Roata _roti[4];
        short VerificaRoti();
};

#endif // MASINA_H
