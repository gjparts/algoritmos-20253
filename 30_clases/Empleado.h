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
			this->setGenero(genero);
			this->setSalario(salario);
			this->setContrato(contrato);
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
		//setters y getters de los demas atributos
		char getGenero(){
			return this->genero;
		}
		void setGenero(char genero){
			if( genero == 'M' || genero == 'F' || genero == 'X' )
				this->genero = genero; //se acepta
			else
				throw invalid_argument("Genero solo admite los chars: M, F, X");
		}
		
		float getSalario(){
			return this->salario;
		}
		void setSalario(float salario){
			if( salario >= 0 )
				this->salario = salario; //se acepta
			else
				throw invalid_argument("Salario solo admite numeros >= 0");
		}
		
		char getContrato(){
			return this->contrato;
		}
		void setContrato(char contrato){
			if( contrato == 'T' || contrato == 'P' )
				this->contrato = contrato; //se acepta
			else
				throw invalid_argument("Contrato solo admite los chars: T, P");
		}
		
		//Metodos varios
		string getGeneroDescripcion(){
			if( this->genero == 'M' ) return "Masculino";
			if( this->genero == 'F' ) return "Femenino";
			if( this->genero == 'X' ) return "Otros";
			return "No configurado";
		}
		string getContratoDescripcion(){
			if( this->contrato == 'T' ) return "Temporal";
			if( this->contrato == 'P' ) return "Permanente";
			return "No configurado";
		}
		void imprimir(){
			cout << "---------------- Perfil de Empleado ----------------" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Edad: " << this->edad << endl;
			cout << "Salario: " << this->salario << endl;
			cout << "Genero: " << this->getGeneroDescripcion() << endl;
			cout << "Tipo de Contrato: " << this->getContratoDescripcion() << endl;
		}
};

#endif







