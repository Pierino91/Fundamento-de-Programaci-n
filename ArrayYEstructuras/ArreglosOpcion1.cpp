#include <iostream>
using namespace std;
/*Leer las 30 notas que un grupo de estudiantes de un curso obtuvo en el examen 
de matemáticas y calcular el promedio de las mismas. 
*/
int main(int argc, char *argv[]) {
	
	int const cant=30;//cantidad de alumnos
	
	int notas[cant];
	int acum=0;
	int i=0;
	//solo hago la lectura
	while (i<cant){
		cout<<"Ingrese nota "<<i+1<<": ";
		cin>>notas[i];
		i++;
	}
	
	//procesamiento: PROMEDIO
	i=0;
	while (i<cant){
		acum+=notas[i]; //acum=acum+nota
		i++;
	}
	
	cout<<endl<<"El promedio es: "<<acum/30.0;
	
	//procesamiento: MAYOR
	int mayor=notas[0];
	int pos=1;
	i=1;
	while (i<cant){
		if (notas[i]>mayor){
			mayor=notas[i];
			pos=i+1;
		}
		i++;
	}
	
	cout<<endl<<"La mayor nota es: "<<mayor;
	cout<<endl<<"El alumno co mayor nota es el número: "<<pos;
	return 0;
}

