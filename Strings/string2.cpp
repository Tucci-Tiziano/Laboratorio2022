#include <iostream>

using namespace std;

int main(){
    string palabra1;    
    string palabra2;   
    int num1;
    int num2;
    int lugar1; 
    int lugar2;
    cout<<"ingrese la palabra 1\n";
    cin>>palabra1;
    cout<<"ingrese la palabra 2\n";
    cin>>palabra2;
    num1=palabra1.size();
    num2=palabra2.size();
    lugar1=num1-1;
    lugar2=num2-1;
    if ((palabra1[lugar1])==(palabra2[lugar2])){
        cout<<"son iguales\n";
    }
    else{
        cout<<"no son iguales\n";
    }
}
