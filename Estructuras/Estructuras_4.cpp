#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


struct Alumno{
    string nombre;
    string apellido;
    int edad;
    vector<float> notas;
};



vector<Alumno> cargar_alumnos(){
    Alumno p1;
    vector<Alumno> vector_alumno;
    int cont=1, cont2=1, cont3=1, edad, cant_notas, cant_alumnos, nota;
    string nombre, apellido;
    vector<float> notas;

    cout<<"cuantos alumnos quiere cargar: "<<endl;
    cin>>cant_alumnos;

    while(cant_alumnos>0){
        cout<<"Alumno "<<cont<<":"<<endl;
        cout<<"Nombre: "<<endl;
        cin>>nombre;
        cout<<"Apellido: "<<endl;
        cin>>apellido;
        cout<<"Edad: "<<endl;
        cin>>edad;
        cout<<"Cantidad de notas a cargar: "<<endl;
        cin>>cant_notas;
        p1.nombre=nombre;
        p1.apellido=apellido;
        p1.edad=edad;
        while (cant_notas>0){
            cout<<"nota "<<cont3<<":"<<endl;
            cin>>nota;
            notas.push_back(nota);
            cant_notas--;
            cont3++;
        }
        cont3=1;
        p1.notas=notas;
        cant_alumnos--;
        vector_alumno.push_back(p1);
        cont++;

    }
        return vector_alumno;
}

void mostrar(vector<Alumno> vector1){
    vector<float> notas_alumno;
    int size1, size2, cont=0, cont2=0;
    float nota_most;
    size1=vector1.size();
    Alumno p1;
    while(size1>cont){

        cout<<"Alumno "<<cont+1<<endl;
        p1=vector1[cont];
        cout<<"Nombre: "<<p1.nombre<<endl;
        cout<<"Apellido: "<<p1.apellido<<endl;
        cout<<"Edad: "<<p1.edad<<endl;
        cout<<"Notas: ";
        notas_alumno=p1.notas;
        size2=notas_alumno.size();
        while (size2>cont2){
            nota_most=notas_alumno[cont2];
            cout<<nota_most<<"-";
            cont2++;
        }
        cout<<endl;
        cont++;   
    }

}



int main(){
    vector<Alumno> vector;
    vector=cargar_alumnos();
    mostrar(vector);



}