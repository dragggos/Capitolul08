#ifndef CERC_H
#define CERC_H


class Cerc
{
    public:
        Cerc();
        virtual ~Cerc();
        Cerc(double);
        double Arie();
        double Get_raza();
        //void Set_raza(double x);

    protected:

    private:
       double _raza;
};

#endif // CERC_H
