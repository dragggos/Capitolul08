#ifndef CILINDRU_H
#define CILINDRU_H
#include "Cerc.h"


class Cilindru
{
    public:
        Cilindru();
        virtual ~Cilindru();
        //Cerc _baza;
        Cilindru(double,double);
        double Volum();
        double Arie();

    protected:

    private:
       double _inaltime;
       Cerc _baza;
};

#endif // CILINDRU_H
