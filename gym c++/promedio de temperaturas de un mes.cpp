/*  Array tridimensional. Se declara un array tridimensional para almacenar las temperaturas de cada
    uno de los 60 minutos de las 24 horas de un mes de 31 días. Se declaran como constantes dias, horas y minutos.
    En tres bucles anidados se leen la temperatura de cada uno de los 60 minutos, de las 24 horas, de los 31 días de un
    mes. Posteriormente, se calcula y se escribe la media de temperatura de cada día.  */
  
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define minutos 60
#define horas 24
#define dias 31


using namespace std;


int main(){
	double temperaturas[dias][horas][minutos];
	srand(time(0));

	
	int low, upp;
	
	cout<<"Ingrese el limite inferior y superior de temperatura respectivamente: \n";
	cin>>low>>upp;
	
	
	for (int d = 0; d < dias ; d++){
		
		for (int hor = 0; hor < horas; hor++){
			
			for (int min = 0; min < minutos; min++){
				temperaturas[d][hor][min] = (rand() % (upp - low + 1)) + low;
			}
			
		}
	}
	
	double suma, promedio;
	
	for (int d = 0; d < dias ; d++){
		suma = 0;
		for (int hor = 0; hor < horas; hor++){
			
			for (int min = 0; min < minutos; min++){
				
				suma += temperaturas[d][hor][min];
				
			}
			 
		}
		
		cout<<"Promedio de temperatura del dia "<<d<<" es: "<<suma/(horas*minutos)<<endl;
	
	}
	
	
	return 0; 
}


