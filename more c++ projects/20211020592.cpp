#include <iostream>//el programa debe decidir cual es el método mas eficiente.
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

//prototipo de funciones para la multiplicación de matrices
void readmatrix(double M[], int &nrows, int &ncols, const char filename[]);
void product(double A[], int nrowsA, int ncolsA, double B[], int nrowsB, int ncolsB);
void write(int M[], int ncolsA, int nrowsB, const char filename[],char status);

//prototipo de funciones para la busqueda de raíces de una función mediante el método de bisección. (contiene la funcion usada para el método de Newton también).
double f(double x);
double bisection(double a, double b,double tol, int n);

//prototipo de funciones usadas en la busqueda de raíces de una función mediante el método de Newton.
double newton(double x0, double tol, int n);
double fprime(double x);

//prototipo de funciones usadas en la Solución del sistema de ecuaciones con el Método de Gauss.
void forwardsubs(double A[],double b[],double x[],int n);
void eliminaciondeGauss(double A[], double b[], int n);
void writeGauss(double x[], int nrows, int ncols, const char filename[]);


int main(){

    //inicio de la sección de multiplicación de matrices.
    int m1=4;
    int n1=4;
    int m2=4;
    int n2=4;
    double A[m1*n1],B[m2*n2];
    readmatrix(A, m1, n1,"matrizA.txt");
    readmatrix(B, m2, n2,"matrizB.txt");
    product(A,m1,n1,B,m2,n2);
    //final de la sección de multiplicación de matrices.


    //inicio de la sección de la busqueda de raíces con el método de bisección.
    double k=bisection(0.1,0.5,0.01,10);
    cout<<setprecision(10);
    //final de la sección de la busqueda de raíces con el método de bisección.


    //inicio de la sección de la busqueda de raíces mediante el método de Newton.
    double h=newton(0.6,0.01,10);
    
    //final de la sección de la busqueda de raíces mediante el método de Newton.


    //incicio de la sección de eliminación de Gauss.
    int nrowsA,ncolsA,nrowsB,ncolsB;
    
    double a[20*20];
    double b[20*20];
    double x[20*20];

    readmatrix(a,nrowsA,ncolsA,"matriz de coeficientes.txt");
    readmatrix(b,nrowsB,ncolsB,"terminos independientes.txt");

    eliminaciondeGauss(a,b,nrowsA);

    forwardsubs(a,b,x,nrowsA);
    writeGauss(x,nrowsB,ncolsB,"Solucion.txt");
    //final de la sección de eliminacion de Gauss.

    return 0;
}

//funciones relacionadas con las matrices. (Incisos 1 y 5 del documento.)
void readmatrix(double M[],int &nrows,int &ncols, const char filename[]){//lee las dimensiones y elementos de la matriz desde el documento y los agrega a un arreglo unidimensional.
    ifstream file(filename);
    file>>nrows;
    file>>ncols;
    for (int i=0; i<nrows*ncols ;i++)
    {
        file>>M[i];
    }

}

void product(double A[], int nrowsA, int ncolsA, double B[], int nrowsB, int ncolsB){//La función que contiene el algoritmo para la multiplicación de matrices. 
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
        write(AB,ncolsA,nrowsB,"matrizAB.txt",'s');//si se efectua la multiplicacion llama a la funcion de escribir y le entrega el codigo de exito (success) como estatus.

    }else{//si las matrices no son compatibles para la multiplicacion llama a la funcion de escribir y le entrega el codigo de error como estatus.
        write(AB,ncolsA,nrowsB,"matrizAB.txt",'e');// 'e' es el codigo de error.
    }

}

void write(int M[], int ncolsA, int nrowsB, const char filename[], char status){//Función que escribe el producto de las matrices en el documento de texto llamado "Solucion.txt".
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


//funciones implementadas en el la busqueda de raíces mediante el método de Bisección.
double f(double x){//contiene la funcion y regresa la imagen de un valor "x" ingresado.
    return log(pow(x,2)+1)-exp(x/2)*cos(x);
}

double bisection(double a, double b, double tol, int n){//contiene el algoritmo del método de bisección.
    int i=1;
    double Fa=f(a);  
    double c,p1,Fc;
    p1=a;  
    while (i<=n){  
        c=(a+b)/2;  
        Fc=f(c);  
        if(Fc==0 || abs(c-p1)/abs(c)<tol){   
            break;  
        }
        i++;  
        if(Fa*Fc>0){  
            a=c;  
            Fa=Fc;  
        }else{  
            b=c;  
        }
        p1=c;  
    }
    cout<<"\n";
    cout<<"Metodo de Biseccion: se alcanza la respuesta "<<c<<" en "<<i<<" iteraciones."<<"\n";

    return c;  
}


//funciones implementadas en la busqueda de raíces por el método de Newton.
double newton(double x0, double tol, int n){//contiene el algoritmo del método de Newton.
    int i=1;
    double p;
    while (i<=n)
    {
        p=x0-f(x0)/fprime(x0);
        if(f(p)==0 || abs(p-x0)/abs(p)<tol)
        {
            break;
        }
        i++;
        x0=p;
    }
    cout<<"\n";
    cout<<"Metodo de Newton: se alcanza la respuesta "<<p<<" en "<<i<<" iteraciones.";
    cout<<"Debido a la precision del metodo de Newton se concluye que es el metodo mas eficiente."<<"\n";
    return p;
}

double fprime(double x){//contiene la derivada de la función f(x).
    return (2*x/pow(x,2) + 1) + exp(x/2)*sin(x) - cos(x)*exp(x/2)*(x/2);
}


//funciones implementadas en la solución de sistemas de ecuaciones haciendo uso del método de Gauss.
void forwardsubs(double A[],double B[],double x[],int n){//algoritmo de sustitución hacia atrás. 
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

void eliminaciondeGauss(double A[], double b[], int n){//algortimo de eliminacion de Gauss
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