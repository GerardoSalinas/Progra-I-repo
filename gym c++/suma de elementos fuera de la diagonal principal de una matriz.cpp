/*Haciendo uso de un arreglo bidimensional, leer una matriz de orden 5, mostrar en pantalla los datos ingresados en forma matricial
  y mostrar la suma de los elementos que no estan dentro de la diagonal principal.*/
  
#include <iostream>

#define maxf 5
#define maxc 5

using namespace std;



int main(){
	int matriz[maxf][maxc];
	
	for (int i = 0; i < maxf; i++ ){
		
		for (int j = 0; j < maxc; j++){
			
			system("CLS");
			
			cout<<"Ingrese el elemento en la posicion ["<<i<<"]"<<"["<<j<<"] : ";
			
			cin>>matriz[i][j];
			
		}
	}
	
	cout<<"Esta es su matriz \n"<<endl;
	for (int i = 0; i < maxf; i++ ){
		
		for (int j = 0; j < maxc; j++){
			
			cout << matriz[i][j] << "\t";
			
		}
		
		cout<<"\n";
		
	}
	cout<<"\n";
	
	int suma = 0;
	
	for (int i = 0; i < maxf; i++ ){
		
		for (int j = 0; j < maxc; j++){
			
			if (i != j){
				
				suma += matriz[i][j];
				
			}
			
		}
	}
	
	cout<<"\nLa suma de los elementos fuera de la diagonal principal es: "<<suma<<endl;
	
	
	return 0;
}
