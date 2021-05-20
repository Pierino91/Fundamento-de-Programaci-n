#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;
/*Lea el archivo binario Lista.dat, el cual contiene registrado el nombre de un 
estudiante y tres notas. El archivo de grabó usando el método 
archi.write((char*)&alumno, sizeof(alumno), donde alumno es un struct que contiene 
como miembros el nombre de un estudiante (char nom[80]) y tres enteros con las 
notas. Obtenga el promedio de cada estudiante. Escriba otro archivo Condicion.txt 
que contenga en la primera línea el nombre del alumno y su promedio y en la segunda 
línea la condición del alumno. La condición queda determinada según el promedio 
de las notas: entre 60 y 80, alumno regular, mayor a 80 promocional y libre en 
otro caso.
*/

struct alumno{char nombre[80];
int n1,n2,n3;};

float promedio(int,int,int);
char* condicion(char* c, float p);

int main(int argc, char *argv[]) {
	
	fstream arch_entrada;
	arch_entrada.open("Lista.dat",ios::binary|ios::in);
	ofstream arch_salida("Condicion.txt");
	
	if (!arch_entrada.is_open()){
		cout<<"El archivo de entrada no se pudo abrir";
		return 1;
	}
	
	if (!arch_salida.is_open()){
		cout<<"El archivo de salida no se pudo crear";
		return 2;
	}
	
	alumno aux;
	float p;
	char cond[12];
	arch_entrada.seekg(0,ios::end);
	int cbytes=arch_entrada.tellg();
	int cant=cbytes/sizeof(alumno);
	arch_entrada.seekg(0,ios::beg);
	for(int i=0;i<cant;i++){
		//Leo archivo Lista.dat
		arch_entrada.read((char*)&aux,sizeof(aux));
		//calculo el promedio y determino la condición
		p=promedio(aux.n1,aux.n2,aux.n3);
		condicion(cond,p);
		//Escribo archivo Condicion.txt
		arch_salida<<aux.nombre<<"  "<<p<<endl;
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
