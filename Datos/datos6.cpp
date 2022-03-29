#include <iostream>
using namespace std;
int main(){
 
 char let;
 int num;
 cout<<"ingrese una letra\n";
 cin>>let;
 num=let;
 bool mayus = (num<=90 && num>=65);
 bool minus = (num>=97 && num<=122);
 bool si = (mayus || minus);
 while (! si) {
    cout<<"porfavor introduzca una letra\n";
    cin>>let;
    num=let;
    mayus = (num<=90 && num>=65);
    minus = (num>=97 && num<=122);
    si = (mayus || minus);
 }
 if (mayus) {
        cout<<"la letra esta en mayuscula\n";
    }
    else if (minus) {
        cout<<"la letra esta en minuscula\n";
    } 
}