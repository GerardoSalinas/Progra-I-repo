/*Escriba un algortimo para calcular el valor de la presión en libras por pulgada cuadrada (psi) de una
onda descrita como sigue:
• Para el tiempo t, menor o igual a 35 segundos, la presión es 0.46t psi, y para un tiempo mayor
a 35 segundos, 0.19t + 9.45 psi.
• El programa deberá pedir el tiempo como entrada y la presión como salida.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int t;
	cout<<"Ingrese el tiempo (t) en segundos: ";
	cin>>t;
	float presion;
	if (t<=35){
		presion = 0.46*t;
	}else{
		presion = 0.19*t + 9.45; 
	}
	cout<<"La presion es: "<<setprecision(3)<<presion<<" psi.";
}
