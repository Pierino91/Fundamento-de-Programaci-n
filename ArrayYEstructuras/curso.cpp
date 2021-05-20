#include <iostream>
using namespace std;
/* En un curso se registran, por cada estudiante, su número de DNI y las notas 
de 4 parciales. Se desea registrar si el estudiante ha aprobado la materia. 
Para eso, debe tener aprobados con 6, tres de los cuatro parciales. A partir de 
los datos muestre por pantalla cuántos estudiantes aprobaron. Se sabe que el 
curso no tiene más de 100 estudiantes.
Use la estructura struct alumno {int DNI; float nota[4]; bool aprob;};
*/

struct alumno {int DNI; 
			   float nota[4]; 
			   bool aprob;};

int main(int argc, char *argv[]) {
	
	alumno curso[100]; //sobredimensiono porque no conozco la cantidad especifica
	int cant=0; //contador para definir longitud del arreglo
	
	int DNI;
	cout<<"Ingrese DNI del alumno o 0 para finalizar: ";
	cin>>DNI;
	while(DNI!=0){
		curso[cant].DNI=DNI;
		//vamos a leer notas
		for(int i=0;i<4;i++){
			cout<<"Ingrese nota "<<i+1<<": ";
			cin>>curso[cant].nota[i];
		}
		cant++;
		cout<<"Ingrese DNI del alumno o 0 para finalizar: ";
		cin>>DNI;
	}
	
	//procesar los datos
	int contAprob;
	for (int e=0;e<cant;e++){
		contAprob=0;
		for(int i=0;i<4;i++){
			if (curso[e].nota[i]>=6)
				contAprob++;
		}//for de las notas
		if (contAprob>=3)
			curso[e].aprob=true;
		else curso[e].aprob=false;
	}
	
	//cuento cuantos aprobaron
	int Aprobados=0;
	for (int e=0;e<cant;e++)
		if (curso[e].aprob==true)
			Aprobados++;
	
	cout<<endl<<"La cantidad de estudiantes aprobados es: "<<Aprobados;
	
	return 0;
}

