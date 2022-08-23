#include <iostream>
#include <fstream>
using namespace std;
void funcion (int &numero, char arit){
    if (arit=='+'){
        numero++;
    }
    if (arit=='-'){
        numero--;
    }
}
int main(){
    int num;
    char arit;
    cout<<"ingresar numero"<<endl;
    cin>>num;
    cout<<"ingresar + o -"<<endl;
    cin>>arit;
    funcion(num, arit);
    cout<<num<<endl;
}

