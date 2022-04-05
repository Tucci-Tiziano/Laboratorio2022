#include <iostream>

using namespace std;

int main(){
int num_1;
int resto_1;
int resto_2;
cout<<"ingresar_numero\n";
cin>>num_1;
if (num_1==2 || num_1==3){ //el numero 2 y 3 son primos
    cout<<"es_primo\n";
}
else{    
    resto_1=num_1 % 2;
    resto_2=num_1 % 3;
    if (resto_1>0){ //si el numero tiene resto dividiendo por 2
        if (resto_2>0){ //si el numero tiene resto dividiendo por 3
            cout<<"es_primo\n";
        }
        else{
           cout<<"no_es_primo\n"; 
        } 
    }          
    else{
        cout<<"no_es_primo\n";
    }
    }
}