#include <iostream>//este es el mas efectivo de los dos metodos.
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x);
double newton(double x0, double tol, int n);
double fprime(double x);

int main(){
    double k=newton(0.6,0.01,10);
    cout<<setprecision(10)<<k;

    return 0;
}

double f(double x){
    return log(pow(x,2) + 1) - exp(x/2)*cos(x);
}

double newton(double x0, double tol, int n){
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
    return p;
}

double fprime(double x){
    return (2*x/pow(x,2) + 1) + exp(x/2)*sin(x) - cos(x)*exp(x/2)*(x/2);
}