#include <iostream>

using namespace std;



int main(){
    
int num;
cout << "ingresar numero:"<<endl;
cin>>num;
if (num<-1){
    while (num<-1){
        num=num+2;
    }
}    
while (num>=1){
    num=num-2;
}
if (num==0){
    cout<<"el numero es par "<<endl;
}
else{
    cout<<"el numero es impar "<<endl;
}
    
}