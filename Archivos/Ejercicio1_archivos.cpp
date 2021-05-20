#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;
/*Lea el archivo de texto Lista.txt en un programa C++ y obtenga el promedio de 
cada estudiante. Escriba otro archivo Condicion.txt que contenga en la primera 
línea el nombre del alumno y su promedio y en la segunda línea la condición 
del alumno. La condición queda determinada según el promedio de las notas: entre 
60 y 80, alumno regular, mayor a 80 promocional y libre en otro caso.
*/

float promedio(int,int,int);
char* condicion(char* c, float p);

int main(int argc, char *argv[]) {
	
	fstream arch_entrada;
	arch_entrada.open("Lista.txt",ios::in);
	ofstream arch_salida("Condicion.txt");
	
	if (!arch_entrada.is_open()){
		cout<<"El archivo no se pudo abrir";
		return 1;
	}
	
	if (!arch_salida.is_open()){
		cout<<"El archivo no se pudo crear";
		return 2;
	}
	
	char nombres[80];
	int n1,n2,n3;
	float p;
	char cond[12];
	while(!arch_entrada.eof()){
		//Leo archivo Lista.txt
		arch_entrada.getline(nombres,80);
		arch_entrada>>n1>>n2>>n3;
		arch_entrada.ignore();
		//calculo el promedio y determino la condición
		p=promedio(n1,n2,n3);
		condicion(cond,p);
		//Escribo archivo Condicion.txt
		arch_salida<<nombres<<"  "<<p<<endl;
		arch_salida<<"Condicion: "<<cond<<endl;
	}
	
	arch_entrada.close();
	arch_salida.close();
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
