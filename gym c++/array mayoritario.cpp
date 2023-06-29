/*Un vector que almacena n datos se dice que es mayoritario, si existe un elemento almacenado en el vector que se apar ece
en el vector más de n / 2 veces. Escribir una función que decida si un vector es mayoritario.*/

#include <iostream>
using namespace std;

void mayoritario(int A[],int N);
int main(){
    int N;
    cout<<"Ingrese la cantidad de elementos que desea alamacenar: ";
    cin>>N;
    int myarray[N];
    cout<<"Ingrese los elementos: "<<endl;

    for (int k = 0; k<N; k++){
        cin>>myarray[k];
    }
    mayoritario (myarray,N);
    return 0;
}

void mayoritario(int A[],int N){
    int cont = 0;
    bool mayorit = false;
    for(int i = 0; i<N; i++){
        cont = 0;
        for(int j = 0; j<N; j++){
            if(A[i] == A[j]){
                cont++;
            }
        }
        if(cont>N/2){
            mayorit = true;
            break;
        }
    }
    if (mayorit == false){
        cout<<"El arreglo no es mayoritario."<<endl;
    }else{
        cout<<"El arreglo es mayoritario."<<endl;
    }

}