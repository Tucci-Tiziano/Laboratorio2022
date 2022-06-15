#include <iostream>
#include <vector>
using namespace std;
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
vector<int> ordenar_vector (vector<int> vector1, vector<int> vector2, vector<int> vector3){
    int cont=0;
    int size;
    int lugar=0;
    cout<<"suma: "<<endl;
    size=vector1.size();
    if (vector2.size()>size){
        size=vector2.size();
    }
    while (cont<size){ 
        if (vector1[cont]<vector2[cont]){
            vector3.push_back(vector1[cont]);
            vector3.push_back(vector2[cont]);
            cont++;
        }
        else{
            vector3.push_back(vector2[cont]);
            vector3.push_back(vector1[cont]);
            cont++;
        }
    }
    cont=0;
    return vector3;
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
    int size;
    int cont=0;
    int si=1; 
    vector<int> vector1;
    vector<int> vector2;
    vector<int> vector3;    
    vector<int> vector4;
    vector1=llenar_vector(vector1);
    vector2=llenar_vector(vector2);
    mostrar_vector(limpiar_vector(ordenar_vector(vector2, vector1, vector3)));
}