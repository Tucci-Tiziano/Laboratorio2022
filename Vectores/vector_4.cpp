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


int main(){   
    int size;
    int cont=0;
    bool si=true; 
    vector<int> vector1;
    vector1=llenar_vector(vector1);
    size=vector1.size()-1;
    while(cont<size && si){
        if (vector1[cont]>vector1[cont+1]){
            si=false;
        }
        cont++;
    }
    if (si){
        cout<<"si escala de forma ascendente: "<<endl;
        mostrar_vector(vector1);
    }
    else {
        cout<<"no escala de forma ascendente"<<endl;
    }

} 