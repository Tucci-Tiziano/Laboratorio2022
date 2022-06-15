#include <iostream>
#include <vector>
using namespace std;

void mostrar_vector (vector<int> vector){
    int cont=0;
    cout<<"posiciones: "<<endl;
    while (cont<vector.size()){
        cout<<vector[cont]<<endl;
        cont++;
    }
    cont=0;
}
vector<int> llenar_vector (vector<int> vector){
    int cant;
    int cont=0;
    int num;
    cout<<"ingresar cantidad de numeros"<<endl;
    cin>>cant;
    cout<<"ingresar "<<cant<<" numero/s:"<<endl;
    while (cont<cant){
        cin>>num;
        vector.push_back(num);
        cont++;
    }
    return vector;
}
vector<int> relacionar_vector (vector<int> vector1, vector<int> vector2, vector<int> vector3, vector<int> vector4){
    int cont=0;
    int lugar1=0;
    int lugar2=0;
    int igual1=0;
    int igual2=0;
    while (cont<vector1.size()){ 
        while (lugar1<vector1.size()){ 
            if (vector1[cont]==vector2[lugar1]){
                igual1=lugar1+1;
            }
            lugar1++;
        }
        while (lugar2<vector1.size()){ 
            if (vector1[cont]==vector3[lugar2]){
                igual2=lugar2+1;
            }
            lugar2++;
        }
        if (igual1>0 &&  igual2>0){
            vector4.push_back(cont);
            vector4.push_back(igual1-1);
            vector4.push_back(igual2-1);
        }
        lugar1=0;
        lugar2=0;
        igual1=0;
        igual2=0;
        cont++;
    }
    return vector4;
}
int main(){   
    vector<int> vector1;
    vector<int> vector2;
    vector<int> vector3;    
    vector<int> vector4;
    vector1=llenar_vector(vector1);
    vector2=llenar_vector(vector2);
    vector3=llenar_vector(vector3);
    mostrar_vector(relacionar_vector(vector1, vector2, vector3, vector4));
}