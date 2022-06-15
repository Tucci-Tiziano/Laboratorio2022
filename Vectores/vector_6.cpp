#include <iostream>
#include <vector>
using namespace std;

vector<float> llenar_vector (vector<float> vector){
    int cant;
    int cont=0;
    float num;
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
void mostrar_vector (vector<float> vector){
    int cont=0;
    cout<<"numeros: "<<endl;
    while (cont<vector.size()){
        cout<<vector[vector.size()-cont-1]<<endl;
        cont++;
    }
    cont=0;
}
int main(){    
    vector<float> vector1;
    mostrar_vector(llenar_vector(vector1));
}