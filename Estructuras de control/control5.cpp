#include <iostream>

using namespace std;

int main(){
  int numero=1;
  int numerot=0;
  cout << "ingresar numero:"<<endl;
  while (numero!=0){
    cin>>numero;
    numerot=numerot+numero;
  }
  cout << "Tu resultado es:";
  cout << numerot<<endl;
}