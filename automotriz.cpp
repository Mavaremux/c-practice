//inventario autommotriz , verifica si el carro esta apto para la venta tomando en cuenta que no se aceptan carros menores de 2005 o si tienen mas de 400k kilometros

#include <iostream>
using namespace std;
int main(){
	int kilometraje = 0;
	int anomodelo;
	string modelo;
	
	while(true){
		cout << "KARRO OPERATIVE CORPORATION" << endl;
		cout << "Ingrese el modelo del carro que quiere publicar con nosotros" << endl;
		cin >> modelo ;
		cout << "Ingrese el ano del carro" << endl;
		
		cin >> anomodelo ;
		cout << "Ingrese el kilometraje (kM) : " << endl;
		cin >> kilometraje;
		
		if(kilometraje < 0){
			cout << "Error, kilometraje invalido" << endl;
			continue;
		}else{
			if(anomodelo < 2005){
				cout << "Error , no podemos vender carros viejos" << endl;
				break;
		}
		else {
			cout << "Tu carro" << modelo << "ano" << anomodelo << "fue publicado exitosamente" << endl;
			continue ;
		}
		}
		}
		return 0;}

