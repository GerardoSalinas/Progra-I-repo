#include <iostream>

using namespace std;

int main(){
    int n = 0,suma_digitos = 0,cont = 0,num_digitos = 0,copia = 0;
    cout<<"Ingrese un numero: ";
    cin>>n;
    while (n<=0){
        cout<<"El valor de n debe ser mayor que cero \nIngrese un numero distinto: ";
        cin>>n;
    }
    
    while(n != 1 && cont <= 100){

        suma_digitos = 0;
        num_digitos = 0;
        copia = n;
        while (copia != 0){
            copia /= 10;
            num_digitos++;
        }

        copia = n;
        for(int i = 0; i<num_digitos; i++){
            suma_digitos += (copia%10)*(copia%10);
            copia/=10;
        }

        n = suma_digitos;
        cout<<n<<endl;
        cont++;
    }
    cout<<"Total de iteraciones del programa ==> "<<cont;
    return 0;
}