#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ifstream archivo1;
    ofstream archivo2;
    string frase;
    string ubicacion1;
    string ubicacion2;
    char letra;
    int asc;
    int tam;
    int posicion=0;
    int cont=0;

    cout<<"ingresar nombre del archivo"<<endl;
    cin>>ubicacion1;
    archivo1.open(ubicacion1);
    cout<<"ingresar nombre del segundo archivo"<<endl;
    cin>>ubicacion2;
    archivo2.open(ubicacion2);



    if ((archivo1.is_open()) && archivo2.is_open()){
        
            while(getline(archivo1, frase)){
                tam=frase.size();
                while(posicion<tam){
                    letra=frase[posicion];
                    asc=letra;
                    if (asc>=97 && asc<=122){
                        asc=asc-32;
                        letra=asc;
                    }
                    frase[posicion]=letra;
                    posicion++;
                }
                archivo2 << frase  <<endl;
            }
        cont++;
        
    }
    archivo1.close();
    archivo2.close();
}





