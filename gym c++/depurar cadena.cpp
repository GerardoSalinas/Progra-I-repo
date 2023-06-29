/*Realizar un programa que depure los numeros en una cadena. Todo esto mediante una funcion Depurar 
que devuelva la cadena completamente libre de numeros*/
//entrada: H0o1l4a m333und0o 56d3e 1l55a4 p7r88o0g14ra8ma6c9ion1
//salida: Hola mundo de la programacion
#include <iostream>
#include <cstring>
using namespace std;//arreglar este programa 

void Depurar(char* p, char cadena_depurada[]);
void separar(char* p, char cadena[]);

int main(){
    char cadena[80];
    char cadena1[80];
    char cadena_depurada[80];
    int k = 0;
    char* h = NULL;
    char* caracter = cadena;
    cout<<"Ingrese la cadena a depurar:";
    cin.getline(cadena, 79);
    strcpy(cadena1,cadena);
    //separa la cadena en palabras
    //char* palabra = strtok(cadena," ");
    // while(palabra != NULL){
    //     cout<<palabra<<endl;
    //     palabra = strtok(NULL," ");//mueve el apuntador a la siguiente palabra
    // }
    while(*caracter!='\0'){//itera a traves de toda la cadena
        if ((*caracter>='a' && *caracter<='z')||( *caracter>='A' && *caracter<='Z')||*caracter == ' '){//si hay una letra
            cadena_depurada[k] = *caracter;
            k++;
        }
        caracter++;
    }
    cout<<"La cadena depurada es: "<<endl;
    h = cadena_depurada;
    while (*h!='\0'){
        cout<<*h;
        h++;
    }
    

    
    return 0;
}

// void separar(char* p, char cadena_depurada[]){
    
// }

// void Depurar(char* p, char cadena_depurada[]){
//     int i = 0;//nos ayudara a iterar a traves de la cadena

//     while (*(p+i) != '\0'){//el puntero se mueve en todas las posiciones de la cadena
        
//     }

// }

// if (*(p+i)<=48 && *(p+i)>=57){//si no es un numero
//         strcat(cadena_depurada,(p+i));//concatena el caracter a cadena_depurada
//     }
//     i++;