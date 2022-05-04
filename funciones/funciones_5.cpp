#include <iostream>
using namespace std;

float menu(float a, float b, int op2){
    switch (op2){
        case 43:
        a=a+b;
        break;
        case 45:
        a=a-b;
        break;
        case 42:
        a=a*b;
        break;
        case 47:
        a=a/b;
        break;
    }
    return a;
   
}

int main(){
    float a;
    float b;
    char op;
    int op2;
    cout<<"ingresar valor 1: "<<endl;
    cin>>a;
    cout<<"ingresar valor 2: "<<endl;
    cin>>b;
    cout<<"que operacion quiere realizar: +, -, *, /, 0 para salir"<<endl;
    cin>>op;
    op2=op;
    while (op2!=48){
        float ab=menu(a,b,op2);
        cout<<ab<<endl;
        cout<<"ingresar valor 1: "<<endl;
        cin>>a;
        cout<<"ingresar valor 2: "<<endl;
        cin>>b;
        cout<<"que operacion quiere realizar: +, -, *, /, 0 para salir"<<endl;
        cin>>op;
        op2=op;
    }
} 