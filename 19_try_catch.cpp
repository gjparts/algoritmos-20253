#include<iostream>
using namespace std;

int main(){
	/*Haga un programa que calcule e imprima el promedio
	de 3 numeros double digitados por el usuario.
	El programa va a validar que dichos numeros
	sean en realidad numeros, si todo es correcto
	entonces imprima el promedio de ellos, de lo contrario
	imprima un mensaje de error indicando que alguno
	de los valores no era numero.*/
	
	double a,b,c;
	string val1, val2, val3;
	
	try{
		//la captura se hara como string
		cout << "a: ";
		getline(cin,val1);
		cout << "b: ";
		getline(cin,val2);
		cout << "c: ";
		getline(cin,val3);
		//al intentar convertir esos string a double puede haber excepcion
		a = stod(val1);
		b = stod(val2);
		c = stod(val3);
		//si llego aqui es porque no hubo falla en la conversion
		cout << "El promedio es: " << (a+b+c)/3.0 << endl;
	}catch(exception ex){
		cout << "Alguno de los valores no es numero" << endl;
	}
	
	return 777;
}
