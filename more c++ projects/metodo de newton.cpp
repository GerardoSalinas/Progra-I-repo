#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double f(double);//aplica la funcion dada, y regresa la imagen de x.
double fprime(double);//aplica la derivada de la funcion dada y regresa el valor de la pendiente de la recta tangente a la funcion en el punto (p0,f(p0)).
double newton(double, double, int); //aplica el metodo de newton y regresa el valor de la raiz o la aproximacion de la misma.


int main (){
    double p=newton(1,0.001,100);
    cout<<setprecision(10)<<p;
    return 0;
}

double newton(double p0, double tol, int N){//aplica el metodo de newton.
    double p;
    int i=1;
    while (i<=N){
        p=p0-f(p0)/fprime(p0);
        if(f(p)==0 || abs(p-p0)/abs(p)<tol)
        {
            break;
        }
        i++;
        p0=p;
    }
    return p;
}

double fprime(double x){//contiene la derivada de la funcion.
    return 4*pow(x,3) - 6*pow(x,2) - 8*x + 4;
}

double f(double x){//contiene la funcion a evaluar.
    return pow(x,4) - 2*pow(x,3) - 4*pow(x,2) + 4*x + 4;
}