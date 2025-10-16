#include<iostream>
#include<fstream>
using namespace std;

int main(){
	/*Haga un programa que lea el archivo ejemplo_24mil.txt,
	debera recorrerlo, al finalizar debe imprimir
	cuantas lineas tiene, cual es la suma de todos
	los numeros encontrados, cuantos numeros son
	pares y cuantos numeros son impares asi como
	el promedio de todos sus numeros.
	-> No debe imprimir cada linea.*/
	/*Resultados esperados:
	Suma total: 393175059
	Promedio: 16382
	Números pares: 11794
	Números impares: 12205*/
	fstream archivo;
	archivo.open("ejemplo_24mil.txt",ios::in);
	
	//validar si se abrio el archivo
	if( archivo.is_open() == true ){
		cout << "Archivo se pudo abrir" << endl;
		
		string linea;
		int lineas = 0;
		int suma = 0;
		int pares = 0, impares = 0;
		while( archivo.eof() == false ){
			getline(archivo,linea);
			lineas++;
			
			//en caso de fallar la conversion a numeros try-catch ignora ese error
			try{
				suma += stoi(linea); //convertir a numero entero la linea leida
				
				if( stoi(linea)%2 == 0 )
					pares++;
				else
					impares++;
				
			}catch(exception ex){
				//no notificar nada
			}
			
		}
		cout << "Numero de lineas: " << lineas << endl;
		cout << "Suma: " << suma << endl;
		cout << "Pares: " << pares << endl;
		cout << "Impares: " << impares << endl;
		cout << "Promedio: " << suma/(pares+impares) << endl;
	}
	else
		cout << "No se puede leer el archivo o quiza no tenga permiso." << endl;
	
	
	return 123;
}
