#include<iostream>
#include "metodos.h"
using namespace std;

int main(){
	
	try{
		cout << elevar(2,5) << endl;
		cout << elevar(3,3) << endl;
		cout << elevar(8,0) << endl;
		cout << elevar(12,-2) << endl;
	}catch(exception &ex){
		//para extraer el mensaje de la excepcion ex debe declararse como &ex
		cout << ex.what() << endl;
	}
	
	cout << hipotenusa(4,4) << endl;
	cout << hipotenusa(7,1) << endl;
	cout << hipotenusa(1,1) << endl;
	
	return 777;
}
