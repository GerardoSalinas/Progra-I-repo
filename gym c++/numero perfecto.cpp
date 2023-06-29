/* Un número entero n se dice que es perfecto si la suma de sus divisores incluyendo 1 y excluyéndose él coincide consigomismo.
   Codificar una función que decida si un número es perfecto. Por ejemplo 6 es un número perfecto 1 + 2 + 3 = 6.*/


#include <iostream>
#include <stdlib.h>
using namespace std;

bool perfecto(int n);

int main(){
	int n;
	cout<<"Ingrese el valor de n:";
	cin>>n;
	while (n<=1){
		system("CLS");
		cout<<"Unicamente se aceptan valores mayores a 1. Por favor, vuelva a intentarlo: "<<endl;
		cin>>n;
	}
	bool answer= perfecto(n);
	
	if (answer == true){
		system("Color 3F");
		cout<<"El numero "<<n<<" es un numero perfecto.\n";
	}else {
		system("Color 4F");
		cout<<"El numero "<<n<<" NO ES un numero perfecto.\n ";
	}
	return 0;
}

bool perfecto(int n){
	int suma=0;
	for (int j = 1; j < n; j++){
		if (n%j == 0){
			suma += j;
		}
	}
	
	if (suma == n){
		return true;
	}else{
		return false;
	}
}
