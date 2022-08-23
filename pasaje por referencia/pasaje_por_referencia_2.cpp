#include <iostream>
#include <fstream>
using namespace std;
void funcion (string &palabra, char letra){
    cout<<"ingresar palabra"<<endl;
    cin>>palabra;
    cout<<"ingresar letra"<<endl;
    cin>>letra;
    palabra=palabra+letra;
}
int main(){
    string palabra;
    char letra;
    funcion(palabra, letra);
    cout<<palabra<<endl;
}
