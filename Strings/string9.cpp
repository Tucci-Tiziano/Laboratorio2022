#include <iostream>

using namespace std;

int main(){
    string palabra;    
    int num;
    int lugar=0;
    int lugar2;

    cout<<"ingrese una palabra\n";
    cin>>palabra;
    num=palabra.size();
    lugar2=num-1;
    if (palabra[lugar] == palabra[lugar2]){
        cout<<"es un palindromo\n";
    }
    else{
        cout<<"no es un palindromo\n";
    }
}
