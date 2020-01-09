#ifndef ROATA_H
#define ROATA_H
#include "Janta.h"
#include "Anvelopa.h"

class Roata
{
    public:
        Roata(Anvelopa, Janta);
        virtual ~Roata();
        bool IsFlat();
        void SchimbaRoata(Anvelopa x, Janta y);
        void UmflaRoata(float presiune);
        TipAnvelopa GetTipAnvelopa() {return _anvelopa.Get_tipAnvelopa();}
    protected:

    private:
        Anvelopa _anvelopa;
        Janta _janta;
};

#endif // ROATA_H
