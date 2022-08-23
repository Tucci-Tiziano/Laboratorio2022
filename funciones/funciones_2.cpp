#include <iostream>
using namespace std;

void horario(int horas, int min){
    
    if (horas>12){
        if (min>5){
            cout<<"hora:"<<(horas-35)*(-1)<<endl;
            cout<<"minutos:"<<65-min<<endl;
        }
        else{
            cout<<"hora:"<<(horas-36)*(-1)<<endl;
            cout<<"minutos:"<<5-min<<endl;
        }
    }
    if (horas<=12){
        if (min>5){
            cout<<"hora:"<<11-horas<<endl;
            cout<<"minutos:"<<65-min<<endl;
        }
        else{
            cout<<"hora:"<<12-horas<<endl;
            cout<<"minutos:"<<5-min<<endl;
        }
    }
}

int main(){
    int horas;
    int min;
    cout<<"hora"<<endl;
    cin>>horas;    
    cout<<"minutos"<<endl;
    cin>>min;
    while (horas>24 || min>60 || horas<0 || min<0){
        cout<<"ingresar un valor valido\n"<<endl;
        cout<<"horas"<<endl;
        cin>>horas;    
        cout<<"minutos"<<endl;
        cin>>min;
    }
    horario(horas, min);
}