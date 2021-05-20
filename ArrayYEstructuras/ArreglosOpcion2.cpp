#include <iostream>
using namespace std;
/*Leer las notas que un grupo de estudiantes de un curso obtuvo en el examen de 
matemáticas y calcular el promedio de las mismas. La cantidad de notas a leer se 
ingresa por teclado.
*/
int main(int argc, char *argv[]) {
	int cant;
	cout<<"Ingrese la cantidad de notas a leer: ";
	cin>>cant;
	
	int notas[200]; //sobredimensiono
	
	int i=0;
	//solo hago la lectura
	while (i<cant){
		cout<<"Ingrese nota "<<i+1<<": ";
		cin>>notas[i];
		i++;
	}
	
	//procesamiento: PROMEDIO
	int acum=0;
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

