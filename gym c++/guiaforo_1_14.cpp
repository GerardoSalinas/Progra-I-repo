/* Un rectángulo puede ser representado en un plano a partir de cuatro puntos; determine, si dadas las
coordenadas de cuatro puntos del plano, éstos pueden ser los vértices de un rectángulo. */
#include <iostream>
#include <math.h>

using namespace std;

double distance(int x1, int x2, int y1, int y2);

int main(){
    int coordenadas[4][2];
    cout<<"Ingrese las coordenadas de los puntos: "<<endl;
    for (int x = 0; x<4; x++){
        for (int y = 0; y<2; y++){

            if (y==0){//si esta en la columna de las componentes x
                cout<<"| Punto "<<x+1<<"| Componente x : ";
                cin>>coordenadas[x][y];
            }else{//si esta en la columna de las componentes y
                cout<<"| Punto "<<x+1<<"| Componente y : ";
                cin>>coordenadas[x][y];
            }
            

        }
    }

    int x1 = coordenadas[0][0],x2;
    int y1 = coordenadas[0][1],y2;

    for (int x = 0; x<4; x++){
        if (coordenadas[x][0]!=x1){
            if(coordenadas[x][1]!=y1){
                x2 = coordenadas[x][0]; //encuentra las coordenadas del punto opuesto y las almacena en x2, y2.
                y2 = coordenadas[x][1];
            }
        }
    }
    
    cout<<"El punto opuesto es: ("<<x2<<","<<y2<<") ";

}


double distance(int x1, int x2, int y1, int y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1, 2));
}