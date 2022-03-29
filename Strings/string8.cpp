#include <iostream>

using namespace std;

int main(){
    string palabra1;    
    string palabra2;   
    int num1;
    int num2;
    int lugar=0; 
    cout<<"ingrese la palabra 1\n";
    cin>>palabra1;
    cout<<"ingrese la palabra 2\n";
    cin>>palabra2;


    num1=palabra1.size();
    num2=palabra2.size();

    while (lugar<num2){
        cout<<palabra1[lugar];
        cout<<palabra2[lugar];
        lugar++;
    }
    cout<<"\n";
}