#include <iostream>
#include "funcs.h"

using namespace std;

int main(){
  int esc;
  float a,b;
  cout<<endl<<"Voce deseja fazer uma\n[1]-Soma\n[2]-Subtração\n[3]-Divisão\n[4]-Multiplicação\n>";
  cin>>esc;
  cout<<endl<<"Insira o primeiro numero: ";
  cin>>a;
  cout<<endl<<"Insira o segundo numero: ";
  cin>>b;

  switch(esc){
    case 1:
      soma(a,b);
      break;
     case 2:
      subt(a,b);
      break;
     case 3:
      divi(a,b);
      break;
     case 4:
      mult(a,b);
      break;
     default:
      break;
  }

}
