/* Escribir una funci�n que decida si dos n�meros enteros positivos son amigos. Dos n�meros son amigos, si la suma de los
   divisores distintos de s� mismo de cada uno de ellos coincide con el otro n�mero. Ejemplo 284 y 220 son dos n�meros amigos.*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int amigo(int n);

int main(){
	int num1,num2;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	cout<<"\n";
	
	while (num1 <= 0 || num2 <= 0){
		
		cout<<"Unicamente se permiten valores mayores a 0. Vuelva a intentarlo: ";
		cin>>num1>>num2;
	}
	if (amigo(num1) == num2 && amigo(num2) == num1 ){
		
		cout<<num1<<" y "<<num2<<" son numeros amigos!\n";
		
	}else{
		
		cout<<num1<<" y "<<num2<<" NO son numeros amigos :(\n";
	}
	
	return 0;
}

int amigo(int n){
	
	int suma=0;
	
	for (int i = 1;i < n; i++){
		
		if (n%i == 0){
			
			suma += i;
		}
	}
	
	return suma;
}
