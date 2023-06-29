#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int N = 0, h1 = 0, k1 = 0, r1 = 0,h2 = 0, k2 = 0, r2 = 0, aprox = 0, distancia = 0;
    cout<<"Ingrese el valor de N: ";
    cin>>N;
    cout<<"Ingrese la informacion de los circulos: "<<endl;
    cin>>h1,k1,r1,h2,k2,r2;
    distancia = sqrt(pow(h2-h1,2) + pow(k2-k1,2));
    if(distancia<=r1+r2){
        cout<<"Los circulos se tocan."<<endl;
    }else{
        cout<<"Los circulos no tienen puntos en comun."<<endl;
    }
    //aproximacion de pi
    for (int i = 0; i<=N; i++){
        aprox += (pow(-1,i)*4)/2*i+1;
    }
    cout<<"El area del circulo 1 es: "<<aprox*r1*r1<<endl;
    cout<<"El area del circulo 2 es: "<<aprox*r2*r2<<endl;
    return 0;
}