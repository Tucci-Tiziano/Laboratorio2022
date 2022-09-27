#include <iostream>
#include <vector>
using namespace std;
void funcion(vector<int>vect, vector<vector<int>> matriz, int filas)
{
    bool acier=true;
    vector<int> vect2;
    for(int i=0; i<4 && acier; i++){
        for( int j=0; j<4; j++){
            vect2.push_back(matriz[j][i]);
        }
        if(vect==vect2){
            acier=false;
        }
        vect2={};
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
    vector<int> vect = {4, 8, 11, 16};
    vector<vector<int>> matriz;
    vector<int> a = {1, 2, 3, 4}, b = {5, 6, 7, 8}, c = {9, 10, 11, 12}, d = {13, 14, 15, 16};
    matriz.push_back(a);
    matriz.push_back(b);
    matriz.push_back(c);
    matriz.push_back(d);
    filas=matriz.size();
    funcion(vect, matriz, filas);
}

/*
Realizar una función similar a la anterior, aunque esta vez la matriz será de 4x4, el vector de 4 
posiciones y se debe imprimir si el vector es exactamente igual a alguna columna de la matriz o no.
*/