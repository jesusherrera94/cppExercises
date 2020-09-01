//resolver la formula general cuadratica

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	float a,b,c,determinante=0, resultadoN=0,resultadoP=0;
	cout<<"Ingrese termino cuadrado: "; cin>>a;
	cout<<"Ingrese termino lineal: "; cin>>b;
	cout<<"Ingrese termino independiente: "; cin>>c;
	
	if(a>0){
		//caldulo del determinante
	determinante = pow(b,2) - 4 * a * c;
	if(determinante <0){
		cout<<"\nLa ecuacion no tiene solucion en los reales";
		
	}else{
		resultadoN=(b*(-1) - sqrt(determinante))/( 2 * a );
		resultadoP=(b*(-1) + sqrt(determinante))/( 2 * a );
		
		cout<<"Resultado 1: "<<resultadoN<<endl;
		cout<<"Resultado 2: "<<resultadoP<<endl;
	}
	
	}else{
		cout<<"\nTermino a debe ser mayor a cero.";
	}
	
	return 0;
}
