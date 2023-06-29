//Gerardo Andree Salinas Aplicano 20211020592
#include <iostream>
#include <cstring> 

using namespace std;
void generar(char* cadena1,char* cadena2,char* resultado);
int main(){
    char cadena1[100];//letras minusculas y espacios
    char cadena2[100];//letras minusculas y espacios
    char resultado[100];
    
    cout<<"Ingrese la cadena1:"<<endl;
    cin.getline(cadena1,99);
    cout<<"Ingrese la cadena2:"<<endl;
    cin.getline(cadena2,99);
    char* cad1 = cadena1;
    char* cad2 = cadena2;
    char* res = resultado;

    generar(cad1,cad2,res);
    res = resultado;
    if (strlen(cadena1)==strlen(cadena2)){
        cad2 = &cadena2[strlen(cadena2)-1];
        generar(cad1,cad2,res);
    }else{
        cad2 = &cadena2[strlen(cadena1)-1];
        generar(cad1,cad2,res);
    }
    cout<<"La cadena resultado es:"<<endl;

    while(*(res)!='\0'){//imprime la cadena resultado
        cout<<*res;
        res++;
    }

    return 0;
}
void generar(char* cadena1,char* cadena2,char* resultado){
    int distancia = 0;
    
    while(*cadena1 != '\0'){
        if (int(*cadena1)>int(*cadena2)){
            distancia = int(*cadena1)-int(*cadena2);
        }
        if (int(*cadena2)>int(*cadena2)){
            distancia = int(*cadena2)-int(*cadena1);
        }
        if (distancia%2==0){
            *resultado = *(cadena1 + (distancia/2));
        }else{
            *resultado = *(cadena1 + (distancia/2) + 1);
        }
        cadena1++;
        cadena2--;
        resultado++;

    }
    
}