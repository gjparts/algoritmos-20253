#include<iostream>
using namespace std;

int main(){
	/*Conversiones
	En la libreria standard (std) de C++ vienen varias funciones
	para convertir entre tipos, las mas populares son:
	stoi	string to int (string a entero)
	stod	string to double
	stof	string to float
	stol	string to long
	stoll	string to long long
	to_string cualquier numero a string*/
	
	//string a entero
	string str = "80.52";
	int entero1 = stoi(str); //conversion a entero (trunca la parte decimal, no redondea)
	cout << "str: " << str << endl;
	cout << "entero1: " << entero1 << endl;
	
	//que pasa si quiere convertir a entero algo que no es numero:
	//str = "Honduras";
	//entero1 = stoi(str);
	//lo que va a pasar es que va a ocurrir una excepcion y el programa termina ahi
	
	//que pasa si hay numeros y letras en el string?
	str = "120abc";
	entero1 = stoi(str);
	cout << "str: " << str << endl;
	cout << "entero1: " << entero1 << endl;
	
	//string a double
	str = "2.456789zxcvbnm";
	double doble1 = stod(str);
	cout << "str: " << str << endl;
	cout << "doble1: " << doble1 << endl;
	
	//string a float
	str = "6.45673";
	float flotante1 = stof(str);
	cout << "str: " << str << endl;
	cout << "flotante1: " << flotante1 << endl;
	
	//string a long
	str = "12341234";
	long long1 = stol(str);		//long soporta 8 bytes = 64 bit
	cout << "str: " << str << endl;
	cout << "long1: " << long1 << endl;
	
	//string a long long
	str = "1234123412345";
	long long dni = stoll(str);		//long long soporta 16 bytes = 128 bit
	cout << "str: " << str << endl;
	cout << "dni: " << dni << endl;
	
	//convertir cualquier numero a string
	int entero2 = 77;
	double doble2 = 8.89755;
	float flotante2 = 64.23;
	long long2 = 43211234;
	long long numerote = 9999999999999;
	string str2;
	
	str2 = to_string(entero2);
	cout << str2 << endl;
	
	str2 = to_string(doble2);
	cout << str2 << endl;
	
	str2 = to_string(flotante2);
	cout << str2 << endl;
	
	str2 = to_string(long2);
	cout << str2 << endl;
	
	str2 = to_string(numerote);
	cout << str2 << endl;
	
	return 123;
}















