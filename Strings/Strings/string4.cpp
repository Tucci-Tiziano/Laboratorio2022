#include <iostream>

using namespace std;

int main(){
    string palabra;    
    int num;
    int tam;
    int lugar=0;
    char letra;
    int cont_min=0;
    int cont_mas=0;
    int cont_otros=0;
    cout<<"ingrese una palabra\n";
    cin>>palabra;
    tam=palabra.size();
    while (lugar<tam){    
        letra=palabra[lugar];
        num=letra;
        bool mayus = (num<=90 && num>=65);
        bool minus = (num>=97 && num<=122);
        if (mayus){
            cont_mas++;
        }
        else if (minus) 
        {
            cont_min++;
        }
        else {
            cont_otros++;
        }

        lugar++;
    }
    cout<<"cantidad de mayusculas son:" << cont_mas <<endl;
    cout<<"cantidad de minusculas son:" << cont_min <<endl;
    cout<<"otros:" << cont_otros <<endl;
}



 