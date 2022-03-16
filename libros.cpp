#include <iostream>

using namespace std;

  int libros;
int precio;

int main(){
 
    
   cout<<"ingresar la cantidad de libros"<<endl;
   cin>>libros;


   if (libros>5){
       cout<<"el valor de los libros es igual a:";
       cout<<libros*300<<endl;
   }
   else if (libros<=0){
       cout<<"no se pueden comprar esa cantidad de libros"<<endl;
   }
    else{
       cout<<"el valor de los libros con descuento es igual a:";
       cout<<libros*250<<endl;
   }
    





}