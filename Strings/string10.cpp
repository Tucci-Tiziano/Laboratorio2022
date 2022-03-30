#include <iostream>

using namespace std;

int main(){
    string palabra1;    
    string palabra2;   
    int num1;
    int num2;
    int lugar1; 
    int lugar2;
    int cont_right;
    int cont_fail;
    cout<<"ingrese la palabra 2\n";
    cin>>palabra2;
    cout<<"ingrese la palabra 1\n";
    cin>>palabra1;
    num1=palabra1.size();
    num2=palabra2.size();
    lugar1=num1-1;
    lugar2=num2-1;
    while (lugar2<num2){
        while (lugar1<num1){
            if ((palabra2[lugar2])==(palabra1[lugar1])){
                cont_right++;
            }
            else{
                cont_fail++;
            }
            lugar1++;
        }
        lugar2++;
        lugar1=0;
    }
    if (cont_right>=2){
        cout<<"la palabra 2 contiene a la 1\n";
    }
    else{
        cout<<"la palabra 2 no contiene a la 1\n";
    }
}
