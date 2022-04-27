#include <iostream>
using namespace std;

void menu(string pal){
    cout<<"que operacion quiere realizar:"<<endl;
    cout<<"1 suma"<<endl << "2 resta" <<endl << "3 multiplicacion" << endl<< "4 divicion" << endl;  
}

int main(){
    string pal;
    menu(pal);
} 