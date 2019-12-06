#ifndef NORMAPROF_H
#define NORMAPROF_H
#include "Clasa.h"

enum Materie{fizica, matematica, chimie, romana, sport};

class NormaProf
{
    public:
        NormaProf();
        virtual ~NormaProf();
        NormaProf(Clasa, Clasa, Clasa, Materie);
        void AfiseazaOre();
        unsigned short CalculeazaTotalOre();

    protected:

    private:
        Materie materie;
        Clasa _clasa1;
        Clasa _clasa2;
        Clasa _clasa3;
};

#endif // NORMAPROF_H
