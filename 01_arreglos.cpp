#include<iostream>
using namespace std;

int main(){
	/*Arreglo o Array
	Es una estructura de datos estatica, secuencial y homogenea que agrupa
	un conjunto de valores.
	Estatica: porque no puede cambiar su tamaño
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
	
	
		
	return 777;
}





