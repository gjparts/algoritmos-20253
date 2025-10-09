#include<iostream>
using namespace std;

int main(){
	/*Haga un arreglo de string que tenga los colores siguientes:
	
	Rojo, Amarillo, Azul, Verde, Rosa, Naranja, Blanco, Gris, Celeste
	
	Haga un programa que altere o modifique cada color del arreglo agregando un
	asterisco entre cada uno de los caracteres.
	
	Por ultimo imprima el arreglo de colores.*/
	
	string colores[] = {"Rojo", "Amarillo", "Azul", "Verde", "Rosa", "Naranja", "Blanco", "Gris", "Celeste"};
	
	//recorrer cada color en el arreglo:
	for( int i = 0; i < end(colores)-begin(colores); i++ ){
		//variable temporal para copiar char por char cada color
		string copia = "";
		
		//recorrer el color actual char por char e irlo copiando
		for( int j = 0; j < colores[i].length(); j++ ){
			copia = copia+colores[i][j]+'*';
		}
		
		//reemplazar el color actual con la copia
		colores[i] = copia;
		//imprimir el color actual
		cout << colores[i] << endl;
	}
	
	return 111;
}
