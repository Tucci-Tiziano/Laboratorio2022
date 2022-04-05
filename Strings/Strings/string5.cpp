#include <iostream>

using namespace std;

int main(){
    string palabra;    
    int num;
    int lugar;
    cout<<"ingrese una palabra\n";
    cin>>palabra;
    num=palabra.size();
    lugar=num-1;
    while(lugar>=0){
        cout<<palabra[lugar]<<endl;
        lugar--;
    }
}
