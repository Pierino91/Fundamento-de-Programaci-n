#include <iostream>
#include <fstream>
using namespace std;
/*Una Universidad otorga 2 becas de intercambio entre los N estudiantes 
que hayan cursado y rendido 4 materias determinadas. Las notas obtenidas 
por estos alumnos se hallan en el archivo BECA2020.TXT. Cada línea 
contiene las 4 calificaciones obtenidas por cada estudiante en las 
materias 1, 2, 3 y 4, y luego su DNI, como se muestra en el recuadro. 
Las 2 becas se otorgan a los alumnos que tengan los 2 mejores promedios 
entre esas 4 notas y que hayan aprobado con 75 o más la asignatura 3. 
Escriba un programa C++ que permita acceder al archivo de texto 
BECA2020.TXT y haga los siguiente: 
a) Organice una matriz de enteros de N filas x 6 columnas:  en las primera 
columna deben estar el DNI y luego las 4 calificaciones; 
b) Obtenga el promedio (int) de las 4 notas de cada estudiante y agréguelo
en la 6ta columna; 
c) Llame a la función top2max(…) de modo que los 2 estudiantes en 
condiciones de acceder a la beca se ubiquen en las 2 primeras filas.; 
d) Sobreescriba el archivo BECA2020.TXT con los datos de la matriz final.
*/

void top2max(int** data, int N, int col=6);
	
int main(int argc, char *argv[]) {
	fstream archi("Beca2020.txt",ios::in);
	if (!archi.is_open()){
		cout<<"No se pudo abrir el archivo";
		return -1;
	}
	
	char aux[30]; 
	int cant=0;
	while(archi.getline(aux,30)){
		cant++;
	}
	archi.close();
	
	int** arre = new int*[cant]; //arreglo dinamico
	for(int i=0;i<cant;i++)
		arre[i]=new int[6];
	
	archi.open("Beca2020.txt",ios::in);
	if (!archi.is_open()){
		cout<<"No se pudo abrir el archivo";
		return -1;
	}
	
	for (int i=0;i<cant;i++){
		archi>>arre[i][1]>>arre[i][2]>>arre[i][3]>>arre[i][4]>>arre[i][0];
		archi.ignore();
		arre[i][5]=(arre[i][1]+arre[i][2]+arre[i][3]+arre[i][4])/4;
	} 
	archi.close();
	
	//Llamada a la función
	top2max(arre,cant,6);
	
	archi.open("Beca2020.txt",ios::out);
	for (int i=0;i<cant;i++){
		archi<<arre[i][1]<<" "<<arre[i][2]<<" "<<arre[i][3]<<" "<<arre[i][4]<<" ";
		archi<<arre[i][0]<<endl;
	}
	archi.close();
	
	for(int i=0;i<cant;i++)
		delete [] arre[i];
	delete [] arre; 
	
	return 0;
}

void top2max(int** data, int N, int col){
	int* aux=new int[col];
	// primer mejor
	for(int i=1;i<N;i++){
		if (data[0][5]<data[i][5] && data[i][3]>=75){
			for(int j=0;j<col;j++){
				aux[j]=data[0][j];
				data[0][j]=data[i][j];
				data[i][j]=aux[j];
			}
		}
	}
	//segundo mejor
	for(int i=2;i<N;i++){
		if (data[1][5]<data[i][5] && data[i][3]>=75){
			for(int j=0;j<col;j++){
				aux[j]=data[1][j];
				data[1][j]=data[i][j];
				data[i][j]=aux[j];
			}
		}
	}
	delete []aux;
}
