//Archivo externo de funciones
#include<iostream>
#include<stdexcept>
#define _USE_MATH_DEFINES //colocar esto antes del include de cmath para tener acceso a constantes como PI
#include<cmath>
#include<algorithm>
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

/*7. Escriba una funcion que devuelva true si un string esta escrito todo en mayusculas de lo contrario
que devuelva false.*/
bool enMayusculas(string str){
	string copia = str;
	transform(copia.begin(),copia.end(),copia.begin(),::toupper);
	if( str == copia )
		return true;
	else
		return false;
}

/*8. Escriba una funcion a la cual se le proporcione como parametros un string y un caracter
dicha funcion va a devolder un numero entero con la posicion de la primer coincidencia en
la que fue encontraro el caracter dado dentro del string proporcionado.
Si el caracter no fue encontrado; entonces devuelva -1.
No tiene permitido usar la funcion find() del string.*/
int encontrarCaracter(string str, char buscar){
	for( int i = 0; i < str.length(); i++){
		if( str[i] == buscar )
			return i;	//return termina con la funcion y retorna el valor de i
	}
	//si llego hasta aqui, quiere decir que no se encontró el caracter:
	return -1;
}

/*9. Escriba una funcion que reciba como parametros un string y un arreglo de string,
dicha funcion debera buscar el string proporcionado dentro del arreglo de string.
Si es encontrado entonces retornara un numero entero con la posicion de la primera coincidencia
donde se encontro, en caso de no encontrarlo entonces se retornará -1.*/
int buscarEnArreglo(string buscar, string arreglo[], int tamanio){
	//como no hemos visto arreglos; entonces no podemos medir el arreglo con end-begin
	//por lo tanto tuvimos que resolverlo agregando un tercer parametro a la funcion
	//donde se reciba el tamaño del arreglo
	for(int i = 0; i < tamanio; i++){
		if( arreglo[i] == buscar )
			return i; //retorna la posicion donde se encontro
	}
	//si llego aqui es porque no encontro nada
	return -1;
}











