#include<iostream>
using namespace std;

int main(){
	/*Arreglo Bi-Dimensional
	Es un arreglo principal que apunta a otros arreglos secundarios
	-> Es un arreglo de arreglos.*/
	
	int arr[4][3];
	/*
	[0]*->[][][]
	[1]*->[][][]
	[2]*->[][][]
	[3]*->[][][]
	*/
	//normalmente lo visualizamos en forma de tabla (formato tabular)
	//formas de declarar estos arreglos
	//1) declarar sin inicializar
	double arr1[5][4];
	//2) declarar prellenado o inicializado
	//minimo se debe de poner cuantos elementos va a tener cada arreglo secundario
	//no necesita decir cuantos elementos va a tener el arreglo principal
	int arr2[][3] = {
		{ 111, 9, 36 },
		{ 8, -1, 100 },
		{ 777, 0, 123 },
		{ 10, 20, 30 }
	};
	
	cout << "Tamano del arreglo principal de arr2: " << end(arr2)-begin(arr2) << endl;
	cout << "Tamano de cada arreglo secundario de arr2: " << end(arr2[0])-begin(arr2[0]);
	
	//imprimir un arreglo bidimensional en formato tabular:
	cout << "**********************" << endl;
	//recorrer cada posicion en el arreglo principal
	for( int i = 0; i < end(arr2)-begin(arr2); i++ ){
		//recorrer cada posicion de cada arreglo secundario
		for( int j = 0; j < end(arr2[0])-begin(arr2[0]); j++ ){
			cout << arr2[i][j] << "\t";
		}
		cout << endl;
	}
	//que pasa si imprime solo arr2?
	//imprime la direccion de memoria del primer elemento del arreglo principal
	cout << "arr2: " << arr2 << endl;
	//que pasa si imprime arr2[0]?
	//imprime la direccion de memoria del primer elemento del arreglo principal
	cout << "arr2[0]: " << arr2[0] << endl;
	//imprimamos los demas sub-arreglos
	cout << "arr2[1]: " << arr2[1] << endl;
	cout << "arr2[2]: " << arr2[2] << endl;
	cout << "arr2[3]: " << arr2[3] << endl;
	//que pasa si imprime arr2[0][0]?
	cout << "arr2: " << arr2[0][0] << endl;
	
	//que pasa si imprime cada elemento de arr1?
	cout << "**********************" << endl;
	//recorrer cada posicion en el arreglo principal
	for( int i = 0; i < end(arr1)-begin(arr1); i++ ){
		//recorrer cada posicion de cada arreglo secundario
		for( int j = 0; j < end(arr1[0])-begin(arr1[0]); j++ ){
			cout << arr1[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 123;
}





