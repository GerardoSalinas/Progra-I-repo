#include <iostream>

using namespace std;

int main(){
    int n = 49, suma = 0, raiz = 0, raiz_suma = 0;
    bool fantastico = false;
    while (fantastico == false){
        n++;
        suma = 0; 
        raiz = 0;
        raiz_suma = 0;
        for(int i = 1; i<=n ; i++){
            suma += i;
        }
        
        for(int j = 1; j<=suma; j++){
            if(n/j == j && n%j == 0){
                raiz = j;
                break;
            }
        }

        if(raiz != 0){
            for(int k = 1; k<=suma; k++){
                if(suma/k == k && suma%k == 0){
                    raiz_suma = k;
                    break;
                }
            }
            if(raiz_suma != 0){
                fantastico = true;
            }
        }
        
    } 
    cout<<n<<endl;
    cout<<"valor de raiz "<<raiz<<endl;
    cout<<"Valor de raiz_suma "<<raiz_suma<<endl;

    return 0;
}