#include <iostream>
using namespace std;
/* Leer las notas que un grupo de estudiantes de un curso obtuvo en el examen de 
matemáticas y calcular el promedio de las mismas. La carga de notas finaliza 
cuando se lee un valor -1.
*/

int main(int argc, char *argv[]) {
	int cant=0;
	
	int notas[200]; //sobredimensiono
	
	//solo hago la lectura
	int nota;
	cout<<"Ingrese nota 1:";
	cin>>nota;
	
	while (nota !=-1){
		notas[cant]=nota;
		cant++;
		
		cout<<"Ingrese nota "<<cant+1<<": ";
		cin>>nota;
	}
	
	//procesamiento: PROMEDIO
	int acum=0;
	int i=0;
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

