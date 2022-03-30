#include <iostream>

using namespace std;

int main(){
    string palabra;    
    int num;
    int lugar1;
    int lugar2=0;
    int cont_mal=0;
    cout<<"ingrese una palabra\n";
    cin>>palabra;
    num=palabra.size();
    lugar1=num-1;
    while(lugar1>=0){
        if (palabra[lugar2]!=palabra[lugar1]){
            cont_mal++;
        }
        lugar1--;
        lugar2++;
    }
    if (cont_mal>0){
        cout<<"no son palindromos\n";
    }
    else {
        cout<<"son palindromos\n";
    }

}
