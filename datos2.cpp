#include <iostream>

using namespace std;



int main(){
 
 float num;
 float numc;
 int nums;
 cout << "ingresar numero:"<<endl;
 cin>>num;

 numc=num / 2;
 nums=num / 2;

 if (numc==nums){
     cout<<"el numero es par"<<endl;
 }
 else{
     cout<<"el numero es impar"<<endl;
 }
}