#include <fstream>
#include <iostream>
using namespace std;
int main(){
    ifstream archivo1;
    ifstream archivo2;
    ofstream archivo3;
    string frase1;
    string frase2;
    string frase3;
    string ubicacion;
    int cont=0;
    archivo1.open("1.txt");
    archivo2.open("2.txt");
    archivo3.open("3.txt");
    if ((archivo1.is_open()) && archivo2.is_open() && archivo3.is_open()){
        while(getline(archivo1, frase1, ':')){
            while(getline(archivo2, frase2, ':')){
                if (frase1==frase2){
                    frase3=frase2;
                    if (frase3==":" || frase3=="\n"){
                        1+1;
                    }
                    else{
                        archivo3 << frase2 << ':';
                        cont++;
                    if (cont==4){
                        archivo3<<endl;
                        cont=0;
                    }
                    } 
                }
            }
            archivo2.close();
            archivo2.open("2.txt");
        }
    }
    archivo1.close();
    archivo2.close();
    archivo3.close();
}