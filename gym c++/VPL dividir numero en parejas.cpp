/*VPL dividir el numero en parejas*/
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void pareja(int n, vector <int> &numero_seccionado);
int digitos(int n);

int main(){
	int n;
	cout<<"Valor de n: ";
	cin>>n;
	
	while (n<=0){
		
		cout<<"Solamente se aceptan valores de n mayores o iguales a 1. Vuelva a intentarlo.";
		cin>>n;
		
	}
	
	int parejas;
	
	if (digitos(n)%2!=0){
		
		parejas = (digitos(n)-1)/2 + 1;	
		
	}else{
		
		parejas = digitos(n)/2;
		
	}
	
	vector <int> numero_seccionado(parejas);
	
	pareja(n, numero_seccionado);
	
	for (int i = 0;i < parejas; i++){
		
		cout<<numero_seccionado[i]<<endl;	
	}
	
	return 0;
}


/* for(int i =0;i<posicion_pareja;i++){
		n/=100;
		
	}
	if (n%100 != 0){
		numero_seccionado.push_back(n);
	}

*/


int digitos(int n){
	return floor( log10(n) ) + 1;
}

void pareja(int n, vector <int> &numero_seccionado){
	
	int cantidad_digitos = digitos(n), parejas;
	
	if (cantidad_digitos%2!=0){
		
		parejas = (cantidad_digitos-1)/2; 
		
	}else{
		
		parejas = cantidad_digitos/2;
		
	}
	
	for (int i =0 ; i<=parejas; i++){
		
		numero_seccionado[i] = n % 100;
		n /= 100;
		
	}
	

	
}
