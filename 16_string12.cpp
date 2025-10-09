#include<iostream>
using namespace std;

int main(){
	/*funcion find()
	Permite buscar un string dentro de otro string. (en JAVA se llama IndexOf)
	Esta funcion devuelve la posicion de la primera coincidencia encontrada
	a partir de donde comenzamos la busqueda.*/
	string str = "El tiempo transcurre inerte ante atardeceres sin fin.";
	cout << str << endl;
	
	string buscar;
	cout << "Digite lo que desee buscar en el texto anterior: ";
	getline(cin,buscar);
	
	int posicion;
	posicion = str.find(buscar,0);
	//str		es el string donde va a realizar la busqueda
	//buscar	es el string que quiere buscar
	//0			es la posicion desde donde va a comenzar a buscar en str
	//find() va a retornar un valor entero
	//find() no ignora mayusculas o minusculas
	//retorna -1 si no encuentra el string buscado
	if( posicion == -1 )
		cout << "No se encontro" << endl;
	else
		cout << "Encontrado en la posicion " << posicion << endl;
	
	return 456;
}
