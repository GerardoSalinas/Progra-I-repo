#include <iostream>

using namespace std;

int main(){
    int n;
    char c;
    cout<<"Ingrese el valor de n: ";
    cin>>n;
    while (n<1){
        cout<<"El valor de n debe ser mayor que cero, vuelva a ingresar n: "<<endl;
        cin>>n;
    }
    cout<<"Ingrese el caracter: ";
    cin>>c;
    cout<<endl;
    for (int i = 0; i<n; i++){
        for (int j = 0; j<2*(n-(i+1)); j++){
            cout<<" ";
        }
        for (int k = 0; k<n-(n-(i+1)); k++){
            cout<<c;
            for (int h = 0; h<n-1; h++){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}