#include <fstream>
#include <iostream>
using namespace std;
int main(){
    ifstream archivo;
    string frase;
    string ubicacion;
    string linea;
    int num1;
    int num2;
    int sumf;
    int sumr;
    int cant_lin;
    cout<<"ingresar nombre del archivo"<<endl;
    cin>>ubicacion;
    archivo.open(ubicacion);
    if (archivo.is_open()){
        while(getline(archivo)<linea){
            for(int i=0,i<=cant_lin, i++){
                archivo >> num1 >> num2 >> sumf;
             if(num1+num2!=sumr){
                cout<< "error en la linea" << endl;
            }
            }

        }









    archivo.close();
} 