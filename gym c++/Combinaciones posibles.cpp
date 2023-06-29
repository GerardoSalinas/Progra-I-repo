/* Se define el número combinatorio m sobre n de la siguiente forma: de n a m igual a n!/n!(m-n)!. Escribir un programa que lea los valores
   de m y de n y calcule el valor de m sobre n.*/
   
#include <iostream>

using namespace std;

int factorial(int n);

int main(){
	int n,m;
	cout<<"Ingrese el valor de n y m respectivamente: ";
	cin>>n>>m;
	
	while (m <= n){
		
		cout<<"Los limites no pueden ser iguales o inversos. Vuelva a intentarlo:\n";
		cin>>n>>m;
		
	}
	
	int k= factorial(m)/factorial(n)*factorial(m-n);
	
	cout<<"El total de combinaciones posibles es: "<<k;
	
	return 0;
}

int factorial(int n){
	int total=1;
	
	for (int j=1;j<=n;j++){
		
		total *= j;
		
	}
	return total;
}
