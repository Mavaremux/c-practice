#include <iostream>
using namespace std;

int main(){
	int guessnumber = 7;
	int guess;
	int guesscount = 0;// contamos las veces que intento adivinar
	int guesslimit = 3; //limite de intentos
	
	
	bool outofguesses = false; //me dice si ya quedo fuera de juego o aun puede jugar
	while(guessnumber != guess && !outofguesses){
		if(guesscount <= guesslimit){
			cout << "Type guess";
		cin >> guess ;
		guesscount ++;
		}
		else {
			outofguesses = true;
			
		}
	}
	if(outofguesses = true) {
		
		cout << "You lose" << endl;
	}
		
	else{
		
			cout << "you win" << endl;
	
	}
		
	return 0;
}