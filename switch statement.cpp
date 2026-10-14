//programa que convierta numeros en dias de la semana
#include <iostream>
using namespace std;

string getdayofweek(int daynum) {
	string dayname;
	
	switch (daynum) {
			case 0:
		dayname = "Sunday";
		break;
		
	

	case 1: 
		dayname = "Monday";
		break;
	
	
		
	case 2: 
	
	
		dayname = "Tuesday";
		break; 
	case 3: 
		dayname = "Wednesday";
		break;
	
		
	case 4: 
		dayname = "Thursday";
		break;

	
	case 5: 
		dayname = "Fryday";
		break;
	
		
	case 6:
			dayname = "Saturday";
		break;
	
	
	
	default:  //manejo de errores del switch statement
		dayname = "Invalid day number";
	//podriamos seguis haciendo elses if 7 veces y 8 para validar el erorr pero usaremos el switch statement
	
	//a lot cleaner then 7 elses if
	
	
	
	
	}
	return dayname;
	
	
}

int main ()
{
	
	cout << "El dia es"  << getdayofweek(0) << endl;
	
	
	return 0;
}