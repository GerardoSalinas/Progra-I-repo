/*Un vector se dice que es simétrico si el elemento que ocupa la posición i_ésima coincide con el que ocupa la posición
n - i_ésima, siempre que el número de elementos que almacene el vector sea n. Por ejemplo el vector que almacena los 
valores 2, 4, 5, 4, 2 es simétrico. Escribir una función que decida si el vector de n datos que recibe como parámetro es simétrico.*/
#include <iostream>
#include <cmath>

using namespace std;

void simetrico(int numbers[], int array_size);

int main(){
    int N = 0;
    cout<<"Ingrese el numero de elementos: ";
    cin>>N;
    while (N<=0){
        cout<<"La cantidad de datos debe ser mayor a cero, ingrese otro numero: ";
        cin>>N;
    }
    int myarray[N];
    cout<<"Ingrese los elementos del arreglo: "<<endl;
    for(int i = 0; i<N; i++){
        cin>>myarray[i];
    }
    simetrico(myarray,N);

    return 0;
}
void simetrico(int numbers[], int array_size){
    bool proof = true;
    int mitad = 0;
    if(array_size%2 !=0 ){
        mitad = round(array_size/2);
    }else{
        mitad = array_size/2;
    }

    for(int i = 0; i<mitad; i++){
        if(numbers[i] != numbers[array_size - (i+1)]){
            proof = false;
            break;
        }
    }
    if(proof == false){
        cout<<"El arreglo no es simetrico"<<endl;
    }else{
        cout<<"El arreglo es simetrico"<<endl;
    }
}
