#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
/* Escriba un programa que permita al usuario leer interactivamente un dato tipo
cstring y exhiba un menú con las opciones: 
1. Pasar a Mayúsculas 
2. Pasar a Minúsculas 
3. Solo la inicial con mayúsculas. 
El programa debe resolver la opción seleccionada por el usuario. 
*/
int main(int argc, char *argv[]) {
	char cad[100];
	cout<<"Ingrese frase: ";
	cin.getline(cad,100);
	
	int op;
	cout<<endl<<"Ingrese alguna de las siguientes opciones: "<<endl;
	cout<<"1. Pasar a Mayusculas"<<endl;
	cout<<"2. Pasar a Minusculas"<<endl;
	cout<<"3. Solo la inicial con mayusculas"<<endl;
	
	cin>>op;
	
	switch(op){
	case 1: strupr(cad);
			cout<<endl<<cad<<endl;
			break;
	case 2: strlwr(cad);
			cout<<endl<<cad<<endl;
			break;
	case 3: cad[0]=toupper(cad[0]);
			cout<<endl<<cad<<endl;
			break;
	default: cout<<"La opcion ingresa no es correcta";
	}
	
	return 0;
}

