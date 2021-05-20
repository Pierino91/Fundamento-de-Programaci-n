#include <iostream>
#include <cstdlib>
using namespace std;
/*Generar una matriz cuadrada de 10x10 elementos con valores al azar 
entre 1 y 5000. Generar un vector con los elementos que estén por encima 
de la diagonal principal. Informar el vector generado y los elementos de 
la fila 7 de la matriz */

int main(int argc, char *argv[]) {
	int matriz[10][10];
	
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++){
			matriz[i][j]=(rand()%5000)+1; //rand()%5000 da un valor entre 0 y 4999
		}
	
	int vector[45];
	int k=0;
	for(int i=0;i<9;i++)
		for(int j=i+1;j<10;j++){
			vector[k]=matriz[i][j];
			k++;
		}
	
	cout<<"Los datos que estan sobre la diagonal principal son: "<<endl;
	for(k=0;k<45; k++){
		cout<<vector[k]<<"  ";
	}
	return 0;
}

