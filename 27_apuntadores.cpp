/*Apuntador de Memoria (Pointer, Puntero)
Permite alterar una variable desde un ambito externo, lo que hace un apuntador
es enviar la varible (no su valor) hacia otro ambito a traves de su direccion
de memoria, a esto se le conoce como pase por referencia (byref)

en C++ existe dos formas de trabajar con apuntadores en funciones:
1) a traves del HEAP
2) a traves del STACK*/

#include<iostream>
#include<cmath>
using namespace std;

//esta funcion void no va a alterar la variable en su ambito original
//porque lo que viaja hacia la funcion es una copia del valor original
void sumarCien(int x){
	//funcion que suma 100 al valor enviado
	x = x + 100;
}

/*funcion void que altere la variable original desde un ambito externo utilizando
el HEAP para almacenar en la memoria; pero:
¿Qué es el HEAP?
Es toda la memoria RAM de la computadora, sus caracteristicas:
	-> es mas grande (obviamente)
	-> es mas lenta porque se esta disponiendo de toda la memoria del equipo
	-> las variables en el Heap viven por mas tiempo porque se destruyen hasta
	   que el programa termina.
	-> usar Heap permite la retrocompatililidad con programas hechos en C
	*/
void sumarCienApuntadorHead(int *x){
	*x = *x + 100;
}

/*funcion void que altere la variable original desde un ambito externo utilizando
el STACK para almacenar en la memoria:
¿Qué es el Stack?
Es una porcion de memoria mas pequeña la cual esta reservada para el programa en ejecucion.
Sus caracteristicas:
	-> es mas rapido
	-> las variables viven por menos tiempo, son destruidas cuando quedan huerfanas
	-> quien destruye las variables huerfanas? un proceso conocido como recolector de basura (garbage collector)
	-> su desventaja es que NO es retrocompatible con el lenguaje C
*/
void sumarCienApuntadorStack(int &x){
	x = x + 100;
}

/*¿cuando usamos HEAP y cuando usamos STACK?
-> para funciones pequeñas, para trabajar con arreglos o string se recomienda usar Stack
   en vista que da a acceso a los miembros de la variable. (begin, end, funciones, metodos, atributos)
-> para trabajar con Clases y objetos, para trabajar con colecciones grandes o con estructuras
   de datos enormes (Pilas, Colas, Listas vinculadas) se recomienda usar Heap.
*/

//Haga un funcion void, usando apuntadores al Stack que eleve al cubo un
//numero entero enviado como parametro. Puede usar Pow.
void cubo(int &x){
	x = pow(x,3);
}

//Haga una funcion void que por medio de apuntadores divida entre dos el numero
//double que le enviemos.
void mitad(double &num){
	num = num/2;
} 


int main(){
	int x = 10;
	sumarCien(x);
	cout << x << endl; //se imprime 10 porque x no fue afectado en el ambito de origen
	
	sumarCienApuntadorHead(&x);
	cout << x << endl; //se imprime 110 porque la variable original si fue afectada
	//en el ambito externo; pero observe que se envia &x en lugar de x ya que
	//los apuntadores al Heap exigen el envio de la direccion de memoria de la variable.
	
	sumarCienApuntadorStack(x);
	cout << x << endl; //se imprime 210
	//Observe que al usar apuntadores por Stack no es necesario enviar &x
	
	cout << "Valor de x: " << x << endl;
	cout << "Direccion de memoria de x: " << &x << endl;
	
	int z = 3;
	cubo(z);
	cout << z << endl;
	
	double w = 7;
	mitad(w);
	cout << w << endl;
	
	return 123;
}





