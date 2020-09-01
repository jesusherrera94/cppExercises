//hacer expresion a+b/c+d

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d;
	double resultado = 0;
	cout<<"Ingrese un numero: "; cin>>a;
	cout<<"Ingrese un numero: "; cin>>b;
	cout<<"Ingrese un numero: "; cin>>c;
	cout<<"Ingrese un numero: "; cin>>d;
	if(cin.fail()){
		cout<<"\nEntradas no validas\n";
	}else{
		if(c==0&&d==0){
			cout<<"\n la tercer y cuarta entrada deben de ser diferentes de cero";
		}else{
			resultado=(a+b)/(c+d);
			cout<<"El resultado es: "<<resultado<<endl;
		}
	}
	return 0;
}
