#include <iostream>
#include <vector>
using namespace std;
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
void mostrar_vector (vector<int> vector){
    int cont=0;
    cout<<"numeros: "<<endl;
    while (cont<vector.size()){
        cout<<vector[cont]<<endl;
        cont++;
    }
    cont=0;
}
vector<int> limpiar_vector (vector<int> vector1){
    int cont=0;
    int lugar=1;
    bool igual=true;
    vector<int> vector2;
    while (cont<vector1.size()){ 
        while (lugar<vector1.size()){ 
            if (vector1[cont]==vector1[lugar]){
                igual=false;
            }
            lugar++;
        }
        if (igual){
            vector2.push_back(vector1[cont]);
        }
        cont++;
        lugar=cont+1;
        igual=true;
    }
    vector1=vector2;
    return vector1;
}
int main(){   
    int size;
    vector<int> vector1;
    vector1=llenar_vector(vector1);
    vector1=limpiar_vector(vector1);
    mostrar_vector(vector1);
}
