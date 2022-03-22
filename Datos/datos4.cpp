#include <iostream>

using namespace std;


int main(){
 
 float num;

 cout<<"ingrese un numero\n";
 cin>>num;

 bool cero = (num>0);
 bool cuatro = (num<4);
 bool seis = (num>6);
 bool diez = (num<10);

 if (cero && cuatro){
    cout<<"esta entre 0 y 4\n";
 }
 else if (seis && diez){
     cout<<"esta entre 6 y 10\n";
 }
 else {
     cout<<"no esta entre ninguno de los numeros\n";
 }
}