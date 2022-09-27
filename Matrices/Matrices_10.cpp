#include <iostream>
#include <vector>
using namespace std;
void funcion(vector<vector<int>> matriz)
{
    vector<int> vect= {0, 0, 0 ,0};

    for(int i=0; i<4; i++){
        for( int j=0; j<4; j++){
            vect[i]=vect[i] + matriz[j][i];
        }
    }

    for(int z=0; z<4; z++){
        cout<<vect[z]<<endl;
    }
}



int main()
{
    vector<vector<int>> matriz;
    vector<int> a = {1, 2, 3, 4}, b = {5, 6, 7, 8}, c = {9, 10, 11, 12}, d = {13, 14, 15, 16};
    matriz.push_back(a);
    matriz.push_back(b);
    matriz.push_back(c);
    matriz.push_back(d);
    funcion(matriz);
}

/*
Realizar una función que tome por parámetro una matriz de 4x4, sume sus filas como si fueran
vectores (recordar que en matemática, si sumamos los vectores (a,b,c)+(d,e,f) nos da (a+d,b+e,c+f)).
Debe almacenar la suma en un vector e imprimirlo.
*/