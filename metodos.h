//Archivo externo de funciones
#include<iostream>
#include<stdexcept>
#define _USE_MATH_DEFINES //colocar esto antes del include de cmath para tener acceso a constantes como PI
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

/*3. Escriba una funcion que reciba dos numeros enteros. Esta funcion va
a retornar true si el primero numero es multiplo del segundo numero, se retorna
false en caso contrario.*/
bool multiplo(int a, int b){
	//forma 1: programa estructurado clasico
	/*if( a%b == 0 )
		return true;
	else
		return false;*/
	
	//forma 2: usando operador ternario
	//return ( a%b == 0 ?  true : false );
	
	//forma 3: retornar el booleano de la expresion
	return ( a%b == 0 );
}

/*4. Escriba una funcion que imprima un rectangulo relleno de caracteres.
Dicha funcion recibira como parametros: ancho y largo del rectangulo
Tambien recibira como tercer parametro el caracter usado para dibujarlo.*/

//cuando se les pida una funcion que no retorna valor sino que solo hace un trabajo
//como en este caso imprimir; entonces se recomienda usar el tipo void
//las funciones void no estan obligadas a hacer return.
void imprimirRectangulo(int ancho, int largo, char caracter){
	for( int i = 1; i <= largo; i++ ){
		for( int j = 1; j <= ancho; j++ ){
			cout << caracter;
		}
		cout << endl; //nuevo renglon
	}
}

/*5. Haga una funcion que retorne el area de un circulo,
dicha funcion va a recibir el radio del mismo.
-> Usando sobrecarga de funciones haga que dicha funcion
   pueda trabajar con numeros float o con numeros double.*/
float areaCirculo(float radio){
	return M_PI*pow(radio,2);
}
double areaCirculo(double radio){
	return M_PI*pow(radio,2);
}

/*6. Escriba una funcion llamada minimo que devuelva el menor
de tres numeros. Dicha funcion debera poder trabajar con tres numeros enteros
o con tres numeros float o con tres numeros double.*/

/*Cuando nos encontramos con sobrecarga de funciones y notamos que estamos
repitiendo el mismo codigo muchas veces, lo mas recomendado es optimizar
esto por medio de reutilizacion de las funciones sobrecargadas.
Para ello van a colocar el codgo original en la funcion cuyo tipo de dato
sea el de mayor precision y las funciones cuyo tipo sea de menor precision
van a consumir a la de mayor precision.*/

//primero: la logica va en la funcion de mayor precision en este caso double
double minimo(double a, double b, double c){
	if( a <= b && a <= c ) return a;
	if( b <= a && b <= c ) return b;
	if( c <= a && c <= b ) return c;
}
//segundo: las funciones de menor precision reutilizaran a la de mayor precision
//por medio de la conversion de tipos
int minimo(int a, int b, int c){
	double x = a, y = b, z = c; //note que convertimos a double los valores int
	return minimo(x,y,z); //para que el minimo a llamar sea el de doubles (mayor precision)
}
float minimo(float a, float b, float c){
	double x = a, y = b, z = c;
	return minimo(x,y,z);
}











