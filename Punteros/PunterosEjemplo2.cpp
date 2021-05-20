#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int vector[10]={0,1,2,3,4,5,6,7,8,9}; 
	int *puntero;
	puntero = vector;
	/*Equivale a puntero = &vector[0];
	esto se lee como "dirección del primer elemento de vector" */ 
	
	cout <<"El valor apuntado por puntero es: "<< *puntero << endl;
	cout <<"La direccion de puntero es: "<< puntero << endl;
	puntero++; 
	/* puntero += el tamaño de un int*/ 
	cout <<endl<<"El valor apuntado por puntero es: "<< *puntero << endl;
	cout <<"La direccion de puntero es: "<< puntero << endl;
	/* dirección del segundo elemento */ 
	
	return 0;
}

