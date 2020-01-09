#include "Masina.h"

Masina::Masina(Roata x, Roata y, Roata z, Roata w): _roti{x,y,z,w}
{
    //ctor
}

Masina::~Masina()
{
    //dtor
}
short Masina::VerificaRoti()
{
    for (int i=0; i<4; i++)
        if (_roti[i].IsFlat()==1) return i;
    return -1;
}
void Masina::AfiseazaStareRoti(string marca)
{
  int n;
  cout<<marca;
  n=VerificaRoti();
  if (n<0) cout<<" are toate rotile in regula"<<endl;
     else cout<<" are pana la roata "<<++n<<endl;

}
void Masina::UmflaRoti(float presiune)
{
    for (int i=0;i<4;i++)
        _roti[i].UmflaRoata(presiune);
}
void Masina::UmflaRoata(short i, float presiune)
{
    _roti[i].UmflaRoata(presiune);
}
void Masina::SchimbaRoti(Roata x, Roata y, Roata z, Roata w)
{
    _roti[0]=x;
    _roti[1]=y;
    _roti[2]=z;
    _roti[3]=w;
}
void Masina::SchimbaRoata(short i, Roata x)
{
    _roti[i]=x;
}
void Masina::AfiseazaTipCauciucuri(string marca)
{
   cout<<marca<<" are cauciucuri";
   if ((_roti[0].GetTipAnvelopa()==_roti[1].GetTipAnvelopa())&& ((_roti[1].GetTipAnvelopa()==_roti[2].GetTipAnvelopa()))
       &&(_roti[2].GetTipAnvelopa()==_roti[3].GetTipAnvelopa()))
        switch (_roti[0].GetTipAnvelopa())
        {
            case 0: cout<<" de iarna"; break;
            case 1: cout<<" de vara";break;
            case 2: cout<<" universale";break;
        }
        else
            cout<<" mixte";
     cout<<endl;
}
