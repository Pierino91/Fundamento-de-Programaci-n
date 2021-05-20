#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;
/*Genera archivo Lista.dat a partir de Lista.txt*/

struct alumno{char nombre[80];
			  int n1,n2,n3;};

int main(int argc, char *argv[]) {
	
	ifstream arch_entrada("Lista.txt");
	ofstream arch_salida("Lista.dat",ios::binary|ios::out);
	
	if (!arch_entrada.is_open()){
		cout<<"El archivo Lista.txt no se pudo abrir";
		return 1;
	}
	
	if (!arch_salida.is_open()){
		cout<<"El archivo Lista.dat no se pudo crear";
		return 2;
	}
	
	// variable para leer los datos de Lista.txt
	alumno aux;
	
	while(!arch_entrada.eof()){
		//Leo archivo Lista.txt
		arch_entrada.getline(aux.nombre,80);
		arch_entrada>>aux.n1>>aux.n2>>aux.n3;
		arch_entrada.ignore();
		//Escribo archivo Lista.dat
		arch_salida.write((char*) &aux,sizeof(aux));
	}
	
	cout<<"Se creo el archivo Lista.dat";
	arch_entrada.close();
	arch_salida.close();
	return 0;
}
