#include <iostream>
using namespace std;
/*Genere un programa C++ que lea por teclado10 fracciones, las sume y muestre 
el resultado por pantalla*/

struct fraccion{
	int num,den;
};

int main(int argc, char *argv[]) {
	int const N= 10;
	fraccion arre[N];
	
	for(int i=0; i<N; i++){
		cout<<"Ingrese numerador y denominador de la fraccion: "<<i+1<<": ";
		cin>>arre[i].num>>arre[i].den;
	}
	
	fraccion res=arre[0];
	
	for(int i=1; i<N; i++){
		res.num=res.num*arre[i].den+arre[i].num*res.den;
		res.den=res.den*arre[i].den;
	}
	
	cout<<endl<<"El resultado es: "<<res.num<<"/"<<res.den;
	
	return 0;
}

