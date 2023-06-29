#include <iostream>//vpl
#include <math.h>
#include <iomanip>
using namespace std;
void insertar(double *X, int n);
double ordenar(double *X, int n, double a, double b);

int main(){
    int n;
    double a, b;
    cout<<"Numero de datos: ";
    cin>>n;
    double A[n];
    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<endl;
    cout<<"Ingrese el valor de b: ";
    cin>>b;
    cout<<endl;
    insertar(&A,n);
    ordenar(&A,n,a,b);
    cout<<"Arreglo ordenado: "<<endl;
    for (int i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }


    return 0;
}

void insertar(double *X, int n){
    double num;
    cout<<"A continuacion ingrese los datos que sea almacenar: "<<endl;
    for (int i=0; i<n ;i++){
        cin>>num;
        *(X+i)=num;
    }


}

double ordenar(double *X, int n, double a, double b){
    int m=n;
    double k;
    double aux=*(X+0);
    for (int i=1;i<n+1;i++){//ordenar
        if (aux>*(X+i)){
            k=*(X+i);
            *(X+i)=aux;
            aux=k;

        }
    }
    for (int j=0;j<n;j++){
        if (){
            
        }
    }
    return ;
}