#include<iostream>
using namespace std;

int main(){
	//Arreglos de string
	//arreglo prellenado:
	string frutas[] = { "fresa", "uva", "manzana", "pera", "Mandarina", "SANDIA" };
	//arreglo sin inicializar
	string colores[7];
	
	//imprimir cada arreglo
	for( int i = 0; i < end(frutas)-begin(frutas); i++ ){
		cout << frutas[i] << endl;
	}
	
	for( int i = 0; i < end(colores)-begin(colores); i++ ){
		cout << colores[i] << endl;
	}
	
	//CONSIDERACIONES:
	/*Un arreglo unidimensional de string tiende a ser confundido con un arreglo
	bidimensional de elementos char; pero en realidad no es asi, este sigue siendo
	un arreglo unidimensional de string.*/
	cout << "************************" << endl;
	cout << "La tercera fruta es: " << frutas[2] << endl;
	cout << "El tercer caracter de la quinta fruta es: " << frutas[4][2] << endl;
	cout << "El cuarto caracter de la sexta fruta es: " << frutas[5][3] << endl;
	//es posible consultar cuanto mide un string dentro de un arreglo
	cout << "Longitud de la segunda fruta: " << frutas[1].length() << endl;
	cout << "Longitud de la quinta fruta: " << frutas[4].length() << endl;
	//reemplazo de elementos
	//cambiar pera por mango
	cout << "fruta 3 antes del cambio: " << frutas[3] << endl;
	frutas[3] = "mango";
	cout << "fruta 3 despues del cambio: " << frutas[3] << endl;
	
	//reemplazar char dentro de un string que esta dentro de un arreglo
	//cambiar por una X el tercer caracter de la quinta fruta
	cout << "quinta fruta antes del reemplazo: " << frutas[4] << endl;
	frutas[4][2] = 'X';
	cout << "quinta fruta despues del reemplazo: " << frutas[4] << endl;
	
	//cambiar el tercer caracter de la primera fruta por un numero 3
	cout << "primer fruta antes del reemplazo: " << frutas[0] << endl;
	frutas[0][2] = '3';
	cout << "primer fruta despues del reemplazo: " << frutas[0] << endl;
	
	//concatenar caracteres en un string que esta dentro de un arreglo
	//agregar una S al final de la segunda fruta
	cout << "Segunda fruta antes: " << frutas[1] << endl;
	frutas[1] = frutas[1] + 'S';
	cout << "Segunda fruta despues: " << frutas[1] << endl;
	
	//concatenar string a otro string que esta dentro de un arreglo
	//agregar la palabra salvaje al final de la primera fruta
	cout << "Primer fruta antes: " << frutas[0] << endl;
	frutas[0] = frutas[0] + " salvaje";
	cout << "Primer fruta despues: " << frutas[0] << endl;
}






