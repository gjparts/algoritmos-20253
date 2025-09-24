#include<iostream>
using namespace std;

int main(){
	//string: es una coleccion de elementos char
	string carrera = "Ingenieria en Sistemas";
	cout << carrera << endl;
	
	//obtener la longitud de un string
	cout << "Longitud de carrera es " << carrera.length() << endl;
	
	/*Los caracteres dentro de un string en C++ se numeran de 0 a N-1
	En C++ el acceso a los caracteres de un string es similar a como sucede en un arreglo*/
	cout << "El primer caracter de carrera es " << carrera[0] << endl;
	cout << "El noveno caracter de carrera es " << carrera[8] << endl;
	cout << "El ultimo caracter de carrera es " << carrera[carrera.length()-1] << endl;
	
	//se puede reemplazar un caracter en un string:
	string verdura = "Lechuga";
	cout << verdura << endl;
	
	//cambiar algunos caracteres
	verdura[2] = 'x';
	verdura[4] = '_';
	cout << verdura << endl;
	
	//importante recordar que cada elemento del string al ser char pues tiene un valor
	//entero cada uno de ellos.
	//Entonces puede sumar o restar a un char para obtener otro de acuerdo a la
	//tabla de caracteres (en Windows usualmente es ASCII)
	char c1 = 'A';
	cout << "El valor de c1 es " << c1 << endl;
	c1 = c1+1; //sumar 1 al char
	cout << "El valor de c1 es " << c1 << endl;
	
	string fruta = "Pera";
	//sumar 2 al caracter 0
	fruta[0] = fruta[0]+2;
	cout << fruta << endl;
	
	//que pasa si suma dos variables char?
	char cc1 = 'X', cc2 = 'Y';
	cout << cc1+cc2 << endl; //c++ suma los valores numericos de cada char
	cout << cc1 << cc2 << endl;
	//si desea unir dos char y formar un string:
	string sumacc = ""; //hacer un string en blanco
	sumacc = sumacc + cc1; //concatenarle el primer char
	sumacc = sumacc + cc2; //concatenarle el segundo char
	cout << sumacc << endl;
	
	//concatenar string con string
	string str1 = "Filomeno Perez";
	string str2 = "Honduras";
	string str3 = "El Sr."+str1+" vive en "+str2;
	cout << str3 << endl;
	
	//concatenar string con numero
	int edad = 42;
	double estatura = 1.79;
	string str4 = "Hola mi edad es "+to_string(edad)+" y mi estatura es "+to_string(estatura);
	cout << str4 << endl;
	
	//tambien se puede concatenar un char a un string
	string str5 = "gato";
	str5 = str5 + 's';
	cout << str5 << endl;
	
	//se puede usar += en este caso?
	str5 += 'x';
	cout << str5 << endl;
	
	//se puede usar += en varias concatenaciones?
	string str6 = "Sandia";
	str6 += 'q' + 'w' + 'e';
	cout << str6 << endl;
	//en el caso de += solo se deberia usar un valor y no varios, porque sino se devuelve
	//la suma aritmetica de los valores de los char, como se resuelve?
	
	string str7 = "Sandia";
	str7 = str7 + 'q' + 'w' + 'e';
	cout << str7 << endl;
	
	int a = 3;
	a += 5;
	cout << a << endl; //8
	a += 2+6;
	cout << a << endl; //16
	a += 12/3;
	cout << a << endl; //20
	
	return 123;
}












