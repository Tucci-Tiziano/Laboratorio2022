#include <iostream>
using namespace std;

int main(){
 int num;
 int tam;
 int posicion=0;
 int pos;
 string numeros;
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
     }
     posicion++;
 }
 cout>>numeros[0]<<endl;
}