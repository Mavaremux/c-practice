#include <iostream>
using namespace std;

int main()
{



    int sum = 0 , value = 10;
    while (value <= 50){
        sum += value;
        --value;
        cout << "Contando los numeros del uno al 10 "<<  endl;
        cout << sum << endl;
    }


    return 0;
}

//el while tiene una estructura como while(condition)
// ++ suma 1 a la variable
//-- resta 1 a la variable