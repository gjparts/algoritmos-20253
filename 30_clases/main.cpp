#include<iostream>
#include "Arbol.h"
using namespace std;

int main(){
	//instanciar un nuevo objeto de la clase Arbol
	//en C++ los objetos son variables apuntadas al Heap
	//la cual es la porcion de memoria mas grande, en C++
	//se recomienda siempre apuntar los objetos al Heap.
	
	//ar1 es el objeto, Arbol es la clase
	Arbol *ar1 = new Arbol();
	//asignar valores a los atributos de ar1:
	ar1->ancho = 12;
	ar1->alto = 25;
	ar1->especie = "Pino";
	
	//leer los valores de un objeto:
	cout << "ar1 ---------------------------" << endl;
	cout << "Especie: " << ar1->especie << endl;
	cout << "Altura: " << ar1->alto << endl;
	cout << "Ancho: " << ar1->ancho << endl;
	
	return 123;
}
