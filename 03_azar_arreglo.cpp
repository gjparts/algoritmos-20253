#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

int main(){
	/*Haga un programa que declare un arreglo de numeros enteros de 15 posiciones.
	Debera llenar dicho arreglo con numeros al azar entre 8 y 103 (puede haber numeros repetidos)
	Imprima el contenido de dicho arreglo.*/

	srand(time(NULL));
	
	int arreglo[15];
	for( int i = 0; i < end(arreglo)-begin(arreglo); i++ ){
		//asignar el numero aleatorio a cada elemento del arreglo
		arreglo[i] = rand()%(103-8+1)+8;
		cout << arreglo[i] << endl;
	}
	
	return 1234;
}
