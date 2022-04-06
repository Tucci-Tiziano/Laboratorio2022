#include <iostream>
using namespace std;

int main(){
 float num;
 float num_float;
 int num_int;
 cout << "ingresar numero:"<<endl;
 cin>>num;
 num_float=num / 2;
 num_int=num / 2;
 (num_float==num_int) ? cout<<"el numero es par"<<endl : cout<<"el numero es impar"<<endl;
}