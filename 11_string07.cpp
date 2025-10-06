#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	/*Haga un programa que pida al usuario digitar dos string,
	una vez digitados el programa va a imprimir un mensaje
	indicando si son iguales o diferentes;
	pero ignorando mayusculas y minusculas y sin alterar
	los string leidos.*/
	
	string a,b,x,y;
	cout << "Digite el string a: ";
	getline(cin,a);
	cout << "Digite el string b: ";
	getline(cin,b);
	
	//copias de a y b: x y
	x = a;
	y = b;
	//convertir las copias al mismo casing (capitalizacion)
	transform(x.begin(), x.end(), x.begin(), ::toupper);
	transform(y.begin(), y.end(), y.begin(), ::toupper);
	
	if( x == y )
		cout << "ambos string son iguales ignorando mayusculas/minusculas";
	else
		cout << "ambos string NO son iguales";
		
	cout << endl;
	
	return 567;
}
