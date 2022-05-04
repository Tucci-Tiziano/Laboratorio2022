#include <iostream>
using namespace std;

int op(int a, int b){
    a=a+b;
    return a;
}


int main(){
    int a;
    int b;
    cout<<"ingresar valor 1: "<<endl;
    cin>>a;
    cout<<"ingresar valor 2: "<<endl;
    cin>>b;
    int sum=op(a, b);
    cout<<sum<<endl;
} 