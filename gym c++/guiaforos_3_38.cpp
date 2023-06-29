/*Escriba un algoritmo que encuentre el entero más pequeño tal que sea divisible por los números desde
el 1 al 24.*/

#include <iostream>
using namespace std;

int main(){
    bool peekaboo = false;
    int cont = 0, num = 24;
    while (peekaboo == false){
        num ++;
        cont = 0;
        for (int i = 1; i<=24; i++){
            if (num%i == 0){
                cont ++;
            }else{
                break;
            }
        }
        if (cont == 24){
            peekaboo = true;
        }
    }
    cout<<num<<" es divisible por todos los numeros desde 1 hasta 24."<<endl;
    return 0;
}