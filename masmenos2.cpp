#include <iostream>

using namespace std;

float numero1;
float numero2;
float operacion;

int main(){

     cout<<"ingresar numero1"<<endl;

    cin>>numero1;

    cout<<"ingresar numero2"<<endl;

    cin>>numero2;

    cout<<"ingresar operacion 1=+ 2=- 3=* 4=/"<<endl;

    cin>>operacion;

    if (operacion==1){
      cout<<numero1+numero2<<endl;
    }
    if (operacion==2){
      cout<<numero1-numero2<<endl;
    }
    if (operacion==3){
      cout<<numero1*numero2<<endl;
    }
    if (operacion==4){
      if (numero2==0){
          cout<<"no se puede dividir por 0"<<endl;
      } 
      else{
      cout<<numero1/numero2<<endl;
      }
    }
     
}
