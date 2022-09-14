#include <iostream>
#include <vector>
using namespace std;
void cambiar(vector<vector<int>> matriz1, vector<vector<int>> matriz2)
{
    int mayor1 = 0, mayor2 = 0, menor1 = 0, menor2 = 0;
    bool parar1 = false, parar2 = false;

    menor1 = matriz1[0][0];
    mayor1 = matriz1[0][0];
    menor2 = matriz2[0][0];
    mayor2 = matriz2[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz1[i][j] < menor1)
            {
                menor1 = matriz1[i][j];
            }
            if (matriz1[i][j] > mayor1)
            {
                mayor1 = matriz1[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz2[i][j] < menor2)
            {
                menor2 = matriz2[i][j];
            }
            if (matriz2[i][j] > mayor2)
            {
                mayor2 = matriz2[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 && !parar1 &&!parar2; j++)
        {
            if (matriz1[i][j] == menor1)
            {
                matriz1[i][j] = mayor2;
                parar1=true;
            }
            if (matriz1[i][j] == mayor1)
            {
                matriz1[i][j] = menor2;
                parar2=true;
            }
        }
    }

    parar1=false;
    parar2=false;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 && !parar1 &&!parar2; j++)
        {
            if (matriz2[i][j] == menor2)
            {
                matriz2[i][j] = mayor1;
                parar1=true;
            }
            if (matriz2[i][j] == mayor2)
            {
                matriz2[i][j] = menor1;
                parar2=true;
            }
        }
    }
}

int main()
{

    vector<int> num;
    int numero;
    vector<vector<int>> matriz1;
    vector<vector<int>> matriz2;
    vector<int> a = {5, 2, 1}, b = {7, 9, 4}, c = {11, 3, 21}, d = {6, 7, 1}, e = {5, 5, 4}, f = {3, 8, 1};
    matriz1.push_back(a);
    matriz1.push_back(b);
    matriz1.push_back(c);
    matriz2.push_back(d);
    matriz2.push_back(e);
    matriz2.push_back(f);
    cambiar(matriz1, matriz2);
}
/*
Realizar una función que tome por parámetro dos matrices de 3x3, A y B e intercambie el
valor mínimo de A por el valor máximo de B y viceversa.Luego debe imprimir ambas matrices.
*/

/*
int matriz[][5], int filas
*/