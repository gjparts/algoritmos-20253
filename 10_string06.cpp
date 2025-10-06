#include<iostream>
using namespace std;

int main(){
	//Comparacion de string en C++, C#, Javascript, Dart, PHP
	//utilice el operador ==
	//== no ignora mayusculas/minusculas
	string a,b;
	cout << "Digite el string a: ";
	getline(cin,a);
	cout << "Digite el string b: ";
	getline(cin,b);
	
	if( a == b )
		cout << "ambos string son iguales";
	else
		cout << "ambos string NO son iguales";
		
	cout << endl;
	
	return 567;
}
