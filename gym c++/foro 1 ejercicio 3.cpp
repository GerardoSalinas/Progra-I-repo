/*Escriba un algoritmo que use bloques de repetición para resolver el siguiente problema:
Suponga que se desean encontrar las parejas de enteros (x, y) tales que xy = x + y. Asuma para este
ejercicio que |x| + |y| < 20. Determine cuales son las posibles parejas de valores que cumplen con
esta condición.*/

#include <iostream>


using namespace std;

int main(){
	
	cout<<"Las parejas de enteros que cumplen la condicion xy = x+y son:"<<endl;
	for (int x= -20 ; x<21; x++){
		
		for (int y= -20 ; y<21; y++){
			
			if (x*y == x+y){
				cout<<"("<<x<<","<<y<<")"<<endl;
			}
			
		}
	}
	
}
