#include <iostream>
#include <fstream>
using namespace std;
/*Escriba un programa C++ de conversión que permita modificar la cabecera de un 
archivo llamado “imagen.jgx” generado por cierto software para poder utilizarlo 
con otras aplicaciones. Este archivo tiene una cabecera de 54 bytes: los primeros 
30 bytes se usan para almacenar el nombre del software (string),  los siguientes 
4 para la versión (float),  los siguientes 12 bytes representan un código de la 
empresa que lo editó (string) y los últimos 8 bytes son 2 enteros con el mes y el 
año de la edición. Para convertirlo se debe modificar la versión y la fecha de 
edición. Estos nuevos datos se ingresan interactivamente en modo consola. 
*/
int main(int argc, char *argv[]) {
	fstream archi("imagen.jgx",ios::binary|ios::out);
	if (!archi.is_open()){
		cout<<"No se pudo abrir el archivo";
		return -1;
	}
	cout<<"Ingrese nuevo dato de versión: ";
	float version;
	cin>>version;
	cout<<endl<<"Ingrese mes y año de edicion";
	int mes,anio;
	cin>>mes>>anio;
	
	archi.seekp(30,ios::beg);
	archi.write((char*)&version,sizeof(float));
	
	archi.seekp(12,ios::cur);
	archi.write((char*)&mes, sizeof(int));
	archi.write((char*)&anio,sizeof(int));
	
	archi.close();
	return 0;
}

