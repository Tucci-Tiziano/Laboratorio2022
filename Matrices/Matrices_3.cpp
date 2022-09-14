#include <iostream>
#include <vector>
using namespace std;
bool mostrar_matriz(vector<vector<int>>matriz, int num)
{
    bool encontrado=false;
    for(int i=0; i<3; i++)
    {
        for(int i2=0; i2<3; i2++) 
        { 
            if(matriz[i][i2]==num)
            {
                encontrado=true;
            }
        }
    }
    return encontrado;
}
void verificar(bool acierto){
    if(acierto){
        cout<<"el numero esta en la matriz"<<endl;
    }
    else{
        cout<<"el numero no esta en la matriz"<<endl;
    }

}

int main()
{
    int num;
    vector<vector<int>> matriz;
    vector<int> a = {1, 2, 3}, b = {4, 5, 6}, c = {7, 8, 9};
    matriz.push_back(a);
    matriz.push_back(b);
    matriz.push_back(c);
    cout<<"Escribir numero a buscar"<<endl;
    cin>>num;
    verificar(mostrar_matriz(matriz, num));
}