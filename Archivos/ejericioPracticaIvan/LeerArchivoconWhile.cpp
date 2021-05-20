#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream L;
	char datos[50];
	L.open("datosGenerados.txt");
	if(L.is_open())
		cout<<"el archivo abrió!"<<endl;
	else
		cout<<"no se abrió el archivo"<<endl;
	int contadorLineas=0;
	cout<<"El contenido del archivo datosGenerados.txt es:"<<endl;
	while(L.getline(datos,50)){
		cout<<datos<<endl;
	    contadorLineas++ };
	
	L.close();
	
	
	return 0;
}

