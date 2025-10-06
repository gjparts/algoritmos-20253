#include<iostream>
using namespace std;

int main(){
	/*Bug que sucede cuando se viene de capturar un valor de tipo
	primitivo y luego se quiere capturar un string*/
	int x;
	string str;

	cout <<	"Digite un numero entero: ";
	cin >> x;
	
	//cuando se viene de leer un dato primitivo por cin
	//toca vaciar el buffer de entrada de forma manual:
	cin.ignore();
	
	cout << "Digite un string: ";
	getline(cin,str);
	
	cout << "El valor de x es " << x << endl;
	cout << "El valor de str es " << str << endl;
	
	return 777;
}
