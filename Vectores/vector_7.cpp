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
void buscar_num (vector<int> vector){
int num;
int cont=0;
bool si=false;
 cout<<"ingrese el numero a buscar"<<endl;
    cin>>num;
    while (cont<10){
        if (vector[cont]==num){
            si=true;
        }
        cont++;
    }
    if (si==true){
        cout<<"si esta"<<endl;
    }
    else{
        cout<<"no esta"<<endl;
    }
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
    vector1=llenar_vector(vector1);
    buscar_num (vector1);
}