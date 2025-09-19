#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

int main(){
	/*
	while(true){
		cout << "La hora en milisegundos es: " << time(NULL) << endl;
		system("timeout 1");
		system("cls");
	}
	*/
	
	//generacion de numero aleatorios
	//disparar un generador de numeros en base a un valor semilla (seed)
	//usaremos como seed la fecha y hora de la computadora
	srand(time(NULL));
	
	//generar un numero al azar entre 0 y 6
	//cout << rand()%(6-0+1)+0 << endl;
	cout << rand()%(7) << endl;
	
	//generar un numero al azar entre 8 y 95
	cout << rand()%(95-8+1)+8 << endl;
	
	//generar 10 numeros al azar entre 11 y 40
	for(int i = 1; i <= 10; i++)
		cout << rand()%(40-11+1)+11 << endl;
	
	//rand()%(MAX-MIN+1)+MIN
	
	return 876;
}
