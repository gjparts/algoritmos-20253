/*Apuntadores con string: se recomienda apuntar al Stack,
porque en C++ no son colecciones grandes.
Ademas que apuntar string al Stack permite tener acceso
a sus miembros: length y a sus caracteres.*/
#include<iostream>
#include<algorithm>
using namespace std;

//haga una funcion void que convierta un string apuntado a mayusculas
void mayusculas(string &str){
	transform(str.begin(),str.end(),str.begin(),::toupper);
}

//haga una funcion void que reciba un string apuntado y que lo altere
//reemplazando los espacios en blanco por guiones bajos.
void reemplazarEspacios(string &str){
	for( int i = 0; i < str.length(); i++ ){
		if( str[i] == ' ' )
			str[i] = '_';
	}
}

//Haga una funcion void que reciba un string apuntado y que lo altere
//eliminandole los espacios en blanco.
void eliminarEspacios(string &str){
	for( int i = 0; i < str.length(); i++ ){
		if( str[i] == ' ' )
			str[i] = 0; //el char CERO en c++ es considerado un caracter nulo
	}
}

int main(){
	system("color a"); //no tiene que ver con el tema pero colorea el texto en verde
	
	string x = "Ingenieria en Sistemas";
	mayusculas(x);
	cout << x << endl;
	
	reemplazarEspacios(x);
	cout << x << endl;
	
	string z = "UNAH 2025 SISTEMAS LA MEJOR CARRERA";
	eliminarEspacios(z);
	cout << z << endl;
	
	return 789;
}

