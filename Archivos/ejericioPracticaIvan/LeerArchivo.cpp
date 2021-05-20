#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream L;
	
	L.open("datosGenerados.txt");
	char aux[50],fecha[50],tiempo[50];
	//------Lectura usando >> -----------
	//L>> aux>> aux>>aux>>aux>>fecha
	// >>	aux>>aux>>aux>>tiempo;
	//----------------------------------
	
	//---Lectura con getline() y >> ----------
	L.getline(aux,50);//leemos hola chau
	L.getline(aux,50,':');//leemos hoy :
	L>>fecha;//13/5/2021
	L.ignore();//ignoramos el caracter de fin de línea
	L.getline(aux,50,':');
	L>>tiempo;
	//---------------------------------------
		
	
	cout << "la fecha es:"<< fecha<<endl;
	cout << "el tiempo está:"<<tiempo;
	
	L.close();
	
	return 0;
}

