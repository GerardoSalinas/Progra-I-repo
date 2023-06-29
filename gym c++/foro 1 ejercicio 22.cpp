/*Dado un número entero n entre 1 y 26, muestre en pantalla un triángulo alfabético como el mostrado
en el ejemplo. Ejemplo, suponga que n = 3, entonces la salida sería:
    a
    bb
    ccc     */
#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Ingrese el valor de n: ";
    cin>>n;
    cout<<endl;

    while (n>26 || n<1){//es el numero de la letra en el alfabeto(sin incluir la ñ)
        cout<<"El valor de n debe estar en el intervalo [1,26]. Vuelva a ingresar el valor de n: ";
        cin>>n;
    }
    int letra = int('a'); //indice ascii para la letra 'a'.
    int m=0; //cantidad de veces que se escribe una letra en cada renglon

    for (int i = 0 ; i<n ;i++){
        cout<<"\t";
        for (int j = 0 ; j<m+1; j++){
            cout<<char(letra+m);
        }
        cout<<"\n";
        m++;
    }
    


}