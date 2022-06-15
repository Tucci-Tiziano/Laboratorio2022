#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num;
    int num2;
    bool si=false;
    int cont=0;
    vector <int> vector1(10);
    cout<<"ingrese 10 numeros"<<endl;
    while (cont<10){   
        cin>>num;
        vector1[cont]=num;
        cont++;
    }
    cont=0;
    cout<<"ingrese el numero a buscar"<<endl;
    cin>>num2;
    while (cont<10 && si==false){
        if (vector1[cont]==num2){
            si=true;
        }
        cont++;
    }
    if (si){
        cout<<"si esta"<<endl;
    }
    else{
        cout<<"no esta"<<endl;
    }
}