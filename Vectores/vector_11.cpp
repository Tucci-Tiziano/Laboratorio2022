#include <iostream>
#include <vector>
using namespace std;
vector<int> llenar_vector (int num){
    int cont=1;
    vector<int> vector1;
    while (cont<=num){
        vector1.push_back(cont);
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
vector<int> factor_vector (vector<int> vector1, int num){
    int cont =0;
    int result;
    vector<int> vector2;
    while (cont<vector1.size()){
        result=num % vector1[cont];
        if (result==0){
            vector2.push_back(vector1[cont]);
        }
        cont++;
    }
    vector1=vector2;
    return vector1;

}
vector<int> primo_vector (vector<int> vector1){
    int cont=0;
    int dos;
    int tres;
    int cinco;
    vector<int> vector2;
    vector2.push_back(2);
    vector2.push_back(3);
    vector2.push_back(5);
    while (cont<vector1.size()){
        dos=vector1[cont] % 2;
        tres=vector1[cont] % 3;
        cinco=vector1[cont] % 5;
        if (dos>=1 && tres>=1 && cinco>=1){
            if (vector1[cont]!=1){
                vector2.push_back(vector1[cont]);
            }
        }
        cont++;
    }
    vector1=vector2;
    return vector1;
}
int main(){   
    int num;
    cout<<"ingrese un numero:"<<endl;
    cin>>num;
    mostrar_vector(factor_vector(primo_vector(llenar_vector(num)), num));
}