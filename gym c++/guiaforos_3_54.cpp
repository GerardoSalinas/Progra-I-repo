#include <iostream>
using namespace std;
int main(){
    int N = 0, n = 0;
    cout<<"Ingrese el numero de filas: ";
    cin>>N;
    while(N<=0){
        cout<<"Solo se admiten valores mayores a cero\nVuelva a ingresar el numero de filas: ";
        cin>>N;
    }
    for(int i = 1; i<=N; i++){
        for(int j = 1; j<=i; j++){
            n+=2;
            if(n<10){
                cout<<n<<"   ";
            }
            if(n>=10){
                cout<<n<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}