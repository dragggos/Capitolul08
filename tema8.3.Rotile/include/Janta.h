#ifndef JANTA_H
#define JANTA_H

enum MatJanta {tabla, aluminiu};

class Janta
{
    public:
        Janta();
        Janta(int, MatJanta, int);
        virtual ~Janta();
        void SchimbaJanta(MatJanta x, int y);

    protected:

    private:
        int _nrPrezoane;
        MatJanta _matJanta;
        int _diametru;
};

#endif // JANTA_H
