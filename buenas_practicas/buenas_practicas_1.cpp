#include <iostream>

using namespace std;

int main(){
    int num_1;//no se inicializa porque despues el usuario le asigna un valor
    int posicion;//no se inicializa porque despues el programa le asigna un valor antes de su uso
    int total=0;
    int resto=0;
    cout<<"ingresar_numero\n";
    cin>>num_1;
    if (num_1<1){
        cout<<"ingresar un numero mayor a cero\n";
    }
    else{
        posicion=num_1-1;
        while (posicion>0){//lee cada numero atras del ingresado por el usuario y revisa si son impares
            resto=posicion % 2;
            (resto==1) ? total=total+posicion: 1-1;//revisa que sea impar Y acumula la suma de los numeros
            posicion--;
        }
        cout<<total<<endl;
    }
}