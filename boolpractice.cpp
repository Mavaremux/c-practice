#include <iostream>
using namespace std;

int main()
{
	
	bool eshombre = false;
	bool istall = true;
	
	if(eshombre and istall) { //si usamos el operador || podemos evaluar ambas condiciones y si una es verdadera se ejecuta el codigo (operador or)
	cout << "Eres hombre , ademas alto" <<  endl;
	}
	else if (eshombre and !istall) //! es operador de negacion , podemos evaluar hombres bajos) is not tall
	{
	cout << "Eres un hombre bajo" << endl;
	
	}
	else if (!eshombre and istall)
	{
		cout << "No eres hombre y eres alto" << endl;
			}		
	else {
	cout << "No eres hombre " << endl;
	}
		
	return 0;
}