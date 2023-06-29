/*Hacer un programa que genere n (ingresado por el ususario) numeros al azar dentro de un rango donde los limites tambien seran especificdos por el ususario.
  Ademas, almacenar todos estos numeros en un arreglo. Luego elaborar una funcion que se ancargue de ordenar los numeros dentro del arreglo, ya sea, de forma
  ascendente o descendente segun lo decida el ususario. Finalmente, mostrar en pantalla los numeros ordenados segun como lo quiso el ususario. */
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <array>

using namespace std; 

void ordenar(int* p, int cantidad, const char key);
  
int main(){
	int cantidad,low,upp;
	cout<<"Bienvenido al generador de numeros al azar en orden.\n"<<"Cuantos numeros desea generar?\n";
	cin>>cantidad;
	
	while (cantidad<0){
		cout<<"Solamente se permiten valores mayores a cero, por favor vuelva a intentarlo!\n";
		cin>>cantidad;
	}
	//system("CLS"); incluirlo justo antes de mostrar el resultado.
	cout<<"Ingrese el limite inferior del rango:\n";
	cin>>low;
	cout<<"Ingrese el limite superior del rango:\n";
	cin>>upp;
	
	while (low == upp){
		cout<<"Los limites deben ser distintos. Vuelva a intentarlo!\n";
		cout<<"Inferior: ";
		cin>>low;
		cout<<"Superior: ";
		cin>>upp;
	}
	
	if(low > upp){
		system("color 4F");
		for(int j=0; j <6;j++){
			cout<<"\t";
		}
		cout<<" ERROR!\n\tEl limite inferior no puede ser mayor al superior.\n";
	}
	
	//seccion de generacion de numeros al azar
	int numeros [cantidad];
	srand(time(0));
	for (int k=0 ; k < cantidad; k++){
		
		numeros[k] = (rand() % (upp - low + 1)) + low;
	}
	//limpia la pantalla
	system("CLS");
	
	//muestra el arreglo de forma desordenada
	cout<<"El arreglo inicial es: [ ";
	for(int k = 0; k < cantidad; k++){
		cout<<numeros[k]<<" ";
	}
	cout<<"]\n";
	
	//definicion e inicializacion del puntero al arreglo

	char decision;
	
	cout<<"Desea ordenar los numeros de forma ascendente o descendente? [a/d] \n";
	cin>>decision;
	
	if (decision == 'a' || decision == 'A'){
		ordenar(numeros, cantidad, 'a');
			
	}else if (decision == 'd' || decision == 'D'){
		ordenar(numeros, cantidad, 'd');
	}

	//muestra el arreglo ordenado como lo pidio el usuario
	cout<<"[";
	for (int* f = numeros ;f != (numeros + cantidad); f++){
		cout<<" "<< *f ; 
	}
	cout<<" ]";
	return 0;
}


void ordenar(int* p, int cantidad, char key){
	int temp;
	if (key == 'a'){
		
		for (int i = 0; i<cantidad; i++){
			
			for (int j = i + 1; j < cantidad; j++){
				
				if (*(p + i)>*(p + j)){
					temp = *(p + i);
					*(p + i) = *(p + j);
					*(p + j) = temp;  
				}
			}
		}
		
	}else if(key == 'd'){
		
		for (int i = 0; i<cantidad; i++){
			
			for (int j = i + 1; j < cantidad; j++){
				
				if (*(p + i)<*(p + j)){
					temp = *(p + i);
					*(p + i) = *(p + j);
					*(p + j) = temp;  
				}
			}
		}
	}
	
	return ;
}


