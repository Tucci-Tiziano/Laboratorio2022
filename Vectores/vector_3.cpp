#include <iostream>
#include <vector>
using namespace std;
vector<int> limpiar_vector (vector<int> vector1, vector<int> vector2){
    int cont=0;
    int lugar=1;
    bool igual=true;
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
    return vector2;
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

void mostrar_vector (vector<int> vector){
    int cont=0;
    cout<<"numeros: "<<endl;
    while (cont<vector.size()){
        cout<<vector[cont]<<endl;
        cont++;
    }
    cont=0;
}



int main(){    
    vector<int> vector1;
    vector<int> vector2;
    mostrar_vector(limpiar_vector(llenar_vector(vector1), vector2));
}