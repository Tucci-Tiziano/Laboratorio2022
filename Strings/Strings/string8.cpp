#include <iostream>

using namespace std;

int main(){
    string palabra1;    
    string palabra2;   
    int num1;
    int num2;
    int lugar1=0; 
    int lugar2=0;
    cout<<"ingrese la palabra 1\n";
    cin>>palabra1;
    cout<<"ingrese la palabra 2\n";
    cin>>palabra2;


    num1=palabra1.size();
    num2=palabra2.size();

    while (lugar2<num2 || lugar1<num1){
        if (lugar1<num1){
        cout<<palabra1[lugar1];
        }
        if (lugar2<num2){
        cout<<palabra2[lugar2];
        }
        lugar1++;
        lugar2++;
    }
    cout<<"\n";
}