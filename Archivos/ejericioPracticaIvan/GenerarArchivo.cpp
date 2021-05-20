#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	ofstream E;
	
	E.open("datosGenerados.txt",ios::out|ios::trunc);
	if(E.is_open())
		cout<< "El archivo se abrió correctamente";
	else
		cout<<"El archivo no se abrió correctamente";
	
	E<< "hola chau"<<endl;
	E<< "hoy : "<<"13/5/2021"<<endl;
	E<< "el tiempooooooooo : "<<"soleado"<<endl;
	
	E.close();
	
		
	return 0;
}

