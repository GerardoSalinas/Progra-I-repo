// Por: Gerardo Andree Salinas Aplicano 20211020592 
#include <iostream>
#include <cstdlib>
using namespace std;
void llenar_n(int* X, int m);
int calc_inter(int* X, int* Y, int* Z, int m);

int main(){
    srand(time(0));
    int z = 0;
    cout<<"Ingrese la cantidad de elementos (debe ser mayor que 1): ";
    cin>>z;
    while (z<=1){
        cout<<"La cantidad de elemento debe ser mayor a 1, ingrese otro numero: ";
        cin>>z;
    }
    int A[z];
    int B[z];
    int interseccion[z];
    llenar_n(A,z);
    llenar_n(B,z);
    cout<<"Los elementos de A son: "<<endl;
    cout<<"{ ";
    for (int h = 0; h<z; h++){
        cout<<A[h]<<" ";
    }
    cout<<"}";
    cout<<endl;
    cout<<"Los elementos de B son: "<<endl;
    cout<<"{ ";
    for (int h = 0; h<z; h++){
        cout<<B[h]<<" ";
    }
    cout<<"}";
    int elementos_interseccion = calc_inter(A,B,interseccion,z);
    cout<<endl;
    if (elementos_interseccion == 0){
        cout<<"La interseccion de los conjuntos A con B es el conjunto vacio (no comparten elementos)."<<endl;
    }else{
    cout<<"La interseccion de A con B contiene "<<elementos_interseccion<<" elemento(s)"<<endl;

    cout<<"A"<<char(239)<<"B ={ ";
    for (int h = 0; h<elementos_interseccion; h++){
        cout<<interseccion[h]<<" ";
    }
    cout<<"}";
    }
    return 0;
}
void llenar_n(int* X, int m){
    for (int i = 0; i<m; i++){
        *(X+i) = (rand()%(100-(-100)+1))-100;//numero al azar entre [-100,100]
    }
}
int calc_inter(int* X, int* Y, int* Z, int m){
    int cont = 0;
    int h = 0;
    for (int i = 0; i<m; i++){
        for (int j = 0; j<m; j++){
            if (*(X+i) == *(Y+j)){
                cont++;
                *(Z+h) = *(X+i);
                h++;
            }
        }
    }
    return cont;
}
