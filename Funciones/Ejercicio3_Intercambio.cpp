#include <iostream>
using namespace std;
/*Escriba una función que permita intercambiar dos valores de un arreglo de 
datos flotantes. La posición de los valores a intercambiar se pasa como parámetro. 
Escriba un programa cliente de dicha función.
*/

void intercambia (float arre[], int pos1, int pos2); //prototipo
	
int main(int argc, char *argv[]) {
	
	float A[10];
	for(int i=0;i<10;i++){
		cout<<"Ingrese valor "<<i+1<<": ";
		cin>>A[i];
	}
	
	intercambia(A,1,7);
	
	cout<<endl<<"El arreglo modificado es: "<<endl;
	
	for(int i=0;i<10;i++){
		cout<<A[i]<<endl;
	}
		
	return 0;
}

void intercambia (float arre[], int pos1, int pos2){
	float aux = arre[pos1-1];
	arre[pos1-1]=arre[pos2-1];
	arre[pos2-1]=aux;
}
