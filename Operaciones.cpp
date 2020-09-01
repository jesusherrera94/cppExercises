#include<iostream>

using namespace std;

int main(){
	int op1,op2,suma=0,resta=0,mult=0;
	double div=0.0;
	cout<<"Digite un numero: "; cin>>op1;
	cout<<"Digite un numero: "; cin>>op2;
	if(cin.fail()){
		cout<<"\nEntrada(s) no valida(s)";
	}else{
		suma = op1 + op2;
		resta = op1 - op2;
		mult = op1 * op2;
		//tuve que castear para lograr sacar los decimales de la operacion porque no funcionaba por asignacion directa.
		div = (double) op1/op2;
		cout<<"\n******************************************************************\n";
		cout<<"Suma: "<<suma<<endl;
		cout<<"Resta: "<<resta<<endl;
		cout<<"Multiplicacion: "<<mult<<endl;
		cout<<"Division: "<<div<<endl;
	}
	return 0;
}
