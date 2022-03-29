#include <iostream>

using namespace std;


int main(){
    int men;
    int may;
    cout<<"ingresar numero menor"<<endl;
    cin>>men;
    cout<<"ingresar numero mayor"<<endl;
    cin>>may;
    while (men<=may){
        cout<< may<<endl;
        may=may-1;
    }
}
