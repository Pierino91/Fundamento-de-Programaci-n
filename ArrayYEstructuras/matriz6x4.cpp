#include <iostream>
using namespace std;
/*Leer una matriz de 6x4 elementos. Informar el elemento ubicado en la 
fila 2 columna 4 con un mensaje alusivo. Obtener también los elementos de la 
3er columna y de la fila 5.
*/
int main(int argc, char *argv[]) {
	int matriz[6][4];
	for (int i=0;i<6;i++)
		for(int j=0;j<4;j++){
			cout<<"Ingrese valor de la fila "<<i+1<<" columna "<<j+1<<": ";
			cin>>matriz[i][j];
		}
	
	//muestro toda la matriz
	cout<<endl;
	for (int i=0;i<6;i++){
		for(int j=0;j<4;j++){
			cout<<matriz[i][j]<<"  ";
		}
		cout<<endl;
		}
	
	cout<<endl<<endl<<"El elemento de la fila 2, columna 4 es: "<<matriz[1][3];
	
	cout<<endl<<endl<<"Los elementos de la columna 3 son: "<<endl;
	for(int i=0;i<6;i++)
		cout<<matriz[i][2]<<endl;
	
	cout<<endl<<endl<<"Los elementos de la fila 5 son: ";
	for (int j=0;j<4;j++)
		cout<<matriz[4][j]<<"  ";
	
	return 0;
}

