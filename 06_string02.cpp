#include<iostream>
using namespace std;

int main(){
	//leer datos de la consola hacia una variable string
	string str;
	/*
	cout << "Digite su nombre completo: ";
	cin >> str;
	cout << "Usted se llama " << str << endl;
	*/
	/*lo anterior no es la mejor forma para leer string porque si hay
	espacios en blanco en el string entonces ignora a partir de ahi.
	Esto es porque cin esta diseñado para depositar en diferentes variables
	luego de cada espacio.*/
	//solucion: utilizar la funcion getline
	cout << "Digite su nombre completo: ";
	getline(cin,str);
	cout << "Usted se llama " << str << endl;
	//cin	es el origen desde donde leemos en este caso el
	//		inputStream de la consola (cin)
	//str	es la variable de destino
	
	return 777;
}
