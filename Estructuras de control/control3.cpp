#include <iostream>

using namespace std;


int main(){
    int libros;
    int precio;
    cout<<"ingresar la cantidad de libros"<<endl;
    cin>>libros;
    while (libros==0) {
        cout<<"no se pueden comprar esa cantidad de libros vuelva a introducir un valor valido"<<endl;
        cin>>libros;
    }
    if (libros>5){
        cout<<"el valor de los libros es igual a:";
        cout<<libros*250<<endl;
    }
    else{
        cout<<"el valor de los libros con descuento es igual a:";
        cout<<libros*300<<endl;
    }
}