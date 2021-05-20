#include <iostream>
using namespace std;
/*Escriba un programa C++ que ingrese un valor y permita obtener el doble, 
el triple, la mitad o la cuarta parte de del dato ingresado. 
El usuario debe ingresar el valores y seleccionar la operación a realizar. */
	
int main(int argc, char *argv[]) {
	float valor;
	char op; //pedir que ingrese 'd' 't' 'm' 'c'
	
	cout<<"Ingrese un valor "; cin>>valor;
	
	cout<<endl<<endl<<"Seleccione la opcion a realizar"<<endl;
	cout<<"d: obtener el doble"<<endl;
	cout<<"t: obtener el triple"<<endl;
	cout<<"m: obtener la mitad"<<endl;
	cout<<"c: obtener la cuarta parte"<<endl;
	
	cin>>op;
	
	if (op=='d'){
		cout<<endl<<"El doble del numero es: "<< valor*2;}
	else if (op == 't'){
		cout<<endl<<"El triple del numero es: "<<valor*3;}
		else if (op == 'm'){
			cout<<endl<<"La mitad del  numero es: "<<valor/2;}
		     else if (op=='c')
					cout<<endl<<"La cuarta parte es: "<<valor/4;
			      else cout<<endl<<"La opcion ingresada no es correcta";

	return 0;
}

