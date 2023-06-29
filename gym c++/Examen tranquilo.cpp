/*Factorial de un numero*/

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int factorial(int n);
bool tranquilo(int n);

int main(){
	int n, factorial=1;
	cout<<"N: ";
	cin>>n;

	int cont=0;
	for (int i = 1 ; i<=n; i++){
		
		if (tranquilo(i) == true){
			
			cont++;
		}

	}
	cout<<"Cantidad de numeros tranquilos: "<<cont;
	
	
	return 0;
}


int factorial(int n){
	int factorial = 1;
	
	for (int i=1 ; i<=n;i++){
		
		factorial*=i; 
	}
	
	return factorial;
}

bool tranquilo(int n){
	int cantidad = floor( log10(n) ) + 1;
	vector <int> digitos(cantidad);
	
	for (int j=0;j<cantidad;j++ ){
		
		digitos[j]=n%10;
		n/=10;
		
	}
	
	int producto = 1;
	
	for (auto i=digitos.rbegin();i!=digitos.rend();i++){
		
		producto *= *i;
	}
	
	if (producto < factorial(digitos[0])){
		
		return true;
		
	}else{
		
		return false;
	}
	
}
