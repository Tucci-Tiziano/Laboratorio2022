#include <iostream>
using namespace std;

int op(int a, int b, int c, int cont){
    while (cont<b){
        c=c*a;
        cont++;
    }
     
    return c;
   
}
int main(){
    int a;
    int b;
    int c;
    int cont=1;
    cout<<"ingresar valor 1: "<<endl;
    cin>>a;
    cout<<"ingresar valor 2: "<<endl;
    cin>>b;
    c=a;
    int ab=op(a,b,c,cont);
    cout<<ab<<endl;
} 