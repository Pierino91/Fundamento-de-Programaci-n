#include <iostream>
#include <cstring>
using namespace std;
/* Escriba una función C++ llamada Insertar con 3 parámetros: cad1, cad2, i; 
que permita insertar cad2 en cad1 a partir de la posición i de cad1. La función 
debe modificar cad1. Por ejemplo: si cad1 contiene el string “El libro” y cad2 
el string “primer ”, la llamada a Insertar(cad1, cad2,4) debe lograr que cad1 
almacene  “El primer libro”. Nota: la función opera solo con cadenas al estilo C.
*/

char* Insertar(char* cad1, char* cad2, int i);
// también es válido hacer la funcion tipo void
int main(int argc, char *argv[]) {
	
	char cadena1[100],cadena2[100];
	int x;
	
	cout<<"Ingrese cadena 1: ";
	cin.getline(cadena1, 100);
	cout<<"Ingrese cadena 2: ";
	cin.getline(cadena2, 100);
	cout<<"Ingrese posición: "; cin>>x;
	
	Insertar(cadena1,cadena2,x);
	
	cout<<endl<<"La cadena modificada es: "<<cadena1;
	return 0;
}

char* Insertar(char* cad1, char* cad2, int i){
	char aux[100];
	strcpy(aux,cad1+i-1);
	strcpy(cad1+i-1,cad2);
	strcat(cad1,aux);
	
	return cad1;
}
