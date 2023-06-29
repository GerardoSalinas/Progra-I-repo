#include <iostream>
using namespace std;

void Primos1(int P[],int n);
bool Primo(int n);

int main(){
    int n = 0, num = 7;
    cout<<"Ingrese el valor de n: ";
    cin>>n;
    int myarray [n];
    Primos1(myarray,n);
    for (int i = 0; i<n; i++){
        cout<<myarray[i]<<" ";
    }
    return 0;
}

void Primos1(int P[],int n){
    int cont = 0, p = 7;
    while(cont<n){
        if (Primo(p) == true){
            if (p%6 == 1){
                P[cont] = p;
                cont++;
            }
        }
        p++;
    }

}


bool Primo(int n){
    int cont = 0;
    for (int i = 1; i<=n; i++){
        if (n%i == 0){
            cont++;
        }
    }
    if (cont == 2){
        return true;
    }else{
        return false;
    }
}

