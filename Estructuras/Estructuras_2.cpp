#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


struct Punto{
    int x;
    int y;
};

vector<Punto> cargar_punto(){
    Punto p1;
    bool seguir=true;
    string continuar;
    int x, y, cont=1;
    vector<Punto> vector;

    while(seguir==true){
        cout<<"ingresar x del vector "<<cont<<endl;
        cin>>p1.x;
        cout<<"ingresar y del vector "<<cont<<endl;
        cin>>p1.y;
        vector.push_back(p1);
        cont++;
                cout<<"Quiere continuar Si/si  No/no"<<endl;
        cin>>continuar;
        if (continuar=="No" || continuar=="no"){
            seguir=false;
        }
    }
    return vector;
}

void verificar(vector<Punto> vector){
    int size, cont1=0, cont2=0, cont3=1, iguales=0;
    Punto p1, p2;
    size=vector.size();
    cont1=size;

    while(cont2<size){
        while (cont3<size){
            p1=vector[cont2];
            p2=vector[cont3];
            if(p1.x==p2.x && p1.y==p2.y){
                iguales++;
            }
            cont3++;
        }
        cont2++;
        cont3=cont2+1;
    }
    cout<<"pares: "<<iguales<<endl;


}


int main(){
    vector<Punto> puntos;
    puntos=cargar_punto();
    verificar(puntos);

}