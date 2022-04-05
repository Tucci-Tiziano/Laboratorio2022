#include <iostream>

using namespace std;

int main(){
    string palabra;    
    int num;
    int lugar=0;

    cout<<"ingrese una palabra\n";
    cin>>palabra;
    num=palabra.size();
    while(lugar<num){
        cout<<palabra[lugar]<<endl;
        lugar=lugar+1;
    }
}
