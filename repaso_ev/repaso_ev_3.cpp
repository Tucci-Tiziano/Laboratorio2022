#include <iostream>
using namespace std;

int main(){
 int num;
 int tam;
 int posicion=0;
 int pos=0;
 int numeros=0;
 string palabra;
 char letra;
 cout << "ingresar palabra:"<<endl;
 cin>>palabra;
 cout << "ingresar letra:"<<endl;
 cin>>letra;
 tam=palabra.size();
 while (posicion<tam){
     if (palabra[posicion]==letra){
         numeros=posicion;
         cout<<numeros<<endl;
     }
     pos++;
     posicion++;
 }
}
