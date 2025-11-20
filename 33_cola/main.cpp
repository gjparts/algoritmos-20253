#include<iostream>
#include<stdexcept>
#include "Nodo.h"
#include "Cola.h"

using namespace std;

int main(){
	Cola *cola1 = new Cola();
	
	//encolar elementos
	cola1->enqueue("Gerardo");
	cola1->enqueue("Pedro");
	cola1->enqueue("Pablo");
	cola1->enqueue("Vilma");
	cola1->enqueue("Dino");
	cola1->enqueue("Betty");
	
	//imprimir
	cola1->print();
	
	//desencolar elementos
	try{
		if( cola1->getLength() > 0 ) cout << "Valor del Nodo Extraido: " << cola1->dequeue()->value << endl;
		if( cola1->getLength() > 0 ) cout << "Valor del Nodo Extraido: " << cola1->dequeue()->value << endl;
		if( cola1->getLength() > 0 ) cout << "Valor del Nodo Extraido: " << cola1->dequeue()->value << endl;
		if( cola1->getLength() > 0 ) cout << "Valor del Nodo Extraido: " << cola1->dequeue()->value << endl;
	}catch(exception &ex){
		cout << ex.what() << endl;
	}
	
	cout <<  "---------------------------------" << endl;
	cola1->print();
	
	return 8765;
}





