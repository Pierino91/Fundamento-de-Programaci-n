#include <iostream>
using namespace std;
/*Escriba un programa que permita leer los aportes realizados a una asociación 
cooperadora por sus estudiantes, durante los 12 meses del año. Por cada aporte 
se registra: año que cursa (1 al 6), mes (1 al 12) y monto. La carga de datos 
finaliza cuando se ingresa un curso igual a 0. 
Por medio de una función obtenga cuál fue el aporte realizado por cada uno de 
los cursos e indicar cual fue el que más aportó. Muestre los resultados.*/

void totales (int arre[][12], int acum[],int n);
//otras posibilidades
//void totales (int arre[][13], int n); //necesito un arreglo de 6x13
//int totales (int arre[][12], int n, int curso);//necesito llamar la función 6 veces

//Propongo una función para indicar cual fue el curso que más aportó
int cursoMayorAporte(int arre[][12], int n); //opcion 1
int cursoMayorAporte(int acum[],int n); //opcion 2
	
int main(int argc, char *argv[]) {
	
	int aportes[6][12]={{0}};
	
	int curso, mes, monto;
	
	cout<<"Ingrese el curso del aportante o cero para finalizar: "; 
	cin>>curso;
	while(curso!=0){	
	cout<<"Ingrese mes del aporte: ";cin>>mes;
	cout<<"Ingrese monto aportado: ";cin>>monto;
	aportes[curso-1][mes-1] = aportes[curso-1][mes-1]+ monto;
	
	cout<<"Ingrese el curso del aportante o cero para finalizar: "; 
	cin>>curso;
	}
	
	int totalRec[6];
	totales(aportes, totalRec,6);
	
	int CMA=cursoMayorAporte(totalRec, 6);
	
	cout<<"Los aportes de cada curso fueron: "<<endl;
	for(int i=0;i<6;i++)
		cout<<i+1<<": "<<totalRec[i]<<endl;
	cout<<endl<<endl<<"El curso que más aportó fue: " <<CMA;
	
	return 0;
}

void totales (int arre[][12], int acum[],int n){
	for(int i=0;i<n;i++)
		acum[i]=0;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<12;j++)
			acum[i]+=arre[i][j];	
}

int cursoMayorAporte(int arre[][12], int n){ //opcion 1
	int aux=0;
	int mayorAporte=0;
	int curso;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<12;j++)
			aux+=arre[i][j];
		if (aux>mayorAporte){
			mayorAporte=aux;
			curso=i+1;
		}
		aux=0;
	}
	return curso;
}

int cursoMayorAporte(int acum[],int n) {//opcion 2
	int mayorAporte=acum[0];
	int curso=1;
	
	for(int i=1;i<n;i++)
		if (acum[i]>mayorAporte){
			mayorAporte=acum[i];
			curso=i+1;
		}
	return curso;
}
