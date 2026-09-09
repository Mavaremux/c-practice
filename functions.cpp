#include <iostream>
using namespace std;


void sayhi(string name, int age)  { //declaramos como en python los valoresque recibira la funcion


    cout <<" hello " << name  << " you are "<<  age << "years old"; 
}
int main()

{
    
string name;
int age;

    //cout << "top";
    cout << "escribe tu nombre: ";

    cin >> name;
    cout << "escribe tu edad: ";

    cin >> age;

    sayhi(name , age);
   // cout << "bottom";
    
    return 0;
}