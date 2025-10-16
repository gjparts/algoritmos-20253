#include<iostream>
#include "funciones.h" 	//se usa comillas dobles cuando include
						//se usa para un archivo de funciones separado
						//tiene que estar el mismo folder el archivo
						//cpp y el archivo h
//funciones en archivo externo:
//se coloca todas las funciones en un archivo o archivos h en el mismo
//folder que el programa.
//la funcion main() esta en el programa cpp
//las funciones extra estan en los archivos h
using namespace std;

int main(){
	cout << sumar(7,3) << endl;
	cout << restar(8,1) << endl;
	cout << sumar(2.2,3.4) << endl;
	cout << sumar(4,5,7) << endl;
	
	return 777;
}

