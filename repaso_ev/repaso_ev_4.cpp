#include <iostream>
using namespace std;

int main(){
 int num;
 int num2;
 int size;
 int posicion=0;
 string palabra;
 string palabra2;
 
 cout << "ingresar palabra:"<<endl;
 cin>>palabra;
 cout << "ingresar un numero:"<<endl;
 cin>>num;
 num2=size-num;
 palabra2=palabra;
 size=palabra.size();
 while (num2<size){
     cout<<palabra[num2];
     num2++;
 }
 while (posicion<num2){
   cout<<palabra[posicion];
   posicion++;
 }
 cout<<palabra<<endl;
}

