#include <iostream>
using namespace std;
/* Leer las notas que un grupo de estudiantes de un curso obtuvo en el examen 
de matemáticas y calcular el promedio de las mismas. La cantidad N de notas a 
leer se ingresa por teclado.
*/
float promedio(int* arre, int c);

int main(int argc, char *argv[]) {
	int N;
	cout<<"Ingrese la cantidad de notas a leer: ";cin>>N;
	
	int* notas =new int[N]; //definicion de arreglo dinámico
	
	for(int i=0;i<N;i++){
		cout<<"Ingrese nota "<<i+1<<": ";
		cin>>notas[i];
	}
	
	//promedio de las notas
	float p=promedio(notas,N);
	
	cout<<endl<<"El promedio de las notas es: "<<p;
	
	delete[]notas;
	return 0;
}

float promedio(int* arre, int c){
	int acum=0;
	for(int i=0;i<c;i++){
		acum+=arre[i];
	}
	return (acum*1.0)/c;
}
