#include <iostream>
#include <fstream>
using namespace std;

void readmatrix(int M[], int &nrows, int &ncols, const char filename[]);
void product(int A[], int nrowsA, int ncolsA, int B[], int nrowsB, int ncolsB);
void write(int M[], int ncolsA, int nrowsB, const char filename[],char status);

int main(){
    int m1=4;
    int n1=4;
    int m2=4;
    int n2=4;
    int A[m1*n1],B[m2*n2];
    readmatrix(A, m1, n1,"matrizA.txt");
    readmatrix(B, m2, n2,"matrizB.txt");
    product(A,m1,n1,B,m2,n2);
    return 0;
}

void readmatrix(int M[],int &nrows,int &ncols, const char filename[]){
    ifstream file(filename);
    file>>nrows;
    file>>ncols;
    for (int i=0; i<nrows*ncols ;i++)
    {
        file>>M[i];
    }

}

void product(int A[], int nrowsA, int ncolsA, int B[], int nrowsB, int ncolsB){//la multiplicacion esta muy bien.
    int elemento;
    int AB[nrowsA*ncolsB];
    if (ncolsA==nrowsB || nrowsB==ncolsA)//si la multiplicacion es posible entre las matrices.
    {
       for (int i=0; i < nrowsA ;i++) {
            for (int j=0; j < ncolsB ;j++) {
                elemento=0;
                for (int k=0; k < ncolsA ;k++){
                    elemento += A[i*ncolsA + k] * B[k*ncolsB + j];
                }
                AB[i*ncolsA + j]=elemento;
            } 
        }
        write(AB,ncolsA,nrowsB,"matrizAB.txt",'s');//si se efectua la multiplicacion llama a la funcion de escribir y le entrega el codigo de error como estatus.

    }else{//si las matrices no son compatibles para la multiplicacion llama a la funcion de escribir y le entrega el codigo de error como estatus.
        write(AB,ncolsA,nrowsB,"matrizAB.txt",'e');// 'e' es el codigo de error.
    }

}

void write(int M[], int ncolsA, int nrowsB, const char filename[], char status){
    ofstream myfile;
    myfile.open(filename);
    if (status=='s'){//imprime le resultado de multiplicar A*B si recibe el codigo de exito 's'.
        myfile<<ncolsA<<endl;//escribe el numero de filas de la matriz resultado (coincide con el numero de columnas de la matriz A)
        myfile<<nrowsB<<endl;//escribe el numero de columnas de la matriz resultado (coincide con el numero de filas de la matriz B)
        for (int i=0; i<ncolsA ;i++)
        {
            for(int j=0; j<nrowsB ;j++)
            {
                myfile<<M[i*ncolsA+j]<<"\t";
            }
            myfile<<endl;
        }    
    }
    if (status=='e'){//escribe un mensaje de error en el documento si recibe el codigo de error 'e'.
        myfile<<"Las dimensiones de las matrices no permiten efectuar la multiplicación."<<endl;//Mensaje de error.
    }


}


