#include <iostream>
#include <vector>
using namespace std;


vector<int> llenar_vector (vector<int> vector){
    int cant;
    int cont=0;
    int num;
    cout<<"ingresar 3 numeros"<<endl;
    while (cont<3){
        cin>>num;
        vector.push_back(num);
        cont++;
    }
    return vector;
}
bool triangulo_vector (vector<int> vector1){
   int a=vector1[0];
   int b=vector1[1];
   int c=vector1[2];
   int lado=0;
   bool triangulo=false;
   if (a < b+c){
      lado++;
   }
   if (b < a+c){
      lado++;
   }
   if (c < a+b){
      lado++;
   }
   if (lado==3){
      triangulo=true;
   }
   else{
      triangulo=false;
 }
 return triangulo;
}

int main(){   
 bool triangulo;
 vector<int> vector1;
 vector1=llenar_vector(vector1);
 triangulo= triangulo_vector(vector1);
 if (triangulo) {
   cout<<"Es un triangulo"<<endl;
 }
 else{
   cout<<"No es un triangulo"<<endl;
 }
}