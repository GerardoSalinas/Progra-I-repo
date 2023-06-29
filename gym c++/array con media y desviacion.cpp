/*Escribir un programa que genere aleatoriamente los datos de un vector , lo visualice, y calcule su media m, su desviación
media dm su desviación típica dt, dadas por las siguientes expresiones:*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

float media(int A[], int N);
float desviacion_media(int A[], int N, float M);
float desviacion_tipica(int A[], int N, float M);

int main(){
    srand(time(0));
    int N = 5+rand()%11; //genera al azar el tamaño del arreglo [5,10]
    int myarray[N];

    //llenado del arreglo
    for(int j = 0; j<N; j++){
        myarray[j] = 1+rand()%101; //le coloca un numero al azar [1,100]
    }

    //visualizacion del arreglo
    cout<<"[ ";
    for(int k = 0; k<N; k++){
        cout<<myarray[k]<<" ";
    }
    cout<<"]"<<endl;
    //media
    float M = media(myarray,N);
    cout<<"La media de los elementos es: "<<M<<endl;
    //desviacion media
    cout<<"La desviacion media es: "<<desviacion_media(myarray,N,M)<<endl;
    //desviacion tipica
    cout<<"La desviacion tipica es: "<<desviacion_tipica(myarray,N,M)<<endl;





    return 0;
}

float media(int A[], int N){
    int suma = 0;
    for (int k = 0; k<N; k++){
        suma += A[k];
    }
    return suma/N;

}

float desviacion_media(int A[], int N, float M){
    float suma = 0;
    for (int i = 0; i<N; i++){
        suma += abs(A[i]-M);
    }
    return suma/N;

}

float desviacion_tipica(int A[], int N, float M){
    float suma = 0;
    for (int i = 0; i<N; i++){
        suma += pow(A[i]-M,2);
    }
    return sqrt(suma/N);
}

