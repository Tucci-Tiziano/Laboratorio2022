#include <iostream>
using namespace std;
int op(int a, int b){
    a=a%b;
    return a;
}
int main(){
    int a;
    int b;
    int c;    
    cout<<"ingresar valor 1: "<<endl;
    cin>>a;
    cout<<"ingresar valor 2: "<<endl;
    cin>>b;
    c=op(a,b);
    bool d= (c<1);
    if (d){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
} 