/*Suponga que un triángulo se forma con dos puntos P (x1 , y1 ) y Q(x2, y2 ) y el origen O(0, 0) de
manera que x1 , y1, x2 , y2 son números enteros no negativos. Escriba un algoritmo que cuente cuantos
triángulos construidos de esta manera tienen al propiedad de ser rectángulos, suponiendo que 0 ≤
x1 , y1 , x2 , y2 ≤ 20.*/


#include <iostream>
#include <math.h>

using namespace std;

float distancia(int x1, int y1, int x2, int y2);

int main(){
    int x0 = 0,y0 = 0, a = 0, b = 0, c = 0, cont = 0;
    for (int x1 = 0; x1<=20; x1++){
        for (int y1 = 0; y1<=20; y1++){
            for (int x2 = 0; x2<=20; x2++){
                for(int y2 = 0; y2<=20; y2++){
                    for (int i = 0; i<2; i++){
                        if (i==0){
                            c = distancia(x0,y0,x1,y1);
                        }else{
                            if(i==1){
                                b = distancia(x0,y0,x2,y2);
                            }else{
                                a = distancia(x1,y1,x2,y2);
                            }
                        }
                    }
                    if (pow(c,2) == pow(a,2) + pow(b,2)){
                        cont++;
                    }
                } 
            }
        }   
    }

    return 0;
}

float distancia(int x1, int y1, int x2, int y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
