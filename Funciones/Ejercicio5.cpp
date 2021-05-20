#include <iostream>
using namespace std;
/*Considere el struct alumno {int DNI, edad; char carrera;}, donde carrera es un
char con la inicial ‘T’, ‘B’, ‘L’ (Transporte, Bioingenieria, Licenciatura en 
Bioinformática). Escriba una función que reciba como parámetros un arreglo de 
tipo alumno, su longitud y retorne todos los datos del alumno de mayor edad. 
Use la función en un programa cliente. 
*/

struct alumno {int DNI, edad; 
               char carrera;};

alumno mayor_edad (alumno arre[], int longitud); //prototipo

int main(int argc, char *argv[]) {
	alumno curso[100];
	cout<<"Ingrese cantidad de datos a leer";
	int cant;
	cin>>cant;
	
	for(int i=0;i<cant;i++){
		cout<<endl<<"Ingrese DNI, edad y carrera: T, B o L del alumno "<<i+1<<": ";
		cin>>curso[i].DNI>>curso[i].edad>>curso[i].carrera;
	}
	
	//llamada a la función
	alumno mayor=mayor_edad(curso, cant);
	
	cout<<"El alumno de mayor edad es: "<<mayor.DNI<<" cuya edad es: "<<mayor.edad;
	cout<<" y pertenece a la carrera "<<mayor.carrera;
	
	return 0;
}

//implementación
alumno mayor_edad (alumno arre[], int longitud){
	alumno al_mayor_edad=arre[0];
	int edad =arre[0].edad;
	
	for(int i=1;i<longitud;i++){
		if (arre[i].edad>edad){
			edad=arre[i].edad;
			al_mayor_edad =arre[i];
		}//fin if
	}//fin for
	return al_mayor_edad;
}







