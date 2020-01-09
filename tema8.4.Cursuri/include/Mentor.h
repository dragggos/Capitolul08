#ifndef MENTOR_H
#define MENTOR_H

#include <Persoana.h>


class Mentor : public Persoana
{
    public:
        Mentor(string, string, string);
        virtual ~Mentor();
        void GetNumeComplet();
        void Activitate();
        void SchimbaMaterie(string);
        void SchimbaMentor(string,string);
    protected:

    private:
};

#endif // MENTOR_H
