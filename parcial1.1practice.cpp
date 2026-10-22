
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int horaentrada, horasalida, minentrada,minsalida,tiempotrabajado;
	float montoextra, montocobrar , tarifa;
	cout << "Ingresar la hora de entrada (en formato 23:59 )" << endl;
	cin >> horaentrada;
	cout << "Ingrese minutos que acompañan hora de entrada" << endl;
	cin >> minentrada;
	cout << "Ingrese la hora salida" << endl;
	cin >> horasalida;
	cout << "Ingrese minutos que acompañan hora de salida" << endl;
	cin >> minsalida;
	tiempotrabajado = (horasalida * 60 + minsalida) - (horaentrada *60 +minentrada);
	cout << "Ingrese su tarifa por hora" << endl;
	cin >> tarifa;
	montocobrar = tarifa *(tiempotrabajado / 60); //devuelve entero
	montoextra = (tiempotrabajado > 480) * tarifa *1.20*(tiempotrabajado -480);
	cout << "Las horas trabajadas es de " << tiempotrabajado / 60 << "horas y " << tiempotrabajado % 60 << "minutos , el monto  a cobrar es de " << montocobrar + montoextra << endl;
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}