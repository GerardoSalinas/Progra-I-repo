#include <iostream>

using namespace std;

int sum(int M[], int n);//parametros: arreglo de numeros, tamaño del arreglo.
void shift(int M[], int n);//elimina el primer elemento en el arreglo y mueve el resto.

int main(){
    int n;//tamaño del arreglo
    cout<<"Cuantos digitos desea ingresar? ";
    cin>>n;
    int num[n];
    cout<<"A continuacion ingrese sus numeros: "<<endl;
    for (int i = 0 ; i < n ; i++ ){
        cin>>num[i];
    }

    cout<<"La suma es: "<<sum(num,n);

}

int sum(int M[], int n){
    int p;

    if (n==0){
        return 0;

    }else{
        p=M[0];
        n--;
        shift(M,n);
        M[n] = 0;
        return p + sum(M,n);
    }

}

void shift(int M[], int n){
    if (n>0){
        for (int i = 0; i<n; i++){
            M[i]=M[i+1];
        }
    }
}