#include <iostream>//debe escribir la solucion en un archivo "solucion.txt"
#include <fstream>//matriz de coeficientes.txt , terminos independientes.txt, Solucion.txt
#include <iomanip>
using namespace std;

void write(double x[], int nrows, int ncols, const char filename[]);
void forwardsubs(double A[],double b[],double x[],int n);
void eliminaciondeGauss(double A[], double b[], int n);
void readmatrix(double M[], int &nrows, int &ncols, const char filename []);



int main(){
    int nrowsA,ncolsA,nrowsB,ncolsB;
    
    double A[20*20];
    double B[20*20];
    double x[20*20];

    readmatrix(A,nrowsA,ncolsA,"matriz de coeficientes.txt");
    readmatrix(B,nrowsB,ncolsB,"terminos independientes.txt");

    eliminaciondeGauss(A,B,nrowsA);

    forwardsubs(A,B,x,nrowsA);
    write(x,nrowsB,ncolsB,"Solucion.txt");

    return 0;
}

void readmatrix(double M[], int &nrows, int &ncols, const char filename []){//listo
    ifstream myfile(filename);
    myfile>>nrows;
    myfile>>ncols;
    for (int i=0; i<nrows*ncols ;i++)
    {
        myfile>>M[i];
    }
}

void forwardsubs(double A[],double B[],double x[],int n){//listo
    x[n-1]=B[n-1]/A[(n-1)*n+n-1];
    double c=0;

    for (int i=n-2; i>=0 ;i--){

        c=0;

        for(int j=i+1; j<n ;j++){

            c=c+(A[i*n+j]*x[j]);

        }

        x[i]=(B[i]-c)/A[i*n+i];

    }   
}

void eliminaciondeGauss(double A[], double b[], int n){//listo
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

void writeGauss(double x[], int nrowsx, int ncolsx, const char filename[]){
    ofstream myfile;
    myfile.open(filename);

    for(int i=0;i<nrowsx;i++){

        for(int j=0;j<ncolsx;j++){

            myfile<<x[i*ncolsx+j]<<"\t";

        }

        myfile<<endl;

    }

}

