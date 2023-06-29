#include <iostream>

using namespace std;

void countdown(int n);

int main(){

    int n;
    cout<<"Ingrese el numero inicial: ";
    cin>>n;
    countdown(n);

}

void countdown(int n){

    if (n == -1){
        
        return ;

    }else{
        cout<<n<<" ";
        n--;
        countdown(n);
    }
}