#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int vector[10]={0,1,2,3,4,5,6,7,8,9}; 
	int *puntero;
	puntero = vector;
	
	//Promedio de los datos con notación de punteros
	int acum=0;
	for(int i=0;i<10;i++)
		acum+=*(puntero+i); //acum+=vector[i]
	
	cout<<"El promedio es: "<<acum/10.0; 
	
	return 0;
}

