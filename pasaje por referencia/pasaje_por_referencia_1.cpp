#include <iostream>
#include <fstream>
using namespace std;
void funcion (int &num){
    cout<<"ingresar num"<<endl;
    cin>>num;
}
int main(){
    int num;
    funcion(num);
    cout<<num<<endl;
}
