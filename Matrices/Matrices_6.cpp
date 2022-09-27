#include <iostream>
#include <vector>
using namespace std;
void funcion(vector<vector<int>> matriz)
{
    int size;
    vector<int> nums;
    for(int i=0; i<3; i++){
        for( int j=0; j<3; j++){
            if(i==j){
                nums.push_back(matriz[i][j]);
            }
        }
    }
    size=nums.size()-1;
    for(int i=0; i<3; i++){
        for( int j=0; j<3; j++){
            if(i==j){
                matriz[i][j]=nums[size];
                size--;
                cout<<matriz[i][j]<<endl;
            }
        }
    }
}

int main()
{
    vector<vector<int>> matriz1;
    vector<int> a = {1, 2, 3}, b = {4, 5, 6}, c = {7, 8, 9};
    matriz1.push_back(a);
    matriz1.push_back(b);
    matriz1.push_back(c);
    funcion(matriz1);
}
/*
Realizar una función que tome por parámetro una matriz de 3x3, invierta su diagonal principal
 y la muestre por pantalla. La diagonal principal en una matriz de 3x3 es:
  [1][2][4] [1][5][3] [4][2][7]
*/