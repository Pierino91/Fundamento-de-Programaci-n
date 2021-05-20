#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;
/*Modifique el ejercicio anterior para que en lugar de escribir un nuevo archivo, 
se modifique Lista.dat añadiendo el promedio y la condición de cada estudiante.
*/

struct alumno{char nombre[80];
int n1,n2,n3;};

float promedio(int,int,int);
char* condicion(char* c, float p);

int main(int argc, char *argv[]) {
	
	fstream arch_entrada;
	arch_entrada.open("Lista.dat",ios::binary|ios::in|ios::out|ios::ate);
	
	if (!arch_entrada.is_open()){
		cout<<"El archivo Lista.dat no se pudo abrir";
		return 1;
	}
	
	int cant=arch_entrada.tellg()/sizeof(alumno);
	
	alumno* arre=new alumno[cant];
	
	//Leo archivo Lista.dat
	arch_entrada.seekg(0,ios::beg);
	arch_entrada.read((char*)arre,sizeof(alumno)*cant);

	
	float p;
	char cond[12];
	//Escribo el archivo Lista.dat
	arch_entrada.seekg(0,ios::beg);
	for (int j=0;j<cant;j++){
		arch_entrada.write((char*)(arre+j),sizeof(alumno));
		p=promedio(arre[j].n1,arre[j].n2,arre[j].n3);
		arch_entrada.write((char*)&p,sizeof(p));
		condicion(cond,p);
		arch_entrada.write(cond,sizeof(cond));
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
