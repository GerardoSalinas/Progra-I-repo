#include <iostream>

using namespace std;

int factorial(int m);


int main(){
    int n;
    cout<<"Ingrese un numero mayor o igual que cero: ";
    cin>>n;
    cout<<"El factorial de "<<n<<" es "<<factorial(n);
}

int factorial(int m){
    if (m==1){
        
        return m;

    }else{

        return m* factorial(m-1);
    }
}
