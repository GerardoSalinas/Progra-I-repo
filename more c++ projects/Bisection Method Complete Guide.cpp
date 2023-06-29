#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double f(double x);
double bisection(double a, double b, double tol, int n);

int main(){
    double a,b,eps;//variables a y b (extremos del intervalo), eps (precision).
    int n;
    cout<<"Programa para encontrar la raiz de una funcion."<<endl;
    cout<<"Ingrese los extremoa del intervalo: ";
    cin>>a>>b;
    cout<<endl;
    cout<<"Ingrese el valor minimo de tolerancia: ";
    cin>>eps;
    cout<<"Ingrese el numero maximo de iteraciones: "<<endl;
    cin>>n;
    if (f(a)*f(b)<0)
    {
        cout<<"La raiz es: "<<setprecision(3)<<bisection(a,b,eps,n)<<endl;

    } else {

        cout<<"\nIngresó un intervalo erróneo. Digite otro intervalo:\n ";
        cin>>a>>b;
    }
}

double bisection(double a, double b, double tol, int n){
    int c;
    int i=1;
    while (abs(a-b)>tol)//mientras la diferencia entre los extremos del intervalo sea mayor que la precision.
    {
        c=(a+b)/2;//declara c como el punto medio del intervalo.
        if(f(a)*f(c)<0)//si el producto de las imagenes de a y c tiene signo negativo, quiere decir que las imagenes de a y c tienen signos distintos.
        {
            b=c;
        }else{
            a=c;
        }
        i++;
    }
    return c;
    

}

double f(double x){

    return pow(x,4)-2*pow(x,3)-4*pow(x,2)+4*x+4;//colocar la funcion de forma explicita.
}
