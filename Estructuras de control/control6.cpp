#include <iostream>

using namespace std;

int main(){
    int num_me;
    int num_ma;
    cout<<"ingreasar numero menor"<<endl;
    cin>>num_me;
    cout<<"ingresar numero mayor"<<endl;
    cin>>num_ma;
    while (num_me>=num_ma){
        cout<<"no son valores validos vuelve a introducirlos\n";
        cout<<"ingreasar numero menor"<<endl;
        cin>>num_me;
        cout<<"ingresar numero mayor"<<endl;
        cin>>num_ma;
    }
    while (num_me!=num_ma){
        cout<<num_me<<endl;
        num_me=num_me+1;
    }
    cout<<num_ma<<endl;
}



