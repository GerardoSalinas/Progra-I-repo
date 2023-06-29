#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void readmatrix(double M[], int &nrows, int &ncols, const char filename []);//lee la matriz
void printmatrix(double MA[], int nrows, int ncols);//muestra la matriz
void forwardsubs(double [], double [], double [], int);//algoritmo de sustitucion hacia atras.
void eliminationGauss(double [], double[], int);


int main(){
    int nrowsA,ncolsA,nrowsb,ncolsb;
    double A[100*100];
    double b[100];
    double x[100];
    readmatrix(A,nrowsA,ncolsA,"matrizAGauss.txt");
    readmatrix(b,nrowsb,ncolsb,"vectorGauss.txt");
    eliminationGauss(A,b,nrowsA);//
    printmatrix(A,nrowsA,ncolsA);
    cout<<endl;
    printmatrix(b,nrowsb,ncolsb);
    forwardsubs(A,b,x,nrowsA);
    cout<<endl;
    printmatrix(x,nrowsb,ncolsb);//el vector x tiene las mismas dimensiones del vector b.

    cout<<endl;

    return 0;
}
void readmatrix(double M[], int &nrows, int &ncols, const char filename []){
    ifstream file(filename);
    file>>nrows;
    file>>ncols;
    for (int i=0; i<nrows*ncols ;i++)
    {
        file>>M[i];
    }
}

void printmatrix(double M[], int nrows, int ncols){
    for(int i=0; i<nrows ;i++)
    {
        for (int j=0; j<ncols ;j++)
        {
            cout<<M[i*ncols+j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

void forwardsubs(double A[],double b[],double x[],int n){//n es la dimenison de la matriz
    x[n-1]=b[n-1]/A[(n-1)*n+n-1];
    double c=0;
    for (int i=n-2; i>=0 ;i--){
        c=0;
        for(int j=i+1; j<n ;j++){
            c=c+(A[i*n+j]*x[j]);
        }
        x[i]=(b[i]-c)/A[i*n+i];
    }   
}

void eliminationGauss(double A[], double b[], int n){
    double p;
    for (int i=0; i<n ;i++){
        p=A[i*n+i];
        for(int j=i; j<n ;j++){
            A[i*n+j]=A[i*n+j]/p;
            if (j==n-1){
                b[i]=b[i]/p;
            }
        }
        for(int k=i+1; k<n ;k++){
            p=A[k*n+i];
            for(int m=i; m<n ;m++){
                A[k*n+m]=(-1*p)*A[i*n+m]+A[k*n+m];
                if (m==n-1){
                    b[k]=(-1*p)*b[i]+b[k];
                }
            }
        }
    }

}
