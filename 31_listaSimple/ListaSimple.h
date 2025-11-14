#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include<iostream>
#include "Nodo.h"
using namespace std;

class ListaSimple{
	private:
		//atributos privados
		Nodo *first;
		Nodo *last;
		int length;
	public:
		//constructor
		ListaSimple(){
			this->first = NULL;
			this->last = NULL;
			this->length = 0;
		}
		//metodos
		int getLength(){
			return this->length;
		}
		Nodo *getFirst(){
			return this->first;
		}
		Nodo *getLast(){
			return this->last;
		}
};

#endif
