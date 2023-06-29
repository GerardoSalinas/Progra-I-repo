/*Construya un algoritmo que reciba como datos de entrada tres números enteros, y regrese como dato
 de salida un mensaje que diga si esos tres números enteros pueden ser las medidas de los lados de
 un triángulo rectángulo*/
 
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

bool pitagoras(int a, int b, int c);

int main(){
	int a,b,c;
	cout<<"Ingrese tres numeros enteros (cateto, cateto, hypotenusa): "<<endl;
	cin>>a>>b>>c;
	cout<<"\n";
	while (a<=0||b<=0||c<=0){
		
		cout<<"No se permiten numeros menores o iguales a cero. Vuelva a intentarlo: ";
		cin>>a>>b>>c;
	}
	if (pitagoras(a,b,c)){
		system("color 1F");
		cout<<"Las medidas si constituyen un triangulo rectangulo";
		
	}else{
		
		system("color 4F");
		cout<<"NO SE PUEDE FORMAR UN TRAINGULO RECTANGULO CON ESAS MEDIDAS!";
	}
	
	return 0;
}


bool pitagoras(int a, int b, int c){
	
	if ( pow(c,2) == pow(a,2) + pow(b,2) ){
		return true;
	}else{
		return false;
	}
}
