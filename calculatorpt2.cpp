#include <iostream>
#include <cmath>
using namespace std;

int main() //poema
{
    string color, sentence ,celebrity;
    cout << "Ingresa un color: ";
    getline(cin, color);
    cout << "Ingresa una palabra: ";
    getline(cin, sentence);
    cout << "Ingresa el nombre de la que te gusta: ";
    getline(cin, celebrity);
    cout << "Las rosas son "<< color << endl;
    cout << "El cielo es"<< sentence << endl;
    cout << "Te amo" << celebrity << endl;
//el programa se basa en recibir difernetes inputs y ya , nose por que lo llame calculadora

    
    return 0;
}