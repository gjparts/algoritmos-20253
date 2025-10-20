//Archivo externo de funciones
#include<iostream>
#include<stdexcept>
#include<cmath>
using namespace std;

/*1. Escriba una funcion llamada elevar que reciba
dos numeros long, uno para la base y otro para la potencia,
la funcion debe retornar un long resultado de elevar el numero
base a la potencia sin utilizar la funcion pow.
-> la potencia no puede ser un numero negativo. (guard clause)*/ 
long elevar(long base, long potencia){
	//validacion de entradas (guard clause):
	if( potencia < 0 )
		throw invalid_argument("potencia no puede ser negativa"); //termina la funcion
	//throw forma parte stdexcept, permite lanzar una excepcion
	//la cual es capturable por medio de try-catch
	//throw termina la ejecucion de una funcion sin necesidad de hacer return.
	
	long tmp = 1;
	for( int i = 1; i <= potencia; i++ )
		tmp = tmp * base;
	
	//cuando una funcion tiene tipo definido debe llevar return
	return tmp;
}

/*2. Defina una funcion llamada hipotenusa la cual debe retornar
la longitud de la hipotenusa de un triangulo rectangulo, dicha funcion
recibira los lados del triangulo.

La funcion trabajara con numeros double, aqui ya tiene permiso de usar sqrt() y pow()*/
double hipotenusa(double a, double b){
	return sqrt(pow(a,2)+pow(b,2));
}






