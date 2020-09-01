//hacer un programa que haga sqrt(x)/(pow(y,2)-1)

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	float x,y,resultado;
	
	cout<<"Ingrese x: "; cin>>x;
	cout<<"Ingrese y: "; cin>>y;
	
	if(cin.fail()){
		cout<<"Entrada no valida";
	}
	else{
		resultado = sqrt(x)/(pow(y,2)-1);
		cout<<"\nEl resultado de la operacion es: "<<resultado<<endl;
	}
}
