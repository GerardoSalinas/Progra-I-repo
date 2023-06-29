#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;



int main(){
	string mensajes[3]={"Triangulo Escaleno.", "Triangulo Isosceles.", "Triangulo Equilatero."};
	double lados[3];
	int cont=0;
	double temp=0;
	
	do{
		cout<<"Ingrese un numero positivo: ";
		cin>>temp;
		while (temp<0){
			cout<<"Solo se aceptan numeros positivos. Vuelve a intentarlo: ";
			cin>>temp;
		}
		lados[cont]=temp;
		cont++;
	}while (cont<3);
	
	cout<<"\n";
	
	if (lados[0] + lados[1] > lados[2]  &&  lados[1] + lados[2] > lados[0]  &&  lados[0] + lados[2] > lados[1]){//si las medidas forman un triangulo
		
		if (lados[0] != lados[1]  &&  lados[1] != lados[2]){ //si sus tres lados son distintos
			//cambiar a color amarillo y letras rojas.
			system("color E4");
			cout<<"Ingreso las medidas de un "<<mensajes[0]<<endl;
		}
		
		if(lados[0] == lados[1]  &&  lados[1] == lados[2]){ //si todos sus lados son iguales
			//cambiar a color azul y letras blancas.
			system("color 1F");
			cout<<"Ingreso las medidas de un "<<mensajes[2]<<endl;
		}
		
		if (lados[0]==lados[1] || lados[1]==lados[2]){//si dos de sus lados son iguales
			//cambiar de color fondo negro y letras verdes.
			system("color 0A");
			cout<<"Ingreso las medidas de un "<<mensajes[1]<<endl;
		}
	}else{
		//cambiar a color rojo y letras blancas.
		system("color 4F");
		cout<<"NO SE PUEDE FORMAR UN TRIANGULO CON LAS MEDIDAS DADAS!"<<endl;
	}
		
		
	
	return 0;
}

