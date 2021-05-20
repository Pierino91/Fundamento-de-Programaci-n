#include <iostream>
#include <cstring>
using namespace std;
/*Escriba un programa que permita ingresar una lista de apellidos y nombres de 
10 personas (apellido y nombre se asignan a una sola variable). 
Utilice para cada persona una variable de tipo cstring. El programa debe 
informar un listado con los 10 apellidos y luego un listado con los 10 nombres. 
Nota: Considere apellidos formados por una única palabra. La presencia del 
primer espacio en blanco indica el fin del apellido. Ej: Perez Carlos Federico.
*/
int main(int argc, char *argv[]) {
	int const c=3;
	char cad[c][100];
	
	cout<<"Ingrese apellido y nombres de "<<c<<" personas";
	for(int i=0;i<c;i++)
		cin.getline(cad[i],100);
	
	char nombres[c][70];
	char apellidos[c][70];
	
	char* p;
	for(int i=0;i<c;i++){
		p=strchr(cad[i],' ');
		strncpy(apellidos[i],cad[i],p-cad[i]);
		apellidos[i][p-cad[i]]='\0';
		p++;
		strcpy(nombres[i],p);
	}
	
	cout<<endl<<"El listado de apellidos es: "<<endl;
	for(int i=0;i<c;i++){
		cout<<apellidos[i]<<endl;
	}
	
	cout<<endl<<"El listado de nombres es: "<<endl;
	for(int i=0;i<c;i++){
		cout<<nombres[i]<<endl;
	}
	return 0;
}

