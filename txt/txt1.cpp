#include <fstream>
#include <iostream>

using namespace std;

int main(){
ifstream archivo;
string frase;
string ruta_archivo = "hola.txt";

archivo.open("hola.txt");
if (archivo.is_open()){
    while(getline(archivo, frase, '.')){
        cout<<frase<<endl;
    }
}
archivo.close();
}