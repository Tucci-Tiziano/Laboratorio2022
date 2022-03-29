#include <iostream>

using namespace std;

int main(){

 int num;
 int res;
 cout << "ingresar numero:"<<endl;
 cin>>num;
 res=num % 2 ;
 if (res==0){
    cout<<"el numero es par"<<endl;
}
 else{
     cout<<"el numero es impar"<<endl;
 }
}
