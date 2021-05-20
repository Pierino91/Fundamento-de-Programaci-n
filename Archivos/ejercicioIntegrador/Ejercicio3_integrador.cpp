#include <iostream>
#include <cstring>
using namespace std;
/*La funci�n upper1_switch(..)  es nula y recibe un cstring como par�metro formado 
por 2 palabras (un solo espacio en blanco intermedio). Su objetivo es modificar 
cada palabra del csting colocando la inicial en may�sculas y el resto de la palabra 
en min�sculas, adem�s intercambia la posici�n de las 2 palabras. Escriba su c�digo.  
*/

void upper1_switch(char* cadena);  
int main(int argc, char *argv[]) {
	char cad[100];
	cout<<"Ingrese dos palabras: ";
	cin.getline(cad,100);
	
	upper1_switch(cad);
	
	cout<<endl<<endl<<"La cadena modificada es: "<<cad;
	return 0;
}

void upper1_switch(char* cadena){
	strlwr(cadena);
	cadena[0]=cadena[0]-32;
	char* p=strchr(cadena,' ');
	*(p+1)=*(p+1)-32;
	char aux[100];
	strncpy(aux,cadena, p-cadena); //copia en aux la primera palabra
	aux[p-cadena]='\0';
	strcpy(cadena,p+1); //copia segunda palabra
	strcat(cadena," ");
	strcat(cadena,aux);
}
