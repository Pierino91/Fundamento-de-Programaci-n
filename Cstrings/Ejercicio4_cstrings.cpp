#include <iostream>
#include <cstring>
using namespace std;
/*Diseñe una  función C++ int cveces(char *s, char *s1); que detecte la 
frecuencia de aparición de la cadena s1 dentro de la cadena s que se pasan 
como parámetros. 
*/

int cveces(char *s, char *s1);

int main(int argc, char *argv[]) {
	char frase[300];
	char buscar[20];
	
	cout<<"Ingrese frase: ";
	cin.getline(frase,300);
	cout<<"Ingrese frase a buscar: ";
	cin.getline(buscar,20);
	
	int c=cveces(frase,buscar);
	cout<<endl<<"La cantidad de veces que \""<<buscar<<"\" aparece en la frase es: "<< c;
	return 0;
}

int cveces(char *s, char *s1){
	int cont=0;
	
	char* p=strstr(s,s1);
	while (p!=NULL){
		cont++;
		p++;
		p=strstr(p,s1);
	}
	
	return cont;
}
