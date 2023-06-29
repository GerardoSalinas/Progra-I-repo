#include <iostream>
using namespace std;

int  main(){
    char cadena1[81];
    cin.getline(cadena1,80);//lee la cadena y la almacena en la variable cadena1
    char* cadenaptr = cadena1;
    while(*cadenaptr != '\0'){
        if (*cadenaptr>='a' && *cadenaptr<='z'){//si la letra es minuscula, se puede usar la misma logica para verificar si una letra es mayuscula.
            *cadenaptr = char(toupper(int(*cadenaptr)));
        }else{//si la letra es mayuscula
            *cadenaptr = char(tolower(int(*cadenaptr)));
        }
        cout<<*cadenaptr;
        cadenaptr++;
    }
    return 0;
}