#include <iostream>
#include <math.h>
using namespace std;

bool primo(int n);
int divisores(int n);
	


int main(){
	int N,cont = 0;
	cout<<"Valor de N: ";
	cin>>N;

	for (int i=1; i<=N; i++){//itera a traves del rango
		int suma = 0;
		
		for (int j = 1; j <= i; j++){//itera a traves de los divisores de cada numero en el rango
		
			if (i%j==0){//verifica si es divisor
			
				if (primo(j) == true){//si es divisor primo lo suma a la variable suma
				
					suma += j;//suma de sus divisores primos 
				}
			}
			
		}
		
		if (primo(suma)){//si la suma de sus divisores primos es primo
			cont++; // se agrega una unidad a la cuenta de primos duales
		}
	}
	
	cout<<"Numero de primos duales: "<<cont<<endl;

	return 0;
}

bool primo(int n){
	
	int cont = 0;
	
	for (int j = 1;j <= n;j++){
		
		if (n%j==0){
			
			cont++;
			
		}
	}
	
	if (cont==2){
		
		return true;
		
	}else{
		
		return false;
		
	}
}




