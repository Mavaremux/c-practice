#include <iostream>
using namespace std;

int main()
{   

    string phrase = "NexoTech";
    phrase[0] = 'P'; //podemos cambiar letras como en python
    //cout << phrase; 

    cout << phrase.find("Tech", 0) <<endl;
    
    //cout << phrase.substr(8, 3) <<endl;
    //cout << phrase.length()<<endl;  
    //lenght funciona como len en python
    // las posiciones van desde 0 , como python

    string subphrase;
    subphrase =  phrase.substr(0 , 2);
    cout << subphrase <<endl;








    //TRABAJANDO CON FUNCIONES EN STRINGS 








    //cout << "Hola, trabajando con strings, este string se unira si no uso endl: \n"; //\n significa salto de linea
    //cout <<" Linea 1 concatenada" << endl;

    return 0;
}