/*Se leen las coordenadas (a, b), (c, d), (p, q) y (r, s) correspondientes a cuatro puntos diferentes del
Plano Cartesiano; por los dos primeros puntos pasa la recta L1 y por los dos últimos la recta L2 .
Determine si las rectas son perpendiculares, paralelas o no cumplen con ninguna de estas relaciones.*/


#include <iostream>
#include <stdlib.h>

using namespace std;

float pendiente (int xy[][2]); 

int main(){
    int recta_1[2][2];//arreglo con las coordenadas de los puntos de la primera recta
    int recta_2[2][2];//arreglo con las coordenadas de los puntos de la segunda recta
    cout<<"Ingrese las coordenadas de los puntos de la recta L1: "<<endl;
    for (int i = 0 ; i<2; i++){//introduce las componentes de cada punto en el arreglo de la primera recta

        for (int j = 0 ; j<2; j++){

            if (j%2 == 0){//si el indice es par 
                cout<<"Punto "<<i+1<<"componente x: ";
                cin>>recta_1[i][j];

            }else{//si el indice no es par

                cout<<"Punto "<<i+1<<"componente y: ";
                cin>>recta_1[i][j];
            }
        }
        system("CLS");
    }
    cout<<"\nIngrese las coordenadas de los puntos de la recta L2: "<<endl;

    for (int i = 0 ; i<2; i++){//introduce las componentes de cada punto en el arreglo de la segunda recta.

        for (int j = 0 ; j<2; j++){

            if (j%2 == 0){//si el indice es par 
                cout<<"Punto "<<i+1<<"componente x: ";
                cin>>recta_2[i][j];

            }else{//si el indice no es par

                cout<<"Punto "<<i+1<<"componente y: ";
                cin>>recta_2[i][j];
            }
        }
        system("CLS");
    }

    float m_1 = pendiente(recta_1);//pendiente de la recta 1
    float m_2 = pendiente(recta_2);//pendiente de la recta 2

    if (m_1==m_2){//si tienen la misma pendiente
        cout<<"Las rectas son paralelas.";
    }else{
        if (m_1*m_2 == -1){//si el producto de sus pendientes es -1
            cout<<"Las rectas son perpendiculares.";
        }else{//si ninguna de las anteriores se cumple
            cout<<"Las rectas no son ni paralelas ni perpendiculares.";
        }
    }


    
}


float pendiente (int xy[][2]){//funcion que calcula y regresa la pendiente de una recta
    return (xy[1][1]-xy[0][1])/(xy[1][0]-xy[0][0]);
}