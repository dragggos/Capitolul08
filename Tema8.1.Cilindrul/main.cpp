#include <iostream>
#include "Cilindru.h"
#include "Cerc.h"

using namespace std;

int main()
{
  Cilindru cilly(2,5);
  cout<<"Volumul lui cilly este: "<<cilly.Volum()<<endl;
  cout<<"Aria lui cilly este: "<<cilly.Arie()<<endl;
  Cilindru *hipster=new Cilindru[2]{Cilindru{2,5}, Cilindru{5,2}};
  cout<<"Volumul primul hipster este: "<<hipster[0].Volum()<<endl;
  cout<<"Aria primul hipster este: "<<hipster[0].Arie()<<endl;
  cout<<"Volumul celui de-al doilea hipster este: "<<hipster[1].Volum()<<endl;
  cout<<"Aria celui de-al doilea hipster este: "<<hipster[1].Arie()<<endl;
}
