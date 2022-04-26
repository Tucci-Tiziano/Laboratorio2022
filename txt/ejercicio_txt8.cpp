#include <fstream>
#include <iostream>

using namespace std;

int main(){
  ifstream archivo1;   
  ofstream archivo2;
  string ubicacion1;
  string nombre;
  string frase;
  int eleccion;

  cout<<"seleccione el archivo" <<endl;
  cin>>ubicacion1;
 cout<<"ingresar operacion:" <<endl;
 cout<<"1 abrir archivo " <<endl;
 cout<<"2 eleminar archivo" <<endl;
 cout<<"3 renombrar archivo" <<endl;
 cin>>eleccion;
 
  while(eleccion!=1 && eleccion!=2 && eleccion!=3){
    cout<<"porfavor ingresar un codigo valido"<<endl;
    cin>>eleccion;
  }
  if (eleccion==1){
    archivo1.open(ubicacion1);
  }
  else{
    archivo2.open(ubicacion1);
  }

 if (archivo1.is_open() || archivo2.is_open()){
    switch(eleccion){
    case 1:
        while (getline(archivo1, frase)){
        cout<<frase<<endl;
      }
    break;
    case 2:
       remove (ubicacion1.c_str());
    break;
    case 3:
      cout<<"como quiere llamar al archivo"<<endl;
      cin>>nombre;
      rename (ubicacion1.c_str(),nombre.c_str());
    break;
 }
 }
}


   