#include <iostream>

using namespace std;

int hombres;
int mujeres;
int total;
float porcentajehombres;
float porcentajemujeres;

int main(){

cout<<"ingresar numero de hombres"<<endl;

cin>>hombres;

cout<<"ingresar numero de mujeres"<<endl;

cin>>mujeres;

total = hombres+mujeres;


porcentajehombres = hombres*100/total;
porcentajemujeres = mujeres*100/total;

cout<<"el porcentaje de mujeres es: %";

cout<< porcentajemujeres<<endl;

cout<<"el porcentaje de hombres es: %";

cout<< porcentajehombres<<endl;
}
