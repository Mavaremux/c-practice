#include <iostream>
#include <cmath>
using namespace std;

int main ()
{

    cout << 49.292 + 5 << endl;
    cout << 4 + 5 / 5 << endl;
    cout << 10 % 2 << endl; // da el residuo

    int lnum = 6;
    double wnum = 5.32;

    cout << lnum <<endl;

    lnum ++; //incrementa 1
    cout << lnum << endl;
    










//experimento extraño de operaciones matematicas

cout << 10 / 3 << endl;
//devolvera 3 , pero entero , por que trabajamos con enteros 

cout << 10.0 / 3.0 << endl;

//devolvera el lresultado bien}

//probamos con variables


double floatnum;
floatnum = 10 / 3;
cout << floatnum << endl;

// no funciona por reglas de c ++ pero si funciona asi:

double anum = 10424 , bnum = 10023212;
cout << bnum / anum << endl; 
//asi si funciona



//usando cmath

//potencias funcion pow 

cout << pow(2, 5) << endl; //2 elevado a la 5

//potencias funcion sqrt (square root)
cout << sqrt(25) << endl; //2 elevado a la 5

//redondear numeros

cout << round(4.4) << endl;

//redondea al numero mas alto cercano
cout << ceil(4.1) << endl; //devuelve 5
//lo opuesto con floor
cout << floor(4.4) << endl;

// nos devuelve que numero es mas grande con fmax

cout << fmax(10, 10000) << endl;


//lo opuesto


cout << fmin(10, 10000) << endl;





    return 0;
}


