#include <iostream>
/* Genere un programa C++ que lea por teclado dos fracciones, las sume y muestre 
el resultado por pantalla.*/
	
using namespace std;

struct fraccion{
	int num,den;
};

int main(int argc, char *argv[]) {
	
	fraccion f1,f2;
	cout<<"Ingrese numerador y denominador de la fraccion 1: ";
	cin>>f1.num>>f1.den;
	cout<<endl<<"Ingrese numerador y denominador de la fraccion 2: ";
	cin>>f2.num>>f2.den;
	
	fraccion res;
	res.den=f1.den*f2.den;
	res.num=f1.num*f2.den+f2.num*f1.den;
	
	cout<<endl<<"El resultado es: "<<res.num<<"/"<<res.den;
	
	
	return 0;
}

