#include <iostream>
using namespace std;
/*Implemente una funci�n en C++ que permita realizar la potenciaci�n de n�meros 
enteros. 
Escriba un programa cliente de dicha funci�n.*/

//PROTOTIPO
int potencia(int base, int exp=2);

int main(int argc, char *argv[]) {
	int b,e;
	cout<<"Ingrese base y exponente: ";
	cin>>b>>e;
	
	//LLAMADA
	int r=potencia(b,e);
	cout<<"La potencia de "<<b<<" elevado a "<<e<<" es: "<<r;
	
	cout<<endl<<"La potencia de "<<b<<" elevado al cuadrado es "<<potencia(b);
	return 0;
}

//IMPLEMENTACION
int potencia(int base, int exp){
	int r=1;
	for(int i=0;i<exp;i++)
		r=r*base;
	return r;
}
