/*Escriba un algoritmo que acepte un número y luego una letra. Si la letra que sigue al número es F, el
  programa tratará al número introducido como una temperatura en grados Fahrenheit, convertirá el
  número a los grados Celsius equivalentes y desplegará un mensaje adecuado. Si la letra que sigue al
  número es C, el programa tratará al número introducido como una temperatura en grados Celsius,
  convertirá el número a los grados Fahrenheit equivalentes y desplegará un mensaje adecuado. Si la
  letra no es F ní C entonces en el algoritmo se imprimirá un mensaje de error*/
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


