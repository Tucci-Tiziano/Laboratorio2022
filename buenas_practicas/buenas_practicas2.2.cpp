#include <iostream> 
using namespace std;
int main(){
    int num;
    int ant=1;
    int cont=0;
    int rest=0;
    cout<<"ingresar_numero\n";
    cin>>num;
    if (num<0){
        num=num*(-1);
    }
    else{
        while (ant<num){
            rest=num % ant;
            (rest!=0) ?   cont++ : 1+1;
            ant++;
        }
        (cont==num-2) ?  cout<<"es primo\n" :  cout<<"no es primo\n";
    }
}