#include <iostream>
#include <cmath>
using namespace std;
/*Escriba un programa C++ que calcule y muestre las raíces o soluciones de una 
ecuación cuadrática del tipo  ax2+ bx + c=0, siendo que el usuario del 
programa ingresa como datos los coeficientes a, b y c. 
*/
	
int main(int argc, char *argv[]) {
	float a, b, c;
	
	cout<<"Ingrese coeficientes de la ecuacion cuadrática (a, b y c): "<<endl;
	cin>>a>>b>>c;
	
	float dis = b*b-4*a*c;
	
	if (dis == 0){
		float r = -b/(2*a);
		cout<<endl<<"Las raices son reales e iguales y valen: "<<r;
	}
	else if (dis>0){
		float r1, r2;
		r1= (-b+sqrt(dis))/(2*a);
		r2= (-b-sqrt(dis))/(2*a);
		cout<<endl<<"Las raices son reales distintas y valen: "<<r1<<" y "<<r2;
	}
		else { //acciones cuando dis<0
		cout<<endl<<"Las raices son complejas conjugadas"<<endl;
		float re, im;
		re = -b/(2*a);
		im = sqrt(-dis)/(2*a);
		cout<<re<<"+"<<im<<"i"<<endl;
		cout<<re<<"-"<<im<<"i"<<endl;
		}
	
	return 0;
}

