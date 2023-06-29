/*Elabore un algoritmo que reciba como entrada dos números enteros y finalmente determine si uno
  es divisor del otro.*/
  
#include <iostream>
#include <math.h>


using namespace std;



int main(){
	int num1,num2;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	while (num1-floor(num1)!=0){
		cout<<"Debe ingresar un numero entero, vuelva a intentarlo:"<<endl;
		cin>>num1;
	}
	
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	while (num2-floor(num2)!=0){
		cout<<"Debe ingresar un numero entero, vuelva a intentarlo:"<<endl;
		cin>>num2;
	}
	
	bool bandera = false;
	
	if (num1 <= num2 && num2%num1 == 0){
		cout<<num1<<" es divisor de "<<num2<<endl;
		bandera = true;
	}
	
	if (num2 <= num1 && num1%num2 == 0 && bandera == false){
		cout<<num2<<" es divisor de "<<num1<<endl;
	}
	
	return 0;
}
