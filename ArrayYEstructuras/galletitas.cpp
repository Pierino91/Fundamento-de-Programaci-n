#include <iostream>
using namespace std;
/*
Una empresa est� haciendo un estudio de mercado sobre su l�nea de productos y 
desea conocer datos sobre la ventas de los primeros 6 meses del a�o. Su producto 
son galletitas que se venden en cuatro sabores: vainilla, chocolate, lim�n y naranja. 
Escriba un programa C++ que permita ingresar por pantalla los datos de las cantidades 
vendidas de cada tipo de galletitas entre enero y junio. 
A continuaci�n, calcular e informar:

a. �Cu�l es el tipo de galletita que m�s se vendi�?
b. �Cu�l fue el mes de menor venta? 
c. �Cu�l fue el tipo de galletita m�s vendida en junio?
*/

int main(int argc, char *argv[]) {
	int ventas[4][6];
	
	cout<<"Ingrese ordenamente los datos de cantidades vendidas de tipos de galletitas para cada uno de los meses"<<endl;
	cout<<"tipo 1: vainilla"<<endl;
	cout<<"tipo 2: chocolate"<<endl;
	cout<<"tipo 3: limon"<<endl;
	cout<<"tipo 4: naranja"<<endl<<endl;
	
	// leo ordenadamente por filas: primero los datos de la fila 1, luego la 2, etc.
	for(int fila=0;fila<4;fila++){
		for(int mes=0;mes<6;mes++){
			cout<<"Ingrese cantidad de galletita tipo "<<fila+1<<" en el mes "<<mes+1<<": ";
			cin>>ventas[fila][mes];
		}
		cout<<endl;}
	
	//a. �Cu�l es el tipo de galletita que m�s se vendi�?
	int acum=0;
	int Mayorventa=0;
	int tipomasvendido;
	int c=0;
	for (int g=0; g<4;g++){
		for(int m=0;m<6;m++){
			acum=acum+ventas[g][m];
		}
		if (acum>Mayorventa){
			Mayorventa=acum;
			tipomasvendido=g+1;
		}
		acum=0; // reinicio el acumulador para sumar las cantidades de la fila siguiente
	}
	
	cout<<endl<<"El tipo de galletita mas vendido fue el "<<tipomasvendido<<endl;
	
	// b. �Cu�l fue el mes de menor venta? 
	/* Se resuelve de forma similar al anterior.
	Par probar otras formas, les propongo usar un arreglo de 6 elementos para 
	guardar lo acumulado en cada uno de los meses, en lugar de usar un �nico 
	acumulador (acum). Est� inicializado en cero para que cada elemento del 
	arreglo se pueda comportar como un acumulador (�tengo 6 acumuladores!)*/
	
	int vtameses[6]={0};
	
	//a completar...
	
	return 0;
}

