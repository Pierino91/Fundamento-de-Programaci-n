#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
/*Escriba una función que permita intercambiar dos filas de un arreglo 
bidimensional de datos. La posición de las filas a intercambiar se pasa 
como parámetro. Escriba un programa cliente de dicha función.
*/

void intercambia(int arre[][5],int fil1, int fil2);
void intercambia(float arre[][5],int fil1, int fil2);

int main(int argc, char *argv[]) {
	
	int tabla[6][5];
	for(int i=0;i<6;i++)
		for (int j=0;j<5;j++)
			tabla[i][j]=rand()%100;
	
	cout<<"Tabla original:"<<endl;
	for(int i=0;i<6;i++){
		for (int j=0;j<5;j++)
			cout<<setw(8)<<tabla[i][j];
		cout<<endl;
	}
	
	intercambia(tabla,1,6);
	
	cout<<endl<<"Tabla modificada:"<<endl;
	for(int i=0;i<6;i++){
		for (int j=0;j<5;j++)
			cout<<setw(8)<<tabla[i][j];
		cout<<endl;
	}
	
	return 0;
}

void intercambia(int arre[][5],int fil1, int fil2){
	int aux[5];
	for(int i=0;i<5;i++)
		aux[i]=arre[fil1-1][i];
	
	for(int i=0;i<5;i++)
		arre[fil1-1][i]=arre[fil2-1][i];
	
	for(int i=0;i<5;i++)
		arre[fil2-1][i]=aux[i];
}

void intercambia(float arre[][5],int fil1, int fil2){
	float aux[5];
	for(int i=0;i<5;i++)
		aux[i]=arre[fil1-1][i];
	
	for(int i=0;i<5;i++)
		arre[fil1-1][i]=arre[fil2-1][i];
	
	for(int i=0;i<5;i++)
		arre[fil2-1][i]=aux[i];
}
