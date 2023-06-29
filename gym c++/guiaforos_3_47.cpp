/*Construir un algoritmo que permita multiplicar dos números enteros positivos empleando el método
denominado multiplicación rusa. Este método permite calcular el producto M N de la siguiente
manera: En pasos sucesivos se divide M por 2 (división entera) y se multiplica N por 2. Este proceso
se repite hasta que M es cero. El resultado de la multiplicación deseada se obtiene acumulando
aquellos valores sucesivos de N para los cuales el valor de M es impar.
Ejemplo: N = 31 y M = 27*/

#include <iostream>

using namespace std;

int main(){
    int N = 0, M = 0, suma = 0;
    cout<<"Ingrese los valores que desea multiplicar \nM:";
    cin>>M;
    cout<<"N:";
    cin>>N;
    cout<<"\tN\tM\tAcumulado"<<endl;
    
    while (M!=0){
        if(M%2 != 0){
            suma += N;
        }
        cout<<"\t"<<N<<"\t"<<M<<"\t  "<<suma<<endl;
        M /= 2;
        N *= 2;
    }

    cout<<"\t"<<N<<"\t"<<M<<endl;
    return 0;
}