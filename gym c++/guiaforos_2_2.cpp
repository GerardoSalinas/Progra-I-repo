#include <iostream>

using namespace std;

int main(){
    int n;
    char c;
    cout<<"Ingrese el numero de filas: ";
    cin>>n;
    while (n<1){
        cout<<"El valor de n debe ser mayor que cero, vuelva a ingresar n: ";
        cin>>n;
    }
    cout<<"Ingrese el caracter: ";
    cin>>c;
    cout<<endl;
    int i = 1;
    int t = (2*n)-1;
    while (i<=n){
        for (int j = 0; j<2*(i-1); j++){
            cout<<" ";
        }
        for (int h = 1; h<=t; h++ ){
            cout<<c<<" ";
        }
        t-=2;
        cout<<endl;
        i++;
    }

    return 0;
}