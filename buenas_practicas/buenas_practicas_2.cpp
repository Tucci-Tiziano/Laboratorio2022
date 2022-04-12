#include <iostream>

using namespace std;
    int main(){
    int num_1;
    int resto_1;
    int resto_2;
    int resto_3;
    cout<<"ingresar_numero\n";
    cin>>num_1;
    if (num_1==25){ 
        cout<<"no es primo\n";
    }
    else{
    if (num_1==2 || num_1==3){ //el numero 2 y 3 son primos
        cout<<"es primo\n";
    }
    else{    
        resto_1=num_1 % 2;
        resto_2=num_1 % 3;
        if (resto_1>0){ //si el numero tiene resto dividiendo por 2
            (resto_2>0) ?  cout<<"es primo\n" : cout<<"no es primo\n"; //si el numero tiene resto dividiendo por 3
        }                     
        else{
            cout<<"no es primo\n";
        }
        }
    }
}