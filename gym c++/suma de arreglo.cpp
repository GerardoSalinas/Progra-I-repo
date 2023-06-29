/*Escribir un programa que lea 10 números enteros, los almacene en un vector, y calcule la suma de todos ellos, así como su
media aritmética.*/

#include<iostream>
using namespace std;
int main(){
    int myarray[10],suma = 0;
    cout<<"Ingrese 10 numeros: "<<endl;
    for(int i = 0; i<10; i++){
        cin>>myarray[i];
    }
    for(int j = 0; j<10; j++){
        suma+=myarray[j];
    }
    cout<<"La suma de los elementos [ ";
    for(int j = 0; j<10; j++){
        cout<<myarray[j]<<" ";
    }
    cout<<"] es: "<<suma;


    return 0;
}
