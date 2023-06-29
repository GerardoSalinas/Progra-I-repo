/*Escriba un algoritmo solicite un número entero N y a partir de este número imprima la lista de
valores S1, S2, · · · , SN .*/

#include <iostream>
using namespace std;

int main(){
    int N = 0, n = 0, n_1 = 0, n_2 = 0;
    cout<<"Ingrese un valor para N: ";
    cin>>N;
    while(N<=0){
        cout<<"El valor de N debe ser mayor que cero \nvuelva a ingresar N: ";
        cin>>N;
    }
    for(int i = 1; i<=N; i++){
        if(i==1){
            n = 4;
        }else{
            if(i==2){
                n = 5;
            }else{
                if(n_2>n_1-n_2+7){
                    n = n_2;
                }else{
                    n = n_1-n_2+7;
                }
            }

        }
        cout<<n<<endl;
        n_2 = n_1;
        n_1 = n;
    }
    return 0;
}