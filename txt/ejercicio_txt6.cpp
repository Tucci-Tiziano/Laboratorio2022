#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ifstream archivo1;
    ifstream archivo2;
    ofstream archivo3;
    string frase1;
    string frase2;
    string ubicacion;
    char letra;
    int asc;
    int tam;
    int posicion=0;
    int cont=0;

    cout<<"ingresar nombre del archivo"<<endl;
    cin>>ubicacion;
    archivo1.open(ubicacion);
    cout<<"ingresar nombre del segundo archivo"<<endl;
    cin>>ubicacion;
    archivo2.open(ubicacion);
    cout<<"ingresar nombre del tercer archivo"<<endl;
    cin>>ubicacion;
    archivo3.open(ubicacion);



    if ((archivo1.is_open()) && archivo2.is_open() && archivo3.is_open()){
        while(getline(archivo1, frase1)){
            getline(archivo2, frase2);
            if(frase1!=frase2){
                archivo3 << frase1 <<endl;
                archivo3 << frase2 <<endl;
            }
        }          
    }
    archivo1.close();
    archivo2.close();
}





