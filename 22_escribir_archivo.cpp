#include<iostream>
#include<fstream>
using namespace std;

int main(){
	//Escritura de archivo de texto
	fstream archivo;
	
	//abrir el archivo en modo de escritura
	archivo.open("pruebas.txt",ios::out);
	/*Existen dos maneras de abrir un archivo para escribir:
	ios::out	borra el contenido anterior y lo sobreescribe con nuevo (OUTPUT)
	ios::app	mantiene el contenido anterior y agrega el nuevo (APPEND)
	*/
	//si el archivo no existe, C++ lo crea
	if( archivo.is_open() == true ){
		//escribir contenidos en el archivo
		archivo << "Gerardo Portillo" << endl;
		archivo << 4+5 << endl;
		int x = 88;
		archivo << "El valr de x es " << x << endl;
		archivo << "Uva\tManzana\tPera\tNaranja" << endl;
		//cerrar el archivo
		archivo.close();
		cout << "Fin del programa" << endl;
	}
	else
		cout << "Archivo no se puede escribir o no tiene permiso." << endl;
	
	return 777;
}
