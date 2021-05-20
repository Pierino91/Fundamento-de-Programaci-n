#include <iostream>
using namespace std;
/*Escriba una función que permita intercambiar los contenidos de 2 parámetros 
tipo float. Escriba un programa cliente de dicha función.
*/

void intercambia(float &,float &); //prototipo
	
int main(int argc, char *argv[]) {
	
	float valor1,valor2;
	cout<<"Ingrese valor 1: "; cin>>valor1;
	cout<<"Ingrese valor 2: "; cin>>valor2;
	
	intercambia(valor1,valor2); //llamada
	
	cout<<endl<<endl<<"El valor 1 es: "<<valor1;
	cout<<endl<<"El valor 2 es: "<<valor2;
	
	//llamada
	
	return 0;
}

//implementacion
void intercambia(float &A,float &B){
	float aux=A;
	A=B;
	B=aux;
}
