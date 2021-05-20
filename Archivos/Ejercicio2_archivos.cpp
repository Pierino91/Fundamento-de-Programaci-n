#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;
/*Modifique el ejercicio anterior para que en lugar de escribir un nuevo archivo, 
se modifique Lista.txt añadiendo 2 filas más por alumno: una con el promedio y 
otra con la condición.
*/

float promedio(int,int,int);
char* condicion(char* c, float p);

int main(int argc, char *argv[]) {
	
	fstream arch_entrada;
	arch_entrada.open("Lista.txt",ios::in);
	
	if (!arch_entrada.is_open()){
		cout<<"El archivo no se pudo abrir";
		return 1;
	}
	
	char nombres[100][80];
	int n1[100],n2[100],n3[100];
	int i=0;
	//Leo el archivo Lista.txt
	while(!arch_entrada.eof()){
		arch_entrada.getline(nombres[i],80);
		arch_entrada>>n1[i]>>n2[i]>>n3[i];
		arch_entrada.ignore();
		i++;
	}
	arch_entrada.close();
	
	//Abro nuevamente el archivo pero para modificarlo y añadir la nueva informacion
	arch_entrada.open("Lista.txt",ios::out);
	
	if (!arch_entrada.is_open()){
		cout<<"El archivo no se pudo abrir";
		return 1;
	}
	
	float p;
	char cond[12];
	//Escribo el archivo Lista.txt
	for (int j=0;j<i;j++){
		arch_entrada<<j+1<<". "<<nombres[j]<<endl;
		arch_entrada<<n1[j]<<" "<<n2[j]<<" "<<n3[j]<<endl;
		p=promedio(n1[j],n2[j],n3[j]);
		arch_entrada<<"Promedio: "<<p<<endl;
		condicion(cond,p);
		arch_entrada<<"Condicion: "<<cond<<endl;
	}
	
	arch_entrada.close();
	return 0;
}

float promedio(int a,int b,int c){
	return (a+b+c)/3.0;
}

char* condicion(char* c, float p){
	if (p>80)
		strcpy(c,"Promocional");
	else if (p>=60) 
		strcpy(c,"Regular");
	else strcpy(c,"Libre");
	return c;
}
