/*escriba un programa que lea dos cadenas de caracteres, las visualice junto con su longitud,
las contatene y luego las vuelva  a visualizar junto con su nueva longitud*/
#include <iostream>
#include <cstring>//cuidado aqui, esta es la libreria correcta que se debe incluir en los programas.
using namespace std;

int main(){
    //recibe cada una de las cadenas
    char cadena1[50];
    cin.getline(cadena1,50);
    cout<<endl;
    char cadena2[50];
    cin.getline(cadena2,50);
    cout<<endl;
    //muestra las cadenas con su respectivo tamaño 
    cout<<cadena1<<" tamanio: "<< strlen(cadena1) <<endl;
    cout<<cadena2<<" tamanio: "<< strlen(cadena2) <<endl;
    //concatena las cadenas
    strcat(cadena1,cadena2);
    //muestra cada cadena con su respectiva longitud
    cout<<"Las cadenas concatenadas quedan de la siguiente forma\" "<<cadena1<<" \" Y su tamanio es: "<<strlen(cadena1)<<endl;




    return 0;
}