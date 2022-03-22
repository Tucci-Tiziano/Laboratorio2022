#include <iostream>

using namespace std;

int num1;
int num2;

int main(){

   cout<<"ingreasar numero 1"<<endl;
 
   cin>>num1;

   cout<<"ingresar numero 2"<<endl;

   cin>>num2;

    if (num1<num2){
        cout<<"el mayor es: ";

        cout<< num2<<endl;
    }
      else if (num1>num2){
        cout<<"el mayor es: ";

     
       cout<< num1<<endl;
    }
    else{
    
        cout<<"son iguales\n";
    }
}



