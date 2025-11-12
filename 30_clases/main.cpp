#include<iostream>
#include "Arbol.h"
#include "Persona.h"
#include "Mascota.h"
#include "Empleado.h"
#include "CuentaAhorro.h"
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
	Persona *per2 = new Persona("Gerardo",65,'M');
	cout << "per2 -----------------------" << endl;
	per2->imprimir();
	
	Persona *per3 = new Persona("Irene",42);
	cout << "per3 -----------------------" << endl;
	per3->imprimir();
	per3->saludar(true);
	per3->saludar(false);
	
	cout << per1->terceraEdad() << endl;
	cout << per2->terceraEdad() << endl;
	cout << per3->terceraEdad() << endl;
	
	Mascota *mas1 = new Mascota();
	mas1->imprimir();
	
	//recuerden que puede alterar los atributos de un objeto existente:
	mas1->nombre = "Naranjoso";
	mas1->especie = "Gato";
	mas1->imprimir();
	
	Mascota *mas2 = new Mascota("Killer","Canino",2,'M',true);
	mas2->imprimir();
	
	Empleado *em1 = new Empleado("Gerardo",43,'M',12000,'T');
	//puedo leer la edad de em1?
	//cout << em1->edad << endl;
	//puedo escribir la edad de em1?
	//em1->edad = 99;
	//ambos casos no se puede porque edad es private, estos solo se pueden
	//leer o escribir desde dentro de la clase o desde fuera por medio de
	//sus metodos get y set:	
	em1->setEdad(18);
	cout << "edad de em1: " << em1->getEdad() << endl;
	em1->imprimir();
	
	cout << "------------------------------" << endl;
	CuentaAhorro *a1 = new CuentaAhorro("Gerardo","7777");
	cout << "Saldo en a1: " << a1->getSaldo() << endl;
	a1->depositar(2000);
	cout << "Saldo en a1: " << a1->getSaldo() << endl;
	a1->depositar(500);
	cout << "Saldo en a1: " << a1->getSaldo() << endl;
	a1->retirar(800);
	cout << "Saldo en a1: " << a1->getSaldo() << endl;
	
	return 123;
}








