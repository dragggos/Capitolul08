#ifndef CLASA_H
#define CLASA_H


class Clasa
{
    public:
        Clasa();
        virtual ~Clasa();
        Clasa(unsigned short,unsigned short, char);
        void AfiseazaOre();
        unsigned short Get_orePeSapt();


    protected:

    private:
        unsigned short _an;
        char _litera;
        unsigned short _orePeSapt;

};

#endif // CLASA_H
