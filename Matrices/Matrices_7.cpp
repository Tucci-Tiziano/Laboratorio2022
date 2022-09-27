#include <iostream>
#include <vector>
using namespace std;
void funcion(vector<vector<int>> matriz1, vector<vector<int>> matriz2)
{
    int num;
    bool acier=false;
    vector<int> nums;


    if(matriz1!=matriz2){
        for(int i=0; i<3; i++){
            for( int j=0; j<3; j++){
                for(int l=0; l<3; l++){
                    for( int z=0; z<3; z++){
                    
                        if(matriz1[l][z]==matriz2[i][j]){
                        nums.push_back(matriz1[l][z]);
                        }
                    }
                }
            }
        }
    }
    else{
        cout<<"son iguales"<<endl;
    }

    for(int i=0; i<nums.size(); i++){
        acier=false;
        num=nums[i];
        for(int j=i+1; j<nums.size(); j++){
            if(num==nums[j]){
                acier=true;
            }
        }
        if(!acier){
            cout<<nums[i]<<endl;
        }
    }
}
int main()
{
    vector<vector<int>> matriz1;
    vector<vector<int>> matriz2;
    vector<int> a = {5, 2, 1}, b = {7, 9, 4}, c = {11, 3, 21}, d = {6, 7, 1}, e = {5, 5, 4}, f = {3, 8, 1};
    matriz1.push_back(a);
    matriz1.push_back(b);
    matriz1.push_back(c);
    matriz2.push_back(d);
    matriz2.push_back(e);
    matriz2.push_back(f);
    funcion(matriz1, matriz2);
}
/*
Realizar una función que tome por parámetro dos matrices de 3x3 e imprima por pantalla 
todos sus elementos en común.
*/