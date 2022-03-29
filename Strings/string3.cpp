#include <iostream>

using namespace std;

int main()
{
    string palabra;
    int num;
    int lugar;
    char letra;
    cout << "ingrese una palabra\n";
    cin >> palabra;
    cout << "ingrese una letra\n";
    cin >> letra;
    num = palabra.size();
    lugar = num - 1;
    palabra[lugar] = letra;
    cout << palabra << endl;
}
