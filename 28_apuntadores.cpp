/*Apuntadores con arreglos
Aqui es recomendado apuntar al Stack, ya que es la mejor forma de tener
acceso director a la memoria del arreglo lo que nos va a permitir
el uso de begin, end y acceso a cada item.*/
#include<iostream>
#include<cmath>
#include<stdexcept>
#include<ctime>
using namespace std;

//funcion void que imprime un arreglo de enteros el cual lo recibe como apuntador
template <size_t N>
void imprimirArreglo( int (&arr)[N] ){
	for( int i = 0; i < end(arr)-begin(arr); i++ ){
		cout << arr[i] << endl;
	}
}
//funcion void que imprime un arreglo de float el cual lo recibe como apuntador
template <size_t N>
void imprimirArreglo( float (&arr)[N] ){
	for( int i = 0; i < end(arr)-begin(arr); i++ ){
		cout << arr[i] << endl;
	}
}
//funcion void que imprime un arreglo de double el cual lo recibe como apuntador
template <size_t N>
void imprimirArreglo( double (&arr)[N] ){
	for( int i = 0; i < end(arr)-begin(arr); i++ ){
		cout << arr[i] << endl;
	}
}

//Haga una funcion void que reciba un arreglo apuntado de numeros float,
//dicha funcion va a alterar cada elemento del arreglo diviendolo a la mitad.
template <size_t N>
void arregloMitad( float (&arr)[N] ){
	for( int i = 0; i < end(arr)-begin(arr); i++ ){
		arr[i] = arr[i]/2;
	}
}

//haga una funcion void que reciba un arreglo apuntado de numeros double,
//dicha funcion va a alterar cada elemento del arreglo elevandolo al cubo
template <size_t N>
void arregloCubo( double (&arr)[N] ){
	for( int i = 0; i < end(arr)-begin(arr); i++ ){
		arr[i] = pow(arr[i],3);
	}
}

/*Haga una funcion void que reciba un arreglo apuntado de numeros enteros,
esta funcion va a alterar cada elemento del arreglo colocando un numero
al azar entre un valor minimo y un valor maximo los cuales se recibiran
como parametros de la funcion. O sea que la funcion va a recibir tres parametros:
el arreglo, el minimo y el maximo para los numeros al azar.
-> el valor minimo no debe superar al valor maximo (guard clause)*/
template <size_t N>
void arregloAzar( int (&arr)[N], int minimo, int maximo ){
	//Guard clause:
	if( minimo > maximo ) throw invalid_argument("minimo no debe superar a maximo");
	
	srand(time(NULL));
	for( int i = 0; i < end(arr)-begin(arr); i++ ){
		arr[i] = rand()%(maximo-minimo+1)+minimo;
	}
}

int main(){
	int numeros[] = {1,6,4,7,123,100,-5,7,-3,777};
	imprimirArreglo(numeros);
	cout << "**********************************" << endl;
	float precios[] = { 8, 7.2f, 3.1416f, 2.5f, 15.8f };
	imprimirArreglo(precios);
	cout << "**********************************" << endl;
	double valores[] = {6.7,8,9,100.45,2.2454};
	imprimirArreglo(valores);
	
	cout << "**********************************" << endl;
	arregloMitad(precios);
	imprimirArreglo(precios);
	
	cout << "**********************************" << endl;
	arregloCubo(valores);
	imprimirArreglo(valores);
	
	cout << "**********************************" << endl;
	int arreglo[7];
	arregloAzar(arreglo,4,23);
	imprimirArreglo(arreglo);
	
	return 123;
}
