#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	//Conversion a mayusculas y minusculas
	string str;
	cout << "Digite un string: ";
	getline(cin,str);
	//transformar a mayusculas
	transform(str.begin(),str.end(),str.begin(),::toupper);
	//transform actua sobre la variable original
	cout << "el valor de str es: " << str << endl;
	
	//transformar a minusculas
	transform(str.begin(),str.end(),str.begin(),::tolower);
	cout << "el valor de str es: " << str << endl;
	
	//como transform afecta a la variable original; entonces para evitarlo
	//haga una copia y aplique transform sobre la copia
	cout << "Digite un string: ";
	getline(cin,str);
	
	//hacer una copia
	string copia = str;
	
	transform(copia.begin(),copia.end(),copia.begin(),::toupper);
	cout << "el valor de str en mayusculas es: " << copia << endl;
	cout << "el valor original de str es: " << str << endl;
	
	return 123;
}




