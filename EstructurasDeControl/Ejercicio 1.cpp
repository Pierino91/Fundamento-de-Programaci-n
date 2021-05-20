#include <iostream>
using namespace std;
/*Ingrese un número e informe:
	si es par o impar; 
si es múltiplo de 5 y 3 a la vez.*/

int main(int argc, char *argv[]) {
	int numero;
	cout<<"Ingrese numero: "; cin>>numero;
	
	
	//Informo si el numero es par o impar
	if (numero%2 == 0)
		cout<<endl<<"El numero ingresado es par";
	else cout<<endl<<"El numero ingresado es impar";
	
	//Informo si el numero es multiplo de 3 y 5 a la vez
	if (numero%3==0 && numero%5==0)
		cout<<endl<<"El numero ingresado es multiplo de 3 y 5 a la vez";
	
	return 0;
}

