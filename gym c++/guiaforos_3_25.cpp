#include <iostream>

using namespace std;
int main(){
    int suma_divisores = 0, cont = 0, n = 0;
    while (cont<100){
        n++;
        suma_divisores = 0;
        
        for (int i = 1; i<=n; i++){
            if(n%i == 0){
                suma_divisores += i;
            }
        }

        if(suma_divisores > 2*n){
            cout<<n<<endl;
            cont++;
        }
    }

    return 0;
}