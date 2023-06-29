#include <iostream>
using namespace std;

int division(int divisor, int dividendo);

int main(){
    int divisor = 0, dividendo = 0;
    cout<<"ingrese los valores que desea dividir: "<<endl;
    cout<<"divisor:";
    cin>>divisor;
    cout<<"dividendo:";
    cin>>dividendo;
    cout<<division(divisor,dividendo)<<endl;

    return 0;
}
int division(int divisor, int dividendo){
    int cociente = dividendo / divisor;
    if(dividendo < divisor){
        return cociente;
    }else{//caso recursivo, cuando dividendo
        dividendo = dividendo-(divisor*cociente);

        return division(divisor,dividendo);
    }

}
