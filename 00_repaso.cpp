#include<iostream>
using namespace std;

int main(){
	//console out
	cout << "Hola UNAH" << endl;
	cout << sizeof(int) << endl; //tamaño en bytes de un int: 4 bytes o sea 32 bits
	
	//console in
	int x;
	cout << "Digite un numero entero: ";
	cin >> x;
	cout << "El numero leiado es " << x << endl;
	
	double a,b,c;
	cout << "Digite tres numeros separados con espacios: ";
	cin >> a >> b >> c;
	cout << "valor de a: " << a << endl;
	cout << "valor de b: " << b << endl;
	cout << "valor de c: " << c << endl;
	
	//ejecutar comandos de sistema operativo
	system("pause"); //hace una pausa del programa para la consola
	system("cls"); //limpia la pantalla, para linux y mac se usa clear
	
	system("dir C:\\"); //mostrar todos los archivos de c:\
	//lanzar un programa:
	system("start chrome www.califik.com");
	
	return 123;
}









