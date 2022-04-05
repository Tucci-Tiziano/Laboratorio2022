#include <iostream>

using namespace std;

int main(){
int posicion=0;
int num_1;
string palabra;
int num_letra;
char letra;
cout<<"ingreas_palabra:\n";
cin>>palabra;
while (posicion<palabra.size()){
    letra=palabra[posicion];//iguala la letra con la posicion de la palabra
    if (palabra[posicion]==','){//si la letra es igual a la coma se remplaza por un espacio
        palabra[posicion]=' ';
    }
    posicion++;

}
cout<<"tu_palabra_sin_comas_es:";
cout<<palabra<<endl;
}