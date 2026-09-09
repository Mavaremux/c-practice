#include <iostream>

//para dificultar mi razonamiento y aprendizaje , no usare namespace
int main()
{
    double num1 , num2;

    std::cout << "Escribe el primer numero :  " << std::endl;
    std::cin >> num1;
    std::cout << "Escribe el segundo numero :  " << std::endl ;
    std::cin >> num2;

    
    std:: cout <<" Los numeros sumados seria: " << num1 + num2 << std::endl;  //al introducir numeros decimales grandes da resultados con notacion cientifica, hay que usar la libreria iomanip y la funcion fixed (precision de decimales) para poder hacer bien el resultado
    std:: cout <<" Los numeros restados seria: " << num1 - num2 << std::endl;
    

}