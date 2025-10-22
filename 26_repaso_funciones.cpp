#include<iostream>
#include "metodos.h"
using namespace std;

int main(){
	
	try{
		cout << elevar(2,5) << endl;
		cout << elevar(3,3) << endl;
		cout << elevar(8,0) << endl;
		cout << elevar(12,-2) << endl;
	}catch(exception &ex){
		//para extraer el mensaje de la excepcion ex debe declararse como &ex
		cout << ex.what() << endl;
	}
	
	cout << hipotenusa(4,4) << endl;
	cout << hipotenusa(7,1) << endl;
	cout << hipotenusa(1,1) << endl;
	
	cout << multiplo(5,2) << endl;
	cout << multiplo(8,2) << endl;
	cout << multiplo(10,5) << endl;
	cout << multiplo(11,3) << endl;
	
	//en todos los lenguajes de programacion modernos si Usted
	//imprime el resultado de una expresion de comparacion; entonces
	//obtendra true o false dependiendo de si esta se cumple.
	cout << ( 5 > 4 ) << endl; //imprime 1 porque 5 > 4 es true
	cout << ( 10 == 10 ) << endl; //imprime 1 o true
	cout << ( 4 != 8 ) << endl; //imprime 1 o true
	cout << ( 3 == 7 ) << endl; //imprime 0 o false
	
	//los booleanos se pueden sumar en C++
	int suma = 0;
	suma = suma + ( 6 > 3 ); //la condicion se cumple, suma 1
	cout << "suma: " << suma << endl;
	suma = suma + ( 11 == 11 ); //la condicion se cumple, suma 1
	cout << "suma: " << suma << endl;
	suma = suma + ( 4 == 5 ); //condicion no se cumple, suma 0
	cout << "suma: " << suma << endl;
	suma = suma + ( 7 > 2 && 6 < 12 ); //se cumplen, suma 1
	cout << "suma: " << suma << endl;
	
	int x = 10, y = 11;
	suma = suma + ( y > x );
	cout << "suma: " << suma << endl;
	
	//las funciones void como no retornan valor entonces no se pueden
	//combinar con cout y tampoco se pueden asignar a variables.
	//ya que void significa vacio.
	//por tal razon lo siguiente da error:
	//cout << imprimirRectangulo(20,7,'x') << endl;
	//tampoco puede hacer esto:
	//string cuadrado = imprimirRectangulo(20,7,'x');
	
	//una funcion void solo se manda a ejecutar como si fuera un subprograma:
	imprimirRectangulo(20,7,'x');
	imprimirRectangulo(4,9,'R');
	
	/*C++ detecta o infiere el tipo de dato de un numero dependiendo si este
	lleva decimales o no, si el numero no lleva decimales se considera int,
	si el numero lleva decimales se considera double y si el numero lleva una f
	al final se considera float*/
	cout << areaCirculo(4.0) << endl; //usa la funcion para doubles
	cout << areaCirculo(3.0f) << endl; //usa la funcion para floats
	
	//lo anterior no aplica si Usted alimenta el valor desde una variable
	//que tiene el tipo pre-definido desde antes
	double n = 6;
	cout << areaCirculo(n) << endl;
	
	cout << minimo(5,6,7) << endl;
	cout << minimo(3.4,4.5,2.45324) << endl;
	cout << minimo(4.5f,7.0f,9.0f) << endl;
	
	return 777;
}





