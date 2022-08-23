#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


struct animales{
    bool respira;
    int ojos;
};

/*Usando el struct Punto, se quiere implementar una función que 
reciba un vector de puntos y retorne si hubo al menos un par de puntos iguales o no.*/

vector<animales> cargar_vector(){
    animales p1;
    vector<animales> vector_animales (10);
    int cont=1, cont2=0, ojos;
    string resp;
    bool b_resp=false;



    while(cont<11){
        cout<<"Animal "<<cont<<":"<<endl;
        cout<<" ¿respira? Si/si/S/s o cualquier otra letra para negar"<<endl;
        cin>>resp;
        cout<<"¿Cuantos ojos tiene?"<<cont<<endl;
        cin>>ojos;
        if (resp=="Si" || resp=="si" || resp=="S" || resp=="s"){
            b_resp=true;
        }
        cont++;
        p1.respira=b_resp;
        p1.ojos=ojos;
        vector_animales[cont2]=p1;
        cont2++;

    }
        return vector_animales;
}





int main(){
    vector<animales> animal;
    animal=cargar_vector();
    


}