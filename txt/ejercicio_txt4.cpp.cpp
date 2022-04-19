#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ifstream archivo;
    string frase;
    string ubicacion;
    string nombre;
    int num1;
    int num2;
    int sum;
    int cont=1;

    cout<<"ingresar nombre del archivo"<<endl;
    cin>>ubicacion;

    archivo.open(ubicacion);
    
    if (archivo.is_open()){
        while(cont<5){
        getline(archivo, frase, ' ');
        num1=frase[0];
        getline(archivo, frase, ' ');
        num2=frase[0];
        getline(archivo, frase, ' ');
        sum=frase[0];
        if (num1+num2!=sum){
            cout<<"La linea" << (cont) << "es incorecta. Deberia sumar " << (num1) << '+' << (num2) << '=' << (num1+num2) << " y dio " << (sum) <<endl;
        }
        cont++;
        }
    }
    archivo.close();
}                                   