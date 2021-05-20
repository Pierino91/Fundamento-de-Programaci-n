#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	ofstream E;
	int dato;
	E.open("datos.txt");
	cout<<"Ingrese los datos del archivo, para finalizar ingrese cero."<<endl;
	cin>>dato;
	while(dato!=0)
		{
			E<<dato<<endl;
			cin>>dato;
		}
	E.close();
	
	return 0;
}

