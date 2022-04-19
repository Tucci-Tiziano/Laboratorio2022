#include <fstream>
#include <iostream>

using namespace std;

int main(){
ofstream archivo;
string frase = "hoy es martes";

archivo.open("hola.txt");
if (archivo.is_open()){
    archivo << frase <<endl;
}
archivo.close();
}