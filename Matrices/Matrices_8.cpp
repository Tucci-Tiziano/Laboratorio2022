#include <iostream>
#include <vector>
using namespace std;
void funcion(vector<int>vect, vector<vector<int>> matriz, int filas)
{
    bool acier=true;
    for(int i=0; i<filas && acier;i++){
        if(matriz[i]==vect){
            acier=false;
        }
    }
    if(!acier){
        cout<<"existe"<<endl;
    }
    else{
        cout<<"no existe"<<endl;
    }

}

int main()
{
    int filas=0;
    vector<int> vect = {11, 12, 13, 14, 15};
    vector<vector<int>> matriz;
    vector<int> a = {1, 2, 3, 4, 5}, b = {6, 7, 8, 9, 10}, c = {11, 12, 13, 14, 15};
    matriz.push_back(a);
    matriz.push_back(b);
    matriz.push_back(c);
    filas=matriz.size();
    funcion(vect, matriz, filas);
}

/*
Realizar una función que tome por parámetro un vector de 5 posiciones, una matriz de 5 columnas y
 un entero que indique la cantidad de filas de la matriz. Se debe buscar si existe una fila 
 en la matriz que sea exactamente el vector e imprimir la respuesta.
*/