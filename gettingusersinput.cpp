#include <iostream>
using namespace std;

int main ()
{
    //string minombre;
    //cout << "escribe tu nombre: " ; //no usamos endl para que quede realista
    //cin >> minombre;
    //cout << "tu nombre es " << minombre << " , felicidades" <<endl;
     


    double edad;
    //cout << "Escribe tu edad: ";
    //cin >> edad;
    //cout << "Tienes " << edad << " anios  y te llamas    " << minombre ;

     //cout << "MENU INTERACTIVO " << endl; //practica extraña
      //cout << "1.- Callate"<<  endl;
      //cout << "2.- Aprende"<< endl;


      //usando getline con cin

      string subname;
      cout << "Enter your subname: "; 
      getline(cin , subname);
      cout << "Bienvenido " << subname << endl;


      //offtopic curso , podemos no importar la libreria using namespace std; y usamos std::cout

      std::cout << " hola" ; //sirve y se ve cool
  
      return 0;
      
}
