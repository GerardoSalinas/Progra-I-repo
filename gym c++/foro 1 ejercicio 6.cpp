/*Diseñe un algoritmo en el que dada una cantidad de minutos, calcule su equivalente en días, horas
  y minutos de manera compacta*/
  
#include <iostream>
#include <stdlib.h>
using namespace std;

void intentar();

int main(){
	int conf;
	do{
		system("CLS");
		int min, hor = 0, dias = 0;
		cout << "Ingrese la cantidad de minutos: ";
		cin >> min ;
		cout << min <<" minutos es equivalente a: ";
	
	
		while (min >= 60){
			min = min - 60;
			hor ++;
		}
	
		while (hor >= 24){
			hor = hor - 24;
			dias ++;
		}
	
		cout << " || "<< dias << " dias || " << hor << " horas || " << min << " minutos || " << endl;
		cout << "Presiona \'5\' para volverlo a intentar!";
		cin >> conf;
		
	}while(conf == 5);
	 
	return 0;
}



