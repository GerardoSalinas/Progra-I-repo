#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int N = 0, n = 1;
    cout<<"Ingrese la cantidad de filas: ";
    cin>>N;
    while (N<=0){
        cout<<"Solo se permiten valores mayores que cero\nvuelva a ingresar las filas:";
        cin>>N;
    }
    for(int i = 1; i<=N; i++){
        for(int k = 1; k<=N-i; k++){
            cout<<"   ";
        }
       for(int j = 1; j<=i; j++){
            if(n<10){
                cout<<n<<"  ";    
            }else{
                if(n>=10){
                    cout<<n<<" ";
                }
            }
            n++;
       }
       cout<<endl;
       
    }

    return 0;
    
}