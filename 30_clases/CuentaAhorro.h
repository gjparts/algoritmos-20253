//Clase CuentaAhoroo
#ifndef CUENTAAHORRO_H
#define CUENTAAHORRO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class CuentaAhorro{
	private:
		//atributo privado
		float saldo;
	public:
		//atributos publicos
		string nombreCliente;
		string numeroCuenta;
		//constructor
		CuentaAhorro(string nombreCliente, string numeroCuenta){
			this->nombreCliente = nombreCliente;
			this->numeroCuenta = numeroCuenta;
			this->saldo = 0.00f;
		}
		//Metodos
		float getSaldo(){
			return this->saldo;
		}
		void depositar(float monto){
			if( monto >= 0 )
				this->saldo += monto; //se acepta y se suma
			else
				throw invalid_argument("Monto a depositar debe ser >= 0");
		}
		void retirar(float monto){
			if( monto < 0 )
				throw invalid_argument("Monto a retirar debe ser >= 0");
			else{
				if( monto > this->saldo )
					throw invalid_argument("Fondos insuficientes.");
				else
					this->saldo -= monto; //se acepta y se resta
			}
		}
};

#endif









