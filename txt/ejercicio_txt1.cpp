#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ifstream archivo;
    string frase;
    string ubicacion;

    cout<<"ingresar nombre del archivo"<<endl;
    cin>>ubicacion;


    archivo.open(ubicacion);
    if (archivo.is_open()){
        while(getline(archivo, frase, '.')){
            cout<<frase<<endl;
            }
        }
    }
    cout<<contador<<endl;
    archivo.close();
}
