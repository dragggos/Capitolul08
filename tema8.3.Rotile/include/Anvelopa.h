#ifndef ANVELOPA_H
#define ANVELOPA_H
#include <iostream>

using namespace std;

enum TipAnvelopa {iarna,vara,universal};

class Anvelopa
{
    public:
        Anvelopa();
        Anvelopa(string, float, TipAnvelopa);
        virtual ~Anvelopa();
        float Get_presiune() {return _presiune;}
        TipAnvelopa Get_tipAnvelopa() {return _tipAnvelopa;}
        void UmflaAnvelopa(float n);

    protected:

    private:
        string _brand;
        float _presiune;
        TipAnvelopa _tipAnvelopa;
};

#endif // ANVELOPA_H
