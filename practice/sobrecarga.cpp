#include <iostream>

using namespace std;

int main() {
    //calculo de series efectivas teniendo umbral de volumenoptimopor serie, volumentotalporserie
	float peso;
	int reps;
	float volumenoptimoporserie = 500;
	float volumentotalporserie = 0;
	int seriesefectivas;
    while (true){
    	
    	cout <<"CALCULO DE VOLUMEN OPTIMO POR SERIE" << endl ;
    	cout <<"Ingrese el peso de la serie: " << endl;
    	cin >> peso ; 
    	cout << "Ingrese las repeticiones de la serie" << endl;
    	cin >> reps;
    	volumentotalporserie = reps * peso;
    	
    	if(volumentotalporserie >= volumenoptimoporserie){
    		cout <<"Buena serie, efectiva +1" << endl;
    		seriesefectivas ++;
    		cout << "LLevas " << seriesefectivas << "series efectivas vamos"<< endl;
    		continue; 
		} else {
			cout << "No llegaste al volumen optimo, tu volumen fue de " << volumentotalporserie << "y el volumen a alcanzar era" << volumenoptimoporserie << endl;
			cout << "LLevas " << seriesefectivas << "series efectivas, tu puedes " << endl;
			continue; 
		}
		if(seriesefectivas < 0) {
			break;
		}
		else if (peso < 0){
			cout << "Error" << endl;
			break;
		}
		else{continue;
		}
		if (reps < 0){
			cout << "Error" << endl;
			break;
		}
		else {
			continue;
		}
}
    return 0;
}