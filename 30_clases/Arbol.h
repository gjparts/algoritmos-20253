//Clase Arbol
//if not defined (si no se ha definido)
//define (definir la region de codigo)
//esto evita que si por error se hace include
//dos veces al archivo Arbol.h ocurra un fallo de compilacion
#ifndef ARBOL_H
#define ARBOL_H

#include<iostream>
using namespace std;

class Arbol{
	private: //ambito privado, donde sus atributos y metodos no son accesible fuera de la clase (private scope)
		//todo lo que ponga aqui es privado
	public:  //ambito publico: accesible desde dentro y fuera de la clase (public scope)
		//todo lo que ponga aqui es publico
		//atributos o propiedades
		float alto;
		float ancho;
		string especie;
};

#endif
