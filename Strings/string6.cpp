#include <iostream>

using namespace std;

int main(){
    string palabra1;    
    string palabra2;   
    int num1;
    int num2;
    int lugar1=0; 
    int lugar2=0;
    int cont_bien=0;
    int cont_mal=0;
    cout<<"ingrese la palabra 1\n";
    cin>>palabra1;
    cout<<"ingrese la palabra 2\n";
    cin>>palabra2;
    num1=palabra1.size();
    num2=palabra2.size();
    while (lugar1<num1 || lugar2<num2){
        if ((palabra1[lugar1])==(palabra2[lugar2])){
            cont_bien++;
        }
        else{
            cont_mal++;
        }
        lugar1++;
        lugar2++;
    } 
    if (cont_mal>0){
        cout<<"no son iguales"<<endl;
    }  
    else{
        cout<<"son iguales"<<endl;
    }
 }   

    
