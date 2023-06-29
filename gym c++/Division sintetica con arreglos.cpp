/*VPL Division sintetica utilizando arreglos*/
#include <iostream>


using namespace std;

void sintetico (int P[], int Q[], int C[], int n);

int main(){
	int n;
	cout<<"Ingrese el grado de P: ";
	cin>>n;//n=3
	
	int P[n+1], Q[2], C[n];//P[4]
	
	cout<<"Ingrese los coeficientes de P comenzando por el termino indepediente: "<<endl;
	for (int i = n; i>-1; i--){
		cin>>P[i];
	}
	
	cout<<"Ingrese los coeficientes de Q comenzando por el termino independiente: "<<endl;
	for (int i = 1; i>-1; i--){
		cin>>Q[i];
	}
	
	//imprime P solo para verificar que sean ingresado en el orden correcto.
	/*for (int j = 0; j < n+1; j++){
		cout<<"P["<<j<<"] = "<<P[j]<<" ";
	}*/
	
	//imprime Q solo para verificar que sean ingresado en el orden correcto.
	/*for (int j = 0; j < 2; j++){
		cout<<"Q["<<j<<"] = "<<Q[j]<<" ";
	}*/
	
	sintetico(P,Q,C,n);
	return 0;
}


void sintetico (int P[], int Q[], int C[], int n){
	//terminar esta parte.
	
	
}



