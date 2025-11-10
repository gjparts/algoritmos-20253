//Clase Empleado
#ifndef EMPLEADO_H
#define EMPLEADO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class Empleado{
	private:
		//atributos privados o protegidos
		int edad;
		char genero;
		float salario;
		char contrato;
	public:
		//atributos publicos
		string nombre;
		//constructor
		Empleado(string nombre, int edad, char genero, float salario, char contrato){
			this->nombre = nombre;
			this->setEdad(edad); //aplicacion de reglas a nivel de constructor por medio del uso de set
			this->genero = genero;
			this->salario = salario;
			this->contrato = contrato;
		}
		//Metodos
		/*Metodos get y set (setters and getters)
		Metodo get:	retorna el valor almacenado en un atributo, estos metodos
					siempre deben de retornar el tipo de dato del atributo a leer.
					-> casi siempre son publicos.
					-> normalmente no llevan parametros
		*/
		int getEdad(){
			return this->edad;
		}
		/*Metodo set: 	escribe un valor dentro de un atributo normalmente privado.
						por lo general los set son de tipo void porque no retornan nada ya
						que se usan para escribir.
						-> deberian ser siempre publicos.
						-> siempre deben recibir un parametro del tipo de dato del atributo a escribir
						-> estos metodos se usan mas que todo para aplicar reglas a los datos a escribir*/
		void setEdad(int edad){
			//guard clause para aplicar la regla
			//Si la edad que me estan enviando cumple la regla la aceptamos sino lanzamos una excepcion
			if( edad >= 18 )
				this->edad = edad; //se acepta el valor enviado
			else
				throw invalid_argument("Edad solo admite numeros >= 18");
		}
};

#endif







