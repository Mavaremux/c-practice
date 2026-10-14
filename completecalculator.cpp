#include <iostream>
using namespace std;

int main() // four functon calculator 

{
	int num1 , num2;
	char op;
	cout << "Enter first number: " << endl;
	cin >> num1;
	cout << "Enter operator :" << endl;
	cin >> op;
	
	cout << "Enter second number: " << endl ;
	cin >> num2;
	
	if(op == '+') {
		cout << "El resultado es " << num1 + num2 << endl;
	}
	else if (op == '-') {
		cout << "El resultado es " << num1 - num2 << endl;
	}
		
	else if (op == '*') { 
		cout << "El resultado es " << num1 * num2 << endl;
	}
	
	
		
	else if (op== '/' ) {
		cout << "El resultado es " << num1 / num2 << endl;
	}

	else {
		cout << "Error : Operator" << endl;
	}
	
	
	return 0;
}