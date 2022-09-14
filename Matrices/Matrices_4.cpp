#include <iostream>
#include <vector>
using namespace std;
void mostrar_matriz(vector<vector<int>> matriz, vector<int> num)
{
    int cont = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j] == num[j])
            {
                cont++;
            }
            j++;
        }
    }
    if (cont == 16)
    {
        cout << "primer lugar" << endl;
    }
    else if (cont == 15)
    {
        cout << "segundo lugar" << endl;
    }
    else if (cont == 14)
    {
        cout << "tercer lugar" << endl;
    }
    else
    {
        cout << "perdiste" << endl;
    }
}

int main()
{
    vector<int> num;
    int numero;
    vector<vector<int>> matriz;
    vector<int> a = {1, 3, 4, 7}, b = {8, 11, 15, 16}, c = {18, 20, 21, 22}, d = {26, 30, 31, 35};
    matriz.push_back(a);
    matriz.push_back(b);
    matriz.push_back(c);
    matriz.push_back(d);
    cout << "Escribir los 16 numeros" << endl;
    for (int i = 0; i < 16; i++)
    {
        cout << "num " << i + 1 << ":" << endl;
        cin >> numero;
        num.push_back(numero);
    }
    mostrar_matriz(matriz, num);
}