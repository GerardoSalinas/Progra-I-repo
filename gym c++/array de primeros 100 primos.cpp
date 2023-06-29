/*Escribir un algoritmo que calcule y escriba una tabla con los 100 primeros números primos. Un número es primo si sólo
tiene por divisores la unidad y el propio número.*/

#include <iostream>
#include <cmath>
using namespace std;
#define max  10

bool primo(int x);

int main(){
    int myarray[max][max], fila = 0, columna = 0, cont = 0, num = 0;
    while (cont<99){
        num ++;
        if(primo(num)==true){
            if(columna==9){
                fila++;
                columna = 0;
            }
            myarray[fila][columna] = num;
            columna++;
            cont++;
        }else{
            continue;
        }

    }
    cout<<endl;

    for(int i = 0; i<max; i++){
        for(int j = 0; j<max; j++){
            if(floor(log10(myarray[i][j]))+1 == 1){
                cout<<myarray[i][j]<<"   ";
            }else{
                if(floor(log10(myarray[i][j]))+1 == 2){
                    cout<<myarray[i][j]<<"  ";
                }
                if(floor(log10(myarray[i][j]))+1 == 3){
                    cout<<myarray[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }


    return 0;
}

bool primo(int x){
    int cont = 0;
    for (int k = 1 ; k<=x; k++){
        if(x%k == 0){
            cont++;
        }
    }
    if(cont == 2){
        return true;
    }else{
        return false;
    }
}
