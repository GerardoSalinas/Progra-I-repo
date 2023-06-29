/*como sacar los digitos de cualquier numero entero (tanto negativo como positivo) y mostrarlos en la pantalla de izquierda a derecha y de derecha a izquierda. Ademas muestre en 
  pantalla el numero de digitos del numero.*/

#include <iostream>
#include <math.h>
#include <vector>


using namespace std;

int num_digitos(int numero);

void separar_digitos(int numero, int digitos, vector<int> &arr_digitos );

int main(){
	int numero;
	cout<<"Ingrese un numero entero\n";
	cin>>numero;
	
	if (numero<0){
		numero = abs(numero);
	}
	
	int digitos = num_digitos(numero);
	vector <int> arr_digitos(digitos);
	
	separar_digitos(numero, digitos, arr_digitos);
	
	cout<<"El numero "<<numero<<" tiene "<<digitos<<"\n"<<"Digitos en orden: ";

	for (auto i=arr_digitos.rbegin(); i != arr_digitos.rend(); i++){//orden
		cout << *i << " ";
	}
	
	cout << "\n" << "Digitos al reves: ";
	
	for (auto i = arr_digitos.begin(); i!=arr_digitos.end(); i++){//reves
		cout << *i <<" ";
	}
	
			
	return 0;
}


int num_digitos(int numero){
	
	return floor(log10(numero)) + 1;
}


void separar_digitos(int numero, int digitos, vector<int> &arr_digitos){
	
	for (int i=0; i<digitos; i++){
		arr_digitos[i]=numero%10; 
		numero /= 10;
	}
	return;
}


