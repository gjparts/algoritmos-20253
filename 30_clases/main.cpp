#include<iostream>
#include "Arbol.h"
#include "Persona.h"
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
	
	//instanciar un nuevo objeto de clase Persona
	Persona *per1 = new Persona();
	//que pasaria si imprimo per1?
	cout << per1 << endl;
	//lo anterior es la direccion en memoria de per1
	
	//veamos que hay en los atributos de per1:
	cout << "per1 -----------------------" << endl;
	cout << "nombre: " << per1->nombre << endl;
	cout << "edad: " << per1->edad << endl;
	cout << "genero: " << per1->genero << endl;
	
	//observe que per1 fue construido con Persona() el cual es un constructor sin parametros.
	//observe que ar1 fue construido con Arbol() tambien un constructor sin parametros; pero en el caso
	//de Arbol si Usted va a ver la definicion de la clase notará que no programamos ningun constructor.
	//en C++, Java y C# si uno no programa ningun constructor para una clase; entonces el propio lenguaje
	//les va a definir un constructor sin parametros que llamará igual que la clase.
	
	//Persona tiene dos constructores, voy a usar el constructor con todos los parametros:
	Persona *per2 = new Persona("Gerardo",43,'M');
	cout << "per2 -----------------------" << endl;
	cout << "nombre: " << per2->nombre << endl;
	cout << "edad: " << per2->edad << endl;
	cout << "genero: " << per2->genero << endl;
	
	Persona *per3 = new Persona("Irene",42);
	cout << "per3 -----------------------" << endl;
	cout << "nombre: " << per3->nombre << endl;
	cout << "edad: " << per3->edad << endl;
	cout << "genero: " << per3->genero << endl;
	
	return 123;
}








