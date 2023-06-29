/*La carrera de sociología tiene un total de N asignaturas. Escribir una función que lea 
del dispositivo estándar de entrada las N asignaturas con sus correspondientes códigos.*/
#include <iostream>
#include <cstring>
using namespace std;
void leer(int n);//n es el numero de asignaturas.
void editar(int n, char asignaturas[]);// n es el numero de las asignaturas.
void ver(int n,char asignaturas[]);//n es el numero de las asignaturas.

int main(){
    int n;
    cout<<"Numero de asignaturas: ";
    cin>>n;
    leer(n);
    editar();

    return 0;
}

void leer(int n){
    char asignaturas[n][30];
    cout<<"Ingrese el nombre de las asignatura y su codigo correspondiente ambos separados por un espacio.";
    for(int i=0; i<n ;i++){
        cout<<"Lectura: ";
        cin.getline(asignaturas[i],30);
        cout<<"\n";

    }
    
}
void editar(int n, char asignaturas[]){
    cout<<"Ingrese el numero de la clase que quiere editar: "<<endl;
    for (int i=0; i<n ;i++){//imprime el numero de las clases.
        cout<<"|\t"<<i<<"\t|";
    }
    cout<<endl;
    for (int j=0; j<n ;j++){//imprime las clases debajo de su respectivo indice.
        cout<<"|\t"<<asignaturas[j]<<"\t|";
    }
    ver(n,asignaturas);
}

void ver(int n,char asignaturas[]){
    cout<<"Estan son las asignaturas ya con los cambios realizados: ";
    for(int i=0; i<n ;i++){
        cout<<asignaturas[i]<<endl;
    }

}