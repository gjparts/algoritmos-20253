#include<iostream>
using namespace std;

int main(){
	/*Caza de errores (try-catch)
	Este bloque permite decidir quwe se hara cuando ocurra
	una excepcion de tipo throw.*/
	/*Ejemplo:
	haga un programa que lea un string y lo convierta
	a entero. En caso de fallar la conversion imprimir
	un mensaje de error de lo contrario imprimir que la
	conversion fue exitosa.*/
	
	try{
		//aqui va el codigo que puede generar una excepcion throw
		string str;
		cout << "Digite un string para convertirlo a numero entero: ";
		getline(cin,str);
		stoi(str);
		cout << "La conversion fue exitosa" << endl;
	}catch(exception ex){
		//aqui se pone lo que va a pasar en caso de excepcion
		cout << "El valor leido no es un numero entero." << endl;
	}
	
	return 123;
}
