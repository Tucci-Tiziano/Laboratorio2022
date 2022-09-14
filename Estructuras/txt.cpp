#include <fstream>
#include <iostream>

using namespace std;

int main(){
    
string espa, ingl, basura;
int cont=0;

    ofstream archivo1;
    ofstream archivo2;
    ifstream archivo3;

    archivo1.open("español.txt");
    archivo2.open("ingles.txt");
    archivo3.open("1000.txt");


    while (cont<1000){
    getline(archivo3, basura, '-');
    getline(archivo3, ingl, '-');
    getline(archivo3, espa, '\n');
    archivo2<<ingl<<endl;
    archivo1<<espa<<endl;
    cont++;
    }
    cout<<"listo"<<endl;




}
