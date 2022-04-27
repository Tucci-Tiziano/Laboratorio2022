#include <iostream>
using namespace std;

void horario(int horas, int min){
    
    if (horas>12){
        if (min>5){
            cout<<"horas:"<<(horas-36)*(-1)<<endl;
            cout<<"minutos:"<<60-min<<endl;
        }
        else{
            cout<<"horas:"<<(horas-36)*(-1)<<endl;
            cout<<"minutos:"<<5-min<<endl;
        }
    }
    if (horas<=12){
        if (min>5){
            cout<<"horas:"<<24-horas<<endl;
            cout<<"minutos:"<<60-min<<endl;
        }
        else{
            cout<<"horas:"<<12-horas<<endl;
            cout<<"minutos:"<<5-min<<endl;
        }
    }
}

int main(){
    int horas;
    int min;
    cout<<"horas"<<endl;
    cin>>horas;    
    cout<<"minutos"<<endl;
    cin>>min;

    horario(horas, min);
}