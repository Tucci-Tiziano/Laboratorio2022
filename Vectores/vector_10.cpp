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
vector<int> ordenar_123 (vector<int> vector1){
    int cont=0;
    int lugar=1;
    int menor=0;
    int uno=0;
    int dos=0;
    int tres=0;
    vector<int> vector2;
    while (cont<vector1.size()){
        if (vector1[cont]==1){
            uno++;
        }
        else if (vector1[cont]==2){
            dos++;
        }
        else if (vector1[cont]==3) {
            tres++;
        }
        cont++;
    }
    while (uno>0){
        vector2.push_back(1);
        uno--;
    }
      while (dos>0){
        vector2.push_back(2);
        dos--;
    }
      while (tres>0){
        vector2.push_back(3);
        tres--;
    }
    vector1=vector2;
    return vector1;
}
int main(){   
vector<int> vector1;
vector1=llenar_vector(vector1);
mostrar_vector(ordenar_123(vector1));
} 