#include<iostream>
using namespace std;

/*Funciones sin prototipado: las funciones se declaran e implementan antes de main*/

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

int main(){
	cout << sumar(7,3) << endl;
	cout << restar(8,1) << endl;
	cout << sumar(2.2,3.4) << endl;
	cout << sumar(4,5,7) << endl;
	
	return 777;
}

