#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ofstream archivo;
    string frase;
    string ubicacion;
    string nombre;
    int cant_sum;
    int num1;
    int num2;
    int sum;
    int cont=0;

    cout<<"ingresar nombre del archivo"<<endl;
    cin>>ubicacion;
    cout<<"ingresar la cantidad de sumas"<<endl;
    cin>>cant_sum;

    archivo.open(ubicacion);
    
    if (archivo.is_open()){
        while (cont<cant_sum){
            cout<<"ingresar numero 1"<<endl;
            cin>>num1;
            cout<<"ingresar numero 2"<<endl;
            cin>>num2;
            sum=num1+num2;
            archivo << (num1) << (' ') << ('+') << (' ') << (num2) << (' ') << ('=') << (' ') << (sum) <<endl;
            cont++;
        } 
    }
    archivo.close();
}