#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream archivo; //estructura de datos para trabajar con archivos
	
	//abrir un archivo de texto para solo lectura
	archivo.open("ejemplo_24mil.txt", ios::in );
	//el primer parametro es la ruta del archivo a leer, si el archivo
	//esta en el mismo folder de este programa entonces no se coloca toda la ruta
	
	//verificar si el archivo se abrio correctamente
	if( archivo.is_open() == true ){
		cout << "Archivo abierto correctamente." << endl;
		
		//recorrer el archivo linea por linea
		string linea; //variable temporal
		int contador = 0; //contador de lineas
		//eof = end of file
		while( archivo.eof() == false ){
			//leer una linea del archivo y ponerla en la variable temporal
			getline(archivo,linea);
			contador++; //sumar 1 al contador de lineas
			cout << linea << endl; //imprimir a linea leida (esto hace mas lento el proceso, es opcional)
		}
		cout << "Se ha terminado de leer el archivo" << endl;
		cout << "Se leyeron " << contador << " lineas" << endl;
		
		//cerrar el archivo
		archivo.close();
	}
	else
		cout << "Archivo no existe o no tiene permiso." << endl;
	
	return 123;
}
