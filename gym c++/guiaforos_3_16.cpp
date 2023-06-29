#include <iostream>

using namespace std;

float power(float base, int exponent);
int factorial(int k);

int main(){
    float aprox,x;
    int m;
    char op;
    cout<<"Ingrese la letra que corresponde a la funcion que desea aproximar: "<<endl;
    cout<<"(a) e^x \n(b) Ln(x+1)\n(c) sin(x)\n(d) cos(x)\n(e) arcsin(x)\n(f) arctan(x)\n(g) cosh(x)\n(h) sinh(x)\n(i) sinh^-1(x)"<<endl;
    cin>>op;
    cout<<"Ingrese la cantidad de terminos de la serie: ";
    cin>>m;
    while (m<=0){
        cout<<"El valor de m debe ser mayor a cero, vuelva a ingresar m: ";
        cin>>m;
    }

    switch (op){
        case 'a'://perfecto
            cout<<"\nIngrese el valor de x: ";
            cin>>x;
            aprox = 0;
            for (int n = 0; n<=m; n++){
                aprox += power(x,n)/factorial(n);
            }
            cout<<"e^x es ==> "<<aprox<<endl;
            break;
        case 'b':// no funciona
            cout<<"\nIngrese el valor de x. Note que |x|<1: ";
            cin>>x;
            while (x<-1 || x>1){
                cout<<" x debe pertenecer al intervalo ]-1,1[, vuelva a inrgesar x: ";
                cin>>x;
            }
            aprox = 0;
            for (int n = 1; n<=m; n++){
                aprox += power(-1,n+1)*power(x,n)/n;
            }
            cout<<"Ln("<<x<<"+ 1) es ==> "<<aprox<<endl;
            break;
        case 'c':
            cout<<"\nIngrese el valor de x: ";
            cin>>x;
            aprox = 0;
            for (int n = 0; n<=m; n++){
                aprox += power(-1,n)*power(x,2*n+1)/factorial(2*n+1);
                cout<<"iteracion "<<n<<"valor de aprox ==>"<<aprox<<endl;
            }
            cout<<"sin("<<x<<") es ==> "<<aprox<<endl;
            break;
        case 'd':
            cout<<"\nIngrese el valor de x: ";
            cin>>x;
            aprox = 0;
            for (int n = 0; n<=m; n++){
                aprox += power(-1,n)*power(x,2*n)/factorial(2*n);
            }
            cout<<"cos("<<x<<") es ==> "<<aprox<<endl;
            break;
        case 'e':
            cout<<"\nIngrese el valor de x. Note que |x|<1: ";
            cin>>x;
            while (x<-1 || x>1){
                cout<<" x debe pertenecer al intervalo ]-1,1[, vuelva a ingresar x: ";
                cin>>x;
            }
            aprox = 0;
            for (int n = 0; n<=m; n++){
                aprox += factorial(2*n)*power(x,2*n+1)/power(4,n)*power(factorial(n),2)*(2*n+1);
            }
            cout<<"arcsin("<<x<<") es ==> "<<aprox<<endl;
            break;
        case 'f':
            cout<<"\nIngrese el valor de x. Note que |x|<1: ";
            cin>>x;
            while (x<-1 || x>1){
                cout<<" x debe pertenecer al intervalo ]-1,1[, vuelva a inrgesar x: ";
                cin>>x;
            }
            aprox = 0;
            for (int n = 0; n<=m; n++){
                aprox += power(-1,n)*power(x,2*n+1)/2*n+1;
            }
            cout<<"arctan("<<x<<") es ==> "<<aprox<<endl;
            break;
        case 'g':
            cout<<"\nIngrese el valor de x: ";
            cin>>x;
            aprox = 0;
            for (int n = 0; n<=m; n++){
                aprox += power(x,2*n)/factorial(2*n);
            }
            cout<<"cosh("<<x<<") es ==> "<<aprox<<endl;
            break;
        case 'h':
            cout<<"\nIngrese el valor de x: ";
            cin>>x;
            aprox = 0;
            for (int n = 0; n<=m; n++){
                aprox += power(x,2*n+1)/factorial(2*n+1);
            }
            cout<<"sinh("<<x<<") es ==> "<<aprox<<endl;
            break;
        case 'i':
            cout<<"\nIngrese el valor de x. Note que |x|<1: ";
            cin>>x;
            while (x<-1 || x>1){
                cout<<" x debe pertenecer al intervalo ]-1,1[, vuelva a inrgesar x: ";
                cin>>x;
            }
            aprox = 0;
            for (int n = 0; n<=m; n++){
                aprox += power(-1,n)*factorial(2*n)*power(x,2*n+1)/power(4,n)*power(factorial(n),2)*(2*n+1);
            }
            cout<<"sinh^-1("<<x<<") es ==> "<<aprox<<endl;
            break;
            
        default:
            cout<<"Valor no aceptado.";
            break;
    }
    return 0;
}

float power(float base, float exponent){
    float result = 1;
    if (exponent==0){
        return result;
    }else{
        while (exponent!=0){
            result *= base;
            exponent--;
        }
    }
}

int factorial(int k){
    int cont = 1;
    if (k==0){//si se calcula el factorial de cero
        return cont;//se regresa 1

    }else{//se otra manera calcula su factorial de forma comun y lo regresa.

        for (int i=0; i<k;i++){
            cont*=(i+1);
        }
        return cont;
    }

}