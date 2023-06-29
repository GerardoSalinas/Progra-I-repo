/*Dados dos puntos en un plano, calcule la distancia entre ambos. Maneje apropiadamente los casos
  que se presentan. Si los puntos:
  
  Pertenece a una recta oblicua.
  Son iguales.
  Pertenece a una recta horizontal.
  Pertenece a una recta vertical.*/
  
#include <iostream>
#include <stdlib.h>
#include <limits>
using namespace std;

void pendiente(double puntos[][2]);
void banners(int key);

int main(){
	double puntos[2][2];
		
	for (int i=0;i<2;i++){
		
		cout<<"Ingrese las coordenadas de un punto:"<<endl;
		cin>>puntos[i][0]>>puntos[i][1];
		system("CLS");
		
	}
	
	if (puntos[0][0] == puntos[1][0] && puntos[0][1] == puntos[1][1]){
		
		system("color 4F");
		cout<<"\tSON EL MISMO PUNTO!"<<endl;
		
	}
	
	if (puntos[0][0] == puntos[1][0] && puntos[0][1] != puntos[1][1]){
		
		cout<<"\tLos puntos forman una recta vertical.\n\tLa pendiente de la recta es: NULA "<<endl;
		banners(0);//0
	}
	
	pendiente(puntos);
	
	return 0;
}


void pendiente(double puntos[][2]){

	double respuesta = (puntos [1][1]-puntos[0][1])/(puntos[1][0]-puntos[0][0]);

	if (respuesta < 0){
		cout<<"\tLos puntos forman una recta oblicua decreciente.\n\tLa pendiente de la recta es: "<<respuesta<<endl;
		banners(1);	//1
		
	}
	
	if (respuesta == 0){
		cout<<"\tLos puntos forman una recta horizontal.\n\tLa pendiente de la recta es: "<<respuesta<<endl;
		banners(2);//2	
	}
	
	if(respuesta > 0){
		cout<<"\tLos puntos forman una recta oblicua creciente.\n\tLa pendiente de la recta es: "<<respuesta<<endl;
		banners(3);	//3
	}
	return;
}

void banners(int key){//siempre comenzar cada cout con un \t
		switch (key){
			case 0:
				cout<<"\t^"<<endl;
				
				for(int i=0; i<3; i++){
					cout<<"\t|"<<endl;
				}
				
				break;
				
			case 1:
				cout<<"\t\\"<<endl;
				cout<<"\t \\"<<endl;
				cout<<"\t  \\"<<endl;
				break;
				
			case 2:
				cout<<"______"<<endl;
				break;
				
			case 3:
				cout<<"\t  /"<<endl;
				cout<<"\t /"<<endl;
				cout<<"\t/"<<endl;
				break;
				
		}
}


