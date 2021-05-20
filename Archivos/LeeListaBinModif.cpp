#include <iostream>
#include <fstream>
using namespace std;

struct alumno{char nombre[80];
int n1,n2,n3;
float p;
char cond[12];};

int main(int argc, char *argv[]) {
	ifstream archi("Lista.dat",ios::binary|ios::in|ios::ate);
	if (!archi.is_open()){
		cout<<"El archivo no se pudo abrir";
		return 1;
	}
	
	int cant=archi.tellg()/sizeof(alumno);
	archi.seekg(0,ios::beg);
	alumno aux;
	for (int i=0;i<cant;i++){
		archi.read((char*)&aux,sizeof(aux));
		cout<<aux.nombre<<endl;
		cout<<aux.n1<<" "<<aux.n2<<" "<<aux.n3<<endl;
		cout<<"Promedio: "<<aux.p<<endl;
		cout<<"Condicion: "<<aux.cond<<endl;
	}
	
	archi.close();
	return 0;
}

