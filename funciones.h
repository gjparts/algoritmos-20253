/*Archivo de funciones
La ventaja de tener nuestras funciones en un archivo separado
es que se pueden reutilizar en otros proyectos (programacion modular)
En C++ los archivos de funciones se conocen como librerias y llevan extension .h (header)
-> un archivo de funciones no tiene main()
-> un archivo de funciones debe tener los respectivos includes
*/
#include<iostream>
using namespace std;

//implementacion de funciones
int sumar(int a, int b){
	return a+b;
}
float restar(float a, float b){
	return a-b;
}
int sumar(int a, int b, int c){
	return a+b+c;
}
double sumar(double a, double b){
	return a+b;
}
