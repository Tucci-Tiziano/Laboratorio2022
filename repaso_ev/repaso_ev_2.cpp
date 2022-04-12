#include <iostream>
using namespace std;

int main(){
 float num1;
 int num2=0;
 int num3=0;
 int num_int;
 float num_float;
 int cant_num;
 int posicion=0;
 cout << "ingresar cantidad de numeros:"<<endl;
 cin>>cant_num;
 while (posicion<cant_num){
    cout << "ingresar numero:"<<endl;
    cin >> num1;
    num_float=num1 / 2;
    num_int=num1 / 2;
    if (num_float==num_int){
        if (num2<num1){
        num2=num1;
        }
    } 
    else if(num_float!=num_int){
        if (num3<num1){
            num3=num1;
        }
    }     
    posicion++;
    }
 cout<<"el numelo mayor par es:";
 cout<<num2<<endl;
  cout<<"el numelo mayor impar es:";
 cout<<num3<<endl;
}