#include <iostream>
#include "Clasa.h"
#include "NormaProf.h"

using namespace std;

int main()
{
  Clasa oClasa{11,4,'C'};
  Clasa altaClasa{5,5,'B'};
  Clasa ultimaClasa{9,3,'A'};
  NormaProf ludu{oClasa, altaClasa, ultimaClasa, fizica};
  cout<<"Orarul este:"<<endl;
  ludu.AfiseazaOre();
  cout<<"Total ore: "<<ludu.CalculeazaTotalOre()<<endl;
  NormaProf *mutu=new NormaProf{oClasa, altaClasa, ultimaClasa, fizica};
  cout<<"Orarul este:"<<endl;
  mutu->AfiseazaOre();
  cout<<"Total ore: "<<mutu->CalculeazaTotalOre()<<endl;
}
