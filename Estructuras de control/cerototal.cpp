#include <iostream>

using namespace std;

int main(){
    int numero=1;
    int resultado=0;
    cout << "ingresar los numeros a sumar:"<<endl;
    while (numero!=0){
        cin>>numero;
        resultado=resultado+numero;
        cout<<numero<<endl;
    }
}



