#include<iostream>
#include "Nodo.h"
#include "ListaSimple.h"
using namespace std;

int main(){
	//crear una nueva Lista Simple
	ListaSimple *x = new ListaSimple();
	//imprimir lista antes de agregar Nodos
	x->print();
	cout << "length: " << x->getLength() << endl;
	//crear nuevos Nodos
	x->push("Rojo");
	x->push("Verde");
	x->push("Azul");
	x->push("Gris");
	//imprimir lista despues de agregar Nodos
	x->print();
	cout << "length: " << x->getLength() << endl;
	
	//imprimir el valor guardado en el primer Nodo
	cout << "Valor en el primer Nodo: " << x->getFirst()->value << endl;
	cout << "Valor en el ultimo Nodo: " << x->getLast()->value << endl;
	
	//prueba del metodo get
	cout << "Valor del Nodo en la posicion 3: " << x->get(3)->value << endl;
	cout << "Valor del Nodo en la posicion 1: " << x->get(1)->value << endl;
	try{
		cout << "Valor del Nodo en la posicion -8: " <<  x->get(-8)->value << endl;
	}catch(exception &ex){
		cout << ex.what() << endl;
	}
	try{
		cout << "Valor del Nodo en la posicion 3000: " <<  x->get(3000)->value << endl;
	}catch(exception &ex){
		cout << ex.what() << endl;
	}
	
	//prueba del metodo set
	x->set(2,"Amarillo");
	x->set(0,"Blanco");
	x->print();
	
	//pruebas del metodo pop
	x->pop(1);
	x->print();
	
	x->pop(0);
	x->print();
	
	x->pop(1);
	x->print();
	
	//prueba de find
	//agregamos elementos para nuestras pruebas
	x->push("indigo");
	x->push("ceruleo");
	x->push("rosa");
	x->push("salmon");
	x->push("verde olivo");
	x->push("celeste");
	x->print();
	
	cout << "rosa esta en la posicion: " << x->find("rosa") << endl;
	cout << "celeste esta en la posicion: " << x->find("celeste") << endl;
	cout << "azul esta en la posicion: " << x->find("azul") << endl;
	cout << "SALMON esta en la posicion: " << x->find("SALMON") << endl;
	
	return 777;
}








