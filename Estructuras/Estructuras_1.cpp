#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


struct Persona{
    string nombre;
    string apellido;
    int edad;
};
bool verificar_edad(int numero){
    bool invalido=true;
        if (numero>100 || numero<0){
            cout<<"Edad invalida"<<endl;
        }
        else {
            invalido=false;
        }
    return invalido;
}

Persona funcion_Persona(){
    string nombre;
    bool invalido=true;
    Persona persona; 
    cout<<"ingresar nombre:"<<endl;
    cin>>persona.nombre;
    cout<<"ingresar apellido:"<<endl;
    cin>>persona.apellido;
    while (invalido){
        cout<<"ingresar edad:"<<endl;
        cin>>persona.edad;
        invalido=verificar_edad(persona.edad);
    }

    return persona;
}



void mostrar(Persona vector){
    cout<<"Nombre: "<<vector.nombre<<endl<<"Apellido: "<<vector.apellido<<endl<<"Edad: "<<vector.edad<<endl;
}

int main(){
    Persona persona;

persona=funcion_Persona();
mostrar(persona);



}