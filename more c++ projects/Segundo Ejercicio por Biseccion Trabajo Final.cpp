#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double f(double x);
double bisection(double a, double b,double tol, int n);

int main(){
    double k=bisection(0.1,0.5,0.01,10);
    cout<<setprecision(10)<<k;

    return 0;
}

double f(double x){
    return log(pow(x,2)+1)-exp(x/2)*cos(x);
}

double bisection(double a, double b, double tol, int n){
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

    return c;  
}