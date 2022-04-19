#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ifstream archivo;
    string frase;
    string ubicacion;
    string nombre;
    int contador=0;

    cout<<"ingresar nombre del archivo"<<endl;
    cin>>ubicacion;
    cout<<"ingresar un nombre"<<endl;
    cin>>nombre;

    archivo.open(ubicacion);
    if (archivo.is_open()){
        while(getline(archivo, frase, ',')){
            if (frase==nombre){
                contador++;
            }
        }
    }
    cout<<contador<<endl;
    archivo.close();
}