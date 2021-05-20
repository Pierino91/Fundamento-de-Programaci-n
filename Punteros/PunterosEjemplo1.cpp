#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int A, B;
	int *entero;
	
	B = 213; //B vale 213
	
	entero = &A; /* entero apunta a la dirección de la variable A */
	*entero = 103; /* equivale a la línea A = 103; */
	B = *entero; /* equivale a B = A; */
	
	cout<<"El valor de A es: "<<A<<" y su direccion es: "<<&A<<endl;
	cout<<"El valor de B es: "<<B<<" y su direccion es: "<<&B<<endl;
	cout<<endl;
	cout<<"El valor de entero es: "<<entero<<" y su direccion es: "<<&entero<<endl;
	cout<<"El valor apuntado por entero es: "<<*entero;
	return 0;
}

