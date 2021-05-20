#include <iostream>
#include <string>
using namespace std;
/*Escriba un programa a partir del cual un usuario pueda ingresar una frase 
cualquiera y determine a través de funciones: 
La cantidad de vocales de la frase; 
La cantidad de consonantes; 
La cantidad de letras. 
*/
int cantVocales(char* c);
int cantConson(char* c);
int cantLetras(char* c);

int main(int argc, char *argv[]) {
	char cad[100];
	cout<<"Ingrese frase: ";
	cin.getline(cad,100);
	
	cout<<endl<<"La cantidad de vocales son: "<<cantVocales(cad);
	cout<<endl<<"La cantidad de consonantes son: "<<cantConson(cad);
	cout<<endl<<"La cantidad de letras son: "<<cantLetras(cad);
		
	return 0;
}

int cantVocales(char* c){
	int cont=0,i=0;
	while(c[i]!='\0'){
		if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
			cont++;
		if(c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
			cont++;
		i++;
	}
	return cont;
}

int cantConson(char* c){
	int cont=0,i=0;
	while(c[i]!='\0'){
		if((c[i]>=65 && c[i]<=90)||(c[i]>=97 && c[i]<=122))
			if(c[i]!='a'&& c[i]!='e'&&c[i]!='i'&&c[i]!='o'&&c[i]!='u'&&c[i]!='A'&&c[i]!='E'&&c[i]!='I'&&c[i]!='O'&&c[i]!='U')
				cont++;
		i++;
	}
	return cont;
}

int cantLetras(char* c){
	int cont=0,i=0;
	while(c[i]!='\0'){
		if((c[i]>=65 && c[i]<=90)||(c[i]>=97 && c[i]<=122))
			cont++;
		i++;
	}
	return cont;
}

