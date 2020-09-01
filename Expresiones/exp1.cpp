//hacer la expresion a\b +1

#include<iostream>

using namespace std;

int main(){
	float a,b;
	double res=0;
	
	cout<<"Ingrese un numero: "; cin>>a;
	cout<<"Ingrese un numero: "; cin>>b;
	
	if(cin.fail()){
		cout<<"\nEntrada(s) no valida(s)";
	}else{
		if(b==0){
			cout<<"\nLa segunda entrada debe ser diferente de cero";
		}else{
			res = (double) (a/b) + 1;
			cout<<"El resultado es: "<<res<<endl;
		}
	}
	
	return 0;
}
