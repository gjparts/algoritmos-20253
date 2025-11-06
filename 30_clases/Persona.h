//Clase Persona
#ifndef PERSONA_H
#define PERSONA_H

#include<iostream>
using namespace std;

class Persona{
	private:
	public:
		//Atributos
		string nombre;
		int edad;
		char genero;
		
		//Constructor/Constructores
		/*Es un metodo o funcion que existe dentro de una clase y se utiliza
		para asignar una direccion de memoria a un objeto derivado de la clase.
		-> en C++, Java y C# un constructor se llama igual que la clase.
		-> un constructor no lleva tipo de dato de retorno porque devuelve una direccion de memoria
		-> siempre debe ir en ambito publico
		-> en C++, Java y C# una clase puede tener mas de un constructor siempre y cuando tengan diferente firma
		-> normalmente un constructor se usa para inicializar los atributos; pero tambien se pueden usar
		   para disparar otro tipo de tareas.
		*/
		//Constructor sin parametros: no lleva nada dentro del parentesis:
		//normalmente se usa para inicializar los atributos con valores default o predeterminados
		Persona(){
			//se recomienda colocar this para decir que nos referimos al atributo de la clase
			//y no a una variable local
			//this representa a la clase en la que nos encontramos
			this->nombre = "No tiene";
			this->edad = 0;
			this->genero = 'X';
		}
		//Constructor con todos los parametros: se le llama asi porque llena todos los atributos
		Persona(string nombre, int edad, char genero){
			//this se refiere a los atributos de la clase
			//no usar this se refiere a las variables locales del constructor
			this->nombre = nombre;
			this->edad = edad;
			this->genero = genero;
		}
		//Constructor con dos parametros
		Persona(string nombre, int edad){
			this->nombre = nombre;
			this->edad = edad;
			this->genero = 'X'; //solo genero queda con valor default
		}
		
		//Metodos
		//un metodo es una funcion que esta definida dentro de una clase.
		void imprimir(){
			cout << "************** Persona **************" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Edad: " << this->edad << endl;
			cout << "Genero: " << this->generoDescripcion() << endl;
			cout << "Es de la tercera edad? " << ( this->terceraEdad() == true ? "Si" : "No" ) << endl;
		}
		
		//metodo que imprime un saludo en ingles o en español
		void saludar(bool ingles){
			if( ingles == true )
				cout << "Hello my name is " << this->nombre << endl;
			else	
				cout << "Hola mi nombre es " << this->nombre << endl;
		}
		//metodo que devuelve true si la persona es de la tercera edad
		bool terceraEdad(){
			if( edad >= 60 )
				return true;
			else
				return false;
		}
		//metodo que devuelve el genero pero como String y mas detallado
		string generoDescripcion(){
			if( this->genero == 'M' ) return "Masculino";
			if( this->genero == 'F' ) return "Femenino";
			if( this->genero == 'X' ) return "Otros";
			//en caso de que no se cumpla ninguna de las anteriores:
			return "No configurado";
		}
};

#endif





