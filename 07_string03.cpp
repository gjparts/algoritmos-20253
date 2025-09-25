#include<iostream>
using namespace std;

int main(){
	/*Haga un programa que capture un string.
	Luego debera imprimirlo; pero dejando
	tres asteriscos entre cada caracter.
	Sin afectar a la variable original.
	Ejemplo:
	Digite un string: Sandia
	Resultado: S***a***n***d***i***a***
	*/
	string str;
	cout << "Digite un string: ";
	getline(cin,str);

	//recorrer cada char del string
	for( int i = 0; i < str.length(); i++ ){
		cout << str[i] << "***";
	}
	cout << endl;
	//se altero el string original?
	cout << "str: " << str << endl;
	
	return 111;
}




