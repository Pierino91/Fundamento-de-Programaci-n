#include <iostream>
using namespace std;
/*Escriba un programa C++ que ingrese un valor y permita obtener el doble, 
el triple, la mitad o la cuarta parte del dato ingresado. 
El usuario debe ingresar el valor y seleccionar la operación a realizar. */
	
int main(int argc, char *argv[]) {
	float valor;
	cout<<"Ingrese un valor "; cin>>valor;
	
	char op; // pedir que ingrese d, t, m, c
	cout<<endl<<endl<<"Seleccione alguna de las opciones:"<<endl;
	cout<<"d: doble"<<endl;
	cout<<"t: triple"<<endl;
	cout<<"m: mitad"<<endl;
	cout<<"c: cuarta parte"<<endl;
	cin>>op;
	
	if (op == 'd')
		cout<<endl<<"El doble del numero es: "<<valor*2;
	
	if (op == 't'){
		cout<<endl<<"El triple del numero es: "<<valor*3;}
		
	if (op == 'm')
		cout<<endl<<"La mitad del  numero es: "<<valor/2;
			
	if (op=='c')
		cout<<endl<<"La cuarta parte del numero es: "<<valor/4;
	
	if (op!='c' && op!='t' && op!='m' && op!='d')
		cout<<endl<<"La opcion ingresada no es correcta";
	
	return 0;
}

