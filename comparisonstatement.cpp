#include <iostream>
using namespace std;




int getMax(int N1, int N2 , int N3) {
		
		int result;
		
	if (N1 >= N2 && N1 >= N3) {
		
		result = N1;
	
	}
	else if (N2 > N1 && N2 > N3)
		{
			
			
			result = N2;
		}
		
	else {
		result = N3;
	}
	
	return result;
}
	 // != not equal operator
	 // == equal operator
int main()
{
	
	int N1, N2, N3;
	cout << "Ingrese los numeros a comparar" << endl;
	cin >> N1;
	cin >> N2;
	cin >> N3;
	cout <<  "EL mayor es " << getMax(N1, N2 , N3) << endl;
	
	return 0;
}

//es recomendable no usar variables como result sino usar RETURN [variable] ej. return n1 y asi en todos los if