#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double f(double x);
double bisection(double a, double b, double c, int n);

int main(){
    double p=bisection(0,2,0.001,100);//declara una variable p con el valor de retorno de la funcion bisection.
    cout<<setprecision(10)<<p;//muestra en pantalla el valor de retrno de p con una precision de 10 digitos despues del punto decimal.


    return 0;
}

double bisection(double a, double b, double tol, int n){//parametros: extremos a,b tolerancia tol, numero maximo de iteraciones n.
    int i=1;
    double Fa=f(a);  //declara una variable que almacena la imagen de el extremo "a" del intervalo. 
    double c,p1,Fc;
    p1=a;  // declara la variable que almacena el primer extremo del intervalo.
    while (i<=n){  //se inicia un ciclo que va a iterar el numero de veces que el usuario haya destinado.
        c=(a+b)/2;  // saca el punto medio del intervalo y lo almacena  en la variable "p."
        Fc=f(c);  // declara una variable que almacena la imagen del punto medio del intervalo.
        if(Fc==0 || abs(c-p1)/abs(c)<tol){  //si la imagen del punto medio sea 0 o que la diferencia absoluta de los extremos del intervalo sea menor que la tolerancia. 
            break;  //interrumpe el ciclo.
        }
        i++;  //aumenta el contador de iteraciones.
        if(Fa*Fc>0){  //si el producto de la imagen de de un extremo del intervalo y el punto medio es positivo entonces quiere decir que ambas imagenes tiene el mismo signo.
            a=c;  //cambia de lado de extremos del intervalo, siendo ahora "a" igual al punto medio del intervalo
            Fa=Fc;  //cambia las imagen del antiguo extremo del intervalo por la imagen del punto medio del mismo.
        }else{  //si el producto de la imagen de de un extremo del intervalo y el punto medio es negativo entoces quiere decir que ambas imagenes tienen signos distintos.
            b=c;  //el punto medio se vuelve el nuevo extremo del intervalo.
        }
        p1=c;  //declara una variable que es igual al punto medio del intervalo.
    }
    return c;  //regresa el valor de la raiz, es decir, la respuesta.
}

double f(double x){
    return pow(x,4)-2*pow(x,3)-4*pow(x,2)+4*x+4;
}