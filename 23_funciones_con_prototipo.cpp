/*Funcion (Macro)
Son sub-rutinas o sub-programas que se pueden reutilizar
-> algunas funciones se diseñan para retornar un valor/objeto/estructura
-> algunas funciones se diseñan para unicamente hacer un trabajo
   y no retornar nada. (void)
   
En c++ existen muchas formas de trabajar con funciones:
1) por medio de prototipado de funciones
2) sin prototipado de funciones
3) a traves de un archivo externo
*/

/*Prototipado de funciones
Consiste en declarar las firmas de las funciones antes de main()
y despues de main() se hace la implementacion de las funciones*/

#include<iostream>
using namespace std;

//prototipos de funciones (firmas/signatures)
int sumar(int a, int b);
int sumar(int a, int b, int c);
double sumar(double a, double b);
//cuando tenemos varias funciones con el mismo nombre; pero diferente firma
//a esto se le conoce como sobrecarga de funciones (function overload)
float restar(float a, float b);

int main(){
	cout << sumar(7,3) << endl;
	cout << restar(8,1) << endl;
	cout << sumar(2.2,3.4) << endl;
	cout << sumar(4,5,7) << endl;
	
	return 777;
}

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
