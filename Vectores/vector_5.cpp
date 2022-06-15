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
vector<int> sumar_vector (vector<int> vector1, vector<int> vector2){
    int cont=0;
    int size;
    cout<<"suma: "<<endl;
    while (cont<vector1.size()){ 
        vector1[cont]=vector1[cont]+vector2[cont];
        cont++;
    }
    return vector1;
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
    vector1=llenar_vector(vector1);
    vector2=llenar_vector(vector2);
    if (vector1.size()==vector2.size()){
        mostrar_vector(sumar_vector(vector2, vector1));
    }
    else{
        cout<<"no tienen el mismo tamaño"<<endl;
    }
}