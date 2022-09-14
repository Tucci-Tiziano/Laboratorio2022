#include <iostream>
#include <vector>
using namespace std;
void mostrar_matriz(vector<vector<int>> matriz)
{
    int suma = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int i2 = 0; i2 < 3; i2++)
        {
            suma = suma + matriz[i][i2];
        }
    }
    cout << "La suma es: " << suma << endl;
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