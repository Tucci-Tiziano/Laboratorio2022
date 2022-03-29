#include <iostream>

using namespace std;

int main(){
    string palabra;    
    int cant;
    int num;
    int lugar=0;
    char letra1;
    char letra2;
    cout<<"ingrese una palabra\n";
    cin>>palabra;
    cout<<"ingrese una letra\n";
    cin>>letra1;
    letra2=letra1;
    cant=palabra.size();
    num=letra2;

    while (lugar<cant){
        if (palabra[lugar]== letra2){
            num=num-32;
            letra2=num;           
            palabra[lugar]=letra2;
            cout<<palabra[lugar];
        }
        else{
            cout<<palabra[lugar];
        }
        letra2=letra1;
        num=letra2;
        lugar++;
    }
    cout<<"\n";
 }   