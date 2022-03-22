#include <iostream>

using namespace std;




int main(){
 
 float num;

 cout<<"ingrese un numero\n";
 cin>>num;

 bool cero = (num>0);
 bool diez = (num<10);

 if (cero && diez){
    cout<<"esta entre 0 y 10\n";
 }
 else {
     cout<<"no esta entre 0 y 10\n";
 }
}
