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
vector<int> mover_vector (vector<int> vector1, int num){
    vector<int> vector2;
    int cont=0;
    while (cont<vector1.size()-num){
        vector2.push_back(vector1[cont+num]);
        cont++;
    }
    cont=0;
    while(cont<num){
        vector2.push_back(vector1[cont]);
        cont++;
    }
    vector1=vector2;
    return vector1;
}


int main(){   
    vector<int> vector1;
    int num;
    vector1=llenar_vector(vector1);
    cout<<"ingresar un numero:"<<endl;
    cin>>num;
    mostrar_vector(mover_vector(vector1, num));
}