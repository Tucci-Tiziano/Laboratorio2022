#include <iostream>

using namespace std;


int main(){
 
 char let;
 int num;

 cout<<"ingrese una letra\n";
 cin>>let;
 

 num=let;

 cout<<num<<endl;

 bool num1 = (num<=90);
 bool num2 = (num>=65);

 if (num1 && num2){
     cout<<"la letra esta en mayuscula\n";
 }
 else{
     cout<<"la letra esta en minuscula\n";
 } 
 
}