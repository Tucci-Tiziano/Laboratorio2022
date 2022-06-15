#include <iostream>
#include <vector>
using namespace std;

int main(){
    int cont=0;
    vector <int> vector1(3, 10);
    vector1[1]=2;
    cout<<vector1.size()<<endl;
    while (cont<3){
        cout<<vector1[cont]<<endl;
        cont++;
    }
    vector1.push_back(11);
    cout<<vector1.size()<<endl;
}