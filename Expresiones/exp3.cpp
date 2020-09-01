//crear un programa que lea los catetos de un triangulo rectangulo y al final calcule la hipotenusa

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float a,b,c=0;
	
	cout<<"Introduzca lado a: "; cin>>a;
	cout<<"Introduzca lado b: "; cin>>b;
	
	if(cin.fail()){
		cout<<"\nEntrada(s) no valida(s)";
	}else{
		c= sqrt(pow(a,2) + pow(b,2));
		cout<<"La hipotenusa es: "<<c<<endl;
	}
	return 0;
}
