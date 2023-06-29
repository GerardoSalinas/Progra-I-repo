#include <cstdlib>
#include <iostream>
using namespace std;
bool esvocal(char ch){
    ch= toupper(ch);
    return ( ch == 'A' || ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U');
}
int main(int argc, char *argv[]){
    char ch;
    int cuenta = 0;
    while (cin.get(ch)){
        if (esvocal(ch)){
            cuenta++;
        }
    }
    cout << " numero de vocales leidas "<< cuenta << "\n";
    system("PAUSE");
    
    return EXIT_SUCCESS;

}


/*La función cin.putback() restaura el último carácter leído por cin.get() de nuevo al flujo de entrada cin. 
La función cin.ignore() lee uno o más caracteres del flujo de entrada cin sin procesar. 
El caracter nulo no es imprimible.
para leer cadenas completas (incluyendo los espacios en blanco) se usa la funcio cin.getline()
*/

// --cin.getline() syntax--
/* cin.getline(char *variable, int length): Reads a stream of characters into the string "variable", It stops when
it has read length-1 characters or
when it finds an end-of-line character '\n' or the end of the file 'eof'. "Length " is the length of the string. */

/* La funcion cin.get() se usa para leer carcater por caracter. devuelve 1 si tiene exito, de lo contrario devuelve 0.
cin.get() lee los espacios en blanco (lo cual no sucede con cin>>)
esta funcion es menos propensa a causar a tied output stream. 
*/

// -- cout.put() --
/* La funcion opuesta de cin.get() es cout.put()
Esta funcion imprime un solo carater. Toma como aparametro un literal de cacracter entre comillas simples o tambien se le puede pasar
un literal de tipo entero. Enn ese caso, imprimira el caracter que tenga esa posicion en la tabla ASCII.
Esta funcion puede llamarse continuamente con un solo cout, lo cual hace que se muestren los caracteres seguidos y sin espacios.
ejemplo: cout.put(71).put(79).put(79). put(68).put('\n');
*/

//recordar usar las funciones toupper(ch) para convertir un caracter a mayusculas o tolower(ch) para convertir un caracter a minusculas.

// -- cin.putback() --
/* cin.putback() 
restaura el último carácter leído por cin.get() de nuevo al flujo de entrada cin.*/

//Lo que sigue a continuacion son funciones de la libreria string.h

/* → strcmp(char1,char2): lo que hace es comparar ambas cadenas de caracteres. Donde char1 y char2 son arreglos de caracteres. Esta funcion
regresa 0 si ambas cadenas son iguales.
regresa un valor negativo si el primer caracter distinto en char1 es menor al caracter correspondiente en char2.
regresa un valor positivo si el primer caracter distinto en char1 es mayor al caracter correspondiente en char2.

    →strlen( str ): lo que hace es regresar la longitud de la cadena que se le pasa como parametro. Donde str es un arreglo de caracteres.
    →strtok( str, <separador> ): regresa el siguiente token dentro de una cadena. Basicamente lee la cadena hasta que encuentra el caracter de separador
    *en telegram envie una foto de como se usa* OJO el delimitador debe ir entre comillas dobles.
    →strcat(dest, src ): concatena una copia de una cadena src al final de la cadena dest. Donde dest y src son arreglos de caracteres. es decir char dest[50]="Learning c++ is fun and easy "
    →strncat():
*/