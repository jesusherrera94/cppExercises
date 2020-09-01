#include<iostream>

using namespace std;

int main(){
	float cantidad=0,iva=0.15;
	float total=0;
	cout<<"Ingrese el precio del articulo: "; cin>>cantidad;
	if(cin.fail()||cantidad<=0){
		cout<<"\nEntrada no valida\n";
	}else{
		total = (float) (cantidad * iva) + cantidad;
		cout<<"Total(iva+precio): "<<total<<endl;
	}
	return 0;
}
