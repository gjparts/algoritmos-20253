#include<iostream>
using namespace std;

int main(){
	/*Arreglo o Array
	Es una estructura de datos estatica, secuencial y homogenea que agrupa
	un conjunto de valores.
	Estatica: porque no puede cambiar su tamaï¿½o
	Secuencial: todos sus elementos se guardan de forma consecutiva en la memoria
	Homogenea: todos sus elementos son del mismo tipo
	*/
	//un array al ser secuencial necesita de espacio consecutivo en memoria
	//por lo tanto no debe haber estorbos en la memoria para el espacio que
	//necesite reservar. Si no se cuentra dicho espacio el programa va a fallar. (crash)
	//int a[5000000];
	
	//existen dos formas de declarar arreglos en c++
	//1) crear un arreglo sin inicializar
	//2) crear un arreglo prellenado e inicializado
	
	//1) arreglo sin inicializar
	int arreglo1[10];
	//imprimir el contenido de dicho arreglo
	for( int i = 0; i < 10; i++ ){
		cout << arreglo1[i] << endl;
	}
	//c++ cuando se declara un arreglo sin inicializar normalmente puede contener
	//remanentes (basura) dejados por otros programas en la memoria.
	
	//2) arreglo inicializado o prellenado
	int arreglo2[] = { 5, 7, 100, -6, 12, 111, 9 };
	//imprimir el contenido de dicho arreglo
	cout << "*****************************" << endl;
	for( int i = 0; i < 7; i++ ){
		cout << arreglo2[i] << endl;
	}
	
	//si tengo un arreglo sin inicializar y quiere colocarle valores, como hago?
	//para ello puede asignarle valores a cada elemento del arreglo por ejemplo
	//usando una estructura de repeticion:
	for( int i = 0; i < 10; i++ ){
		arreglo1[i] = 0; //colocar cero a cada elemento de arreglo1
	}
	//imprimir el contenido de arreglo1
	cout << "*****************************" << endl;
	for( int i = 0; i < 10; i++ ){
		cout << arreglo1[i] << endl;
	}
	
	//un arreglo en c++ es una coleccion de apuntadores de memoria
	//si Usted imprime un arreglo sin definir un indice lo que obtendra
	//es la direccion de memoria del primer elemento del arreglo
	cout << "direccion de memoria de arreglo1: " << arreglo1 << endl;
	cout << "direccion de memoria de arreglo2: " << arreglo2 << endl;
	
	//saber en que direccion comienza y termina cualquier variable:
	cout << "arreglo1 comienza en " << begin(arreglo1) << endl;
	cout << "arreglo1 termina en " << end(arreglo1) << endl;
	/*Para poder utilizar begin y end debera configurar su compilador para soportar
	minimo la version 11 del lenguaje c++ que es donde nacen estas instrucciones.*/
	
	//begin y end sirve para saber el tamaño de un arrelgo:
	cout << "Tamanio de arreglo1: " << end(arreglo1)-begin(arreglo1) << endl;
	cout << "Tamanio de arreglo2: " << end(arreglo2)-begin(arreglo2) << endl;
	
	//imprimir el contenido de arreglo1
	cout << "*****************************" << endl;
	for( int i = 0; i < end(arreglo1)-begin(arreglo1); i++ ){
		cout << arreglo1[i] << endl;
	}
	//imprimir el contenido de arreglo2
	cout << "*****************************" << endl;
	for( int i = 0; i < end(arreglo2)-begin(arreglo2); i++ ){
		cout << arreglo2[i] << endl;
	}
	
	//el resultado de restar end-begin se puede almacenar en una variable int o long
	int x = end(arreglo2)-begin(arreglo2);
	cout << "Tamanio del arreglo2: " << x << endl;
	
	return 777;
}





