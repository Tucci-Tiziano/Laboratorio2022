#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


struct Alumno{
    string nombre;
    int edad;
    vector<float> notas;
};
struct Alumno_promedio{
    string nombre;
    int edad;
    float promedio;
};



vector<Alumno> cargar_alumnos(){
    Alumno p1;
    vector<Alumno> vector_alumno;
    int cont=1, cont2=1, cont3=1, cant_notas, cant_alumnos, nota, edad;
    string nombre;
    vector<float> notas;

    cout<<"cuantos alumnos quiere cargar: "<<endl;
    cin>>cant_alumnos;

    while(cant_alumnos>0){
        cout<<"Alumno "<<cont<<":"<<endl;
        cout<<"Nombre: "<<endl;
        cin>>nombre;
        cout<<"Edad: "<<endl;
        cin>>edad;
        cout<<"Cantidad de notas a cargar: "<<endl;
        cin>>cant_notas;
        p1.nombre=nombre;
        p1.edad=edad;
        while (cant_notas>0){
            cout<<"nota "<<cont3<<":"<<endl;
            cin>>nota;
            notas.push_back(nota);
            cant_notas--;
            cont3++;
        }
        p1.notas=notas;
        while(cont3>1){
            notas.pop_back();
            cont3--;
        }
        cant_alumnos--;
        vector_alumno.push_back(p1);
        cont++;

    }
        return vector_alumno;
}

vector<Alumno_promedio> promedios(vector<Alumno> vector1){
    Alumno_promedio p1;
    Alumno p2;
    int size, size2, notas=0, cont2=0, cont=0;
    vector<Alumno_promedio> promedios;
    size=vector1.size();
    
    while(cont<size){
        p2=vector1[cont];
        p1.nombre=p2.nombre;
        p1.edad=p2.edad;
        size2=p2.notas.size();
        while(size2>cont2){
        notas=notas+p2.notas[cont2];
        cont2++;
        }
        notas=notas/cont2;
        cont2=0;
        p1.promedio=notas;
        notas=0;
        promedios.push_back(p1);
        cont++;
    }
    return promedios;
}
void promedio_alto(vector<Alumno_promedio> vector, int edad){
    Alumno_promedio p1;
    int nota=0, cont=0, size=0;
    string nombre;
    size=vector.size();
    while(cont<size){
        p1=vector[cont];
        if (p1.promedio>nota && p1.edad==edad){
            nota=p1.promedio;
            nombre=p1.nombre;
        }

        cont++;
    }
    if(nota==0){
        cout<<"No hay alumnos con esa edad"<<endl;        
    }
    else{
        cout<<"El promedio mas alto es: "<<endl<<"Nombre:"<<nombre<<endl<<"Promedio: "<<nota<<endl;
    }
}



int main(){
    vector<Alumno> vector;
    int edad;
    vector=cargar_alumnos();
    cout<<"edad a buscar: "<<endl;
    cin>>edad;
    promedio_alto(promedios(vector),edad);



}