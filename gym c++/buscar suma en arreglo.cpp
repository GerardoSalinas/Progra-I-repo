#include <iostream>
using namespace std;
void buscar_suma(int A[], int n, int num);

int main(){
    int n = 0, num = 0;
    cout<<"Ingrese la cantidad de elementos: ";
    cin>>n;
    cout<<"Ingrese la suma a buscar: ";
    cin>>num;
    int A[n];
    for (int  i = 0; i<n; i++){
        cin>>A[i];
    }
    buscar_suma(A,n,num);

    return 0;
}
void buscar_suma(int A[], int n, int num){
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            if (A[i] + A[j] == num){
                cout<<"Par con suma dada es: ("<<A[i]<<","<<A[j]<<") "<<endl;
            }
        }
    }
}
