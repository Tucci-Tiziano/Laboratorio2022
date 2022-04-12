#include <iostream>
using namespace std;
int main(){
    int num_1;
    int figo1=0;//primer numero de figonacci
    int figo2=1;//segundo numero de figonacci
    int figo3=0;//se le asigna un valor para que entra al while
    cout<<"ingresar_numero\n";
    cin>>num_1;
    if (num_1<1){
        cout<<"ingrear un numero valido\n";
    }
    else{
        while (figo3<num_1){//busca el primer numero de figgonacci que supere al introducido
            figo3=figo2+figo1;
            figo1=figo2;
            figo2=figo3;
        }
        cout<<figo3<<endl;
    }
}