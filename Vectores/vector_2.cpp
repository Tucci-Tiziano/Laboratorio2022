#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num;
    int size;
    int cont=0;
    int mayor=0;
    int menor=0;
    vector <int> vector1;
    cout<<"ingrese numeros"<<endl;
    while (num!=0){   
        cin>>num;
        if (num!=0){
        vector1.push_back(num);
        }
    }
    size=vector1.size();
    menor=vector1[cont];
    while (cont<size){
        if (vector1[cont]>mayor){
        mayor=vector1[cont];
        }
        if (vector1[cont]<menor){
        menor=vector1[cont];
        }
        cont++;
    }
    cout<<"el mayor es: "<<mayor<<endl;
    cout<<"el menor es: "<<menor<<endl;

}