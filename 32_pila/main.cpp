#include<iostream>
#include "Nodo.h"
#include "Pila.h"
using namespace std;

int main(){
	//pruebas de la Pila
	Pila *pila1 = new Pila();
	
	//apilarle objetos
	pila1->push("Caja de Hierro");
	pila1->push("Caja de Madera");
	pila1->push("Caja de Plastico");
	pila1->push("Caja de Carton");
	pila1->push("Caja de Zapatos");
	pila1->push("Vaso");
	
	pila1->print();
	
	//desapilar tres Nodos
	pila1->pop(); //sale el Vaso
	pila1->pop(); //sale la caja de zapatos
	pila1->pop(); //sale la caja de carton
	cout << "----------------------------------------------" << endl;
	pila1->print();
	
	//extraer un Nodo y leer su contenido
	try{
		if( pila1->getLength() > 0 ) cout << "Nodo extraido: " << pila1->pop()->value << endl;
		if( pila1->getLength() > 0 ) cout << "Nodo extraido: " << pila1->pop()->value << endl;
		if( pila1->getLength() > 0 ) cout << "Nodo extraido: " << pila1->pop()->value << endl;
		if( pila1->getLength() > 0 ) cout << "Nodo extraido: " << pila1->pop()->value << endl;
		if( pila1->getLength() > 0 ) cout << "Nodo extraido: " << pila1->pop()->value << endl;
	}catch(exception &ex){
		cout << ex.what() << endl;
	}
	
	cout << "----------------------------------------------" << endl;
	pila1->print();
	
	return 678;
}





