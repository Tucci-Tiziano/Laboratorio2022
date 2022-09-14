#include <iostream>
#include <vector>
using namespace std;

void mostrar_matriz(vector<vector<int>>matriz)
{
    int menor, mayor, posicion_menor1=0, posicion_menor2=0, posicion_mayor1=0, posicion_mayor2=0;
    menor=matriz[0][0]; 
    mayor=matriz[0][0]; 
    for(int i=0; i<3; i++)
    {
        for(int i2=0; i2<3; i2++) 
        { 
            if(matriz[i][i2]<menor)
            {
                menor=matriz[i][i2];
                posicion_menor1=i;
                posicion_menor2=i2;
            }
            else{}
            if(matriz[i][i2]>mayor)
            {
                mayor=matriz[i][i2];
                posicion_mayor1=i;
                posicion_mayor2=i2;
            }
        }
    }
    cout<<"Menor: "<<menor<<" Posicion:"<< posicion_menor1<<", "<<posicion_menor2 <<endl<<"Mayor: "<<mayor<<" Posicion: " << posicion_mayor1<<", "<<posicion_mayor2  <<endl;
}

int main()
{
    vector<vector<int>> matriz;
    vector<int> a = {1, 2, 3}, b = {4, 5, 6}, c = {7, 8, 9};
    matriz.push_back(a);
    matriz.push_back(b);
    matriz.push_back(c);
    mostrar_matriz(matriz);
}