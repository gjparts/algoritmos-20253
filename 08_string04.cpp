#include<iostream>
using namespace std;

int main(){
	/*Haga un programa que lea un string llamado str1,
	luego declare otro string llamado str2.
	El programa debera copiar el contenido de str1
	dentro de str2; pero colocando tres asteriscos
	entre cada caracter en str2.
	Luego imprimen el contenido de str1 y de str2.
	Ejemplo:
	Digite str1: arbol
	str1: arbol
	str2: a***r***b***o***l***
	*/
	string str1, str2 = "";
	cout << "Digite str1: ";
	getline(cin,str1);
	
	//recorrer str1 char por char y copiar cada char a str2
	for( int i = 0; i < str1.length(); i++ ){
		str2 = str2 + str1[i] + "***";
	}
	
	cout << str1 << endl;
	cout << str2 << endl;
	
}





