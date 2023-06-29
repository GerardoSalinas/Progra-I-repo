#include <iostream>

using namespace std;



int main(){
    int n,m;
    cout<<"Ingrese el valor de n (n debe ser menor que m): ";
    cin>>n;
    cout<<"Ingrese el valor de m: ";
    cin>>m;
    while (n>=m){
        cout<<"El valor de n debe ser menor que m. Vuelva a ingresar ambos valores: "<<endl;
        cout<<"n: ";
        cin>>n;
        cout<<"m: ";
        cin>>m;
    }
    int suma,cont = 0;

    for (int i = n; i<=m; i++){//itera a traves de el intervalo cerrado [n,m]
        suma = 0;
        for (int j = 1; j<i; j++){//itera a traves de todos los numero menores que i
            if (i%j == 0){//si el numero j es divisor de i 
                suma += j;//se suma el divisor de i a la variable suma
            }
        }
        if (suma == i){//verifica si la suma de los divisores de i es igual a i
            cont++;//aumenta la variable contador en una unidad

        }
    } 
    cout<<"hay "<<cont<<" numero perfectos en el intervalo ["<<n<<","<<m<<"]"<<endl;
    
}