/*Construya un programa que muestre en pantalla los primeros n numeros de la secuencia fibonacci.
  Desarrolle el ejercicio mediante una funcion recursiva.*/
#include <iostream>
#include <vector>
using namespace std;

void sequence(int &cantidad, int anterior, int actual);

int main(){
	int cantidad, ant = 0, act = 1;
	cout<<"Cuantos numeros desea ver? ";
	cin>>cantidad;
	
	while (cantidad<=0){
		cout<<"Solamente se permiten numeros mayores o iguales a uno. Vuelva a intentarlo!"<<endl;
		cin>>cantidad;
	}
	
	
	cout<<ant<<" "<< act <<" ";
	cantidad = cantidad-2;
	sequence(cantidad, ant, act);
	

	
	return 0;
}

void sequence(int &cantidad, int anterior, int actual){
	int link;
	
	if (cantidad != 0){
		link = actual;
		actual = anterior + actual;
		anterior = link;
		cout << actual << " ";
		cantidad --;
		sequence(cantidad, anterior, actual);	
	}
	
		
}






