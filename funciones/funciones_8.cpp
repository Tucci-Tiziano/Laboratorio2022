#include <fstream>
#include <iostream>

using namespace std;


void a(string frase, string ubicacion1){
  ifstream archivo1;
  archivo1.open(ubicacion1);
  while (getline(archivo1, frase)){
    cout<<frase<<endl;
  }
}
void b(string ubicacion1, string nombre){
  remove (ubicacion1.c_str());
}
void c(string ubicacion1, string nombre){
  cout<<"como quiere llamar al archivo"<<endl;
  cin>>nombre;
  rename (ubicacion1.c_str(),nombre.c_str());
}






int main(){
  ifstream archivo1;   
  ofstream archivo2;
  string ubicacion1;
  string nombre;
  string frase;
  int eleccion;
  int fin=1;

  while(fin>0){
    cout<<"seleccione el archivo" <<endl;
    cin>>ubicacion1;
    cout<<"ingresar operacion:" <<endl;
    cout<<"1 abrir archivo " <<endl;
    cout<<"2 eleminar archivo" <<endl;
    cout<<"3 renombrar archivo" <<endl;
    cin>>eleccion;
    if (eleccion)
  
    while(eleccion!=1 && eleccion!=2 && eleccion!=3 && eleccion!=0){
      cout<<"porfavor ingresar un codigo valido"<<endl;
      cin>>eleccion;
    }
    if (eleccion==0){
      fin=0;
    }

    if (eleccion==2||eleccion==3){
      archivo2.open(ubicacion1);
    }

    if (eleccion==1 || archivo2.is_open()){
      switch(eleccion){
        
        case 1:
          a(frase, ubicacion1);
        break;

        case 2:
          b(ubicacion1, nombre);
        break;
        
        case 3:
          c(ubicacion1, nombre);
        break;3
      }
    }
  }
}

