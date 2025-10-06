#include<iostream>
using namespace std;

int main(){
	int opcion;
	
	do{
		system("cls");
		cout << "----------- MENU -----------" << endl;
		cout << "1) Saludame" << endl;
		cout << "2) Di Hola" << endl;
		cout << "3) Salir" << endl;
		cout << "Digite el numero de opcion deseada: ";
		cin >> opcion;
		
		if( opcion == 1 ){
			string str;
			cout << "Dame tu nombre: ";
			cin.ignore(); //ignorar el buffer lleno
			getline(cin,str);
			cout << "Te saludo " << str << endl;
			system("pause");
		}
		if( opcion == 2 ){
			cout << "Hola" << endl;
			system("pause");
		}
		
	}while(opcion != 3);
	
	
	return 678;
}
