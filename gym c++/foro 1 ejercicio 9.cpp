/*Escriba un algoritmo que acepte un n�mero y luego una letra. Si la letra que sigue al n�mero es F, el
  programa tratar� al n�mero introducido como una temperatura en grados Fahrenheit, convertir� el
  n�mero a los grados Celsius equivalentes y desplegar� un mensaje adecuado. Si la letra que sigue al
  n�mero es C, el programa tratar� al n�mero introducido como una temperatura en grados Celsius,
  convertir� el n�mero a los grados Fahrenheit equivalentes y desplegar� un mensaje adecuado. Si la
  letra no es F n� C entonces en el algoritmo se imprimir� un mensaje de error*/
#include <iostream>
using namespace std;



int main(){
	int grados;
	char temperatura;
	
	cout<<"Ingrese un numero: ";
	cin>>grados;
	cout<<"Ingrese una letra [C/F]: ";
	cin>>temperatura;
	if (temperatura == 'c'|| temperatura == 'C'){
		cout<< grados << " es quivalente a "<<(grados*9/5)+32<<" Fahrenheit.";
	}
	if (temperatura == 'f' || temperatura == 'F'){
		cout<< grados << " es quivalente a "<<(grados-32)*5/9<<" Celsius.";
	}
	
	return 0;

}


