#include <iostream>
#include <math.h>

using namespace std;

double descomposicion(double n);
int signum(double n);

int main(){
	double n, epsilon;
	cout<<"Ingrese un numero en el intervalo cerrado [1,2]:";
	cin>>n;
	
	
	
	
	return 0;
}

double descomposicion(double n){
	double suma = 0;
	for (int i=1; i <= n; i++){
		suma += signum(i)*(1/pow(2,i)); 
	}
	return 0;
}

int signum(double n){
	if (n<0){
		
	}
}
