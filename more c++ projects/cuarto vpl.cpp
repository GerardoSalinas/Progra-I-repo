#include <iostream>
#include <cstring>
using namespace std;

bool depurar_palabras(char *palabras_transformadas,char *cadena_nueva, char *cadena);


int main(int argc, char *argv[]){
	char cadena_nueva[]="";
	char palabras_transformadas[]="";
	char cadena[]="";
	cout<<"Escriba el texto:"<<endl;
	cin.getline(cadena, 100);//introduce lo que el usuario escriba en el arreglo cadena.
	cout<<cadena<<endl;
	
	if (depurar_palabras(palabras_transformadas,cadena_nueva,cadena)){
		cout<<cadena_nueva<<endl;
		cout<<palabras_transformadas<<endl;
	}else{
		cout<<"No hay cambios en el texto"<<endl;
	}
	
	
	return 0;
}

//los estudiant2222es p7rogra48man mucho


bool depurar_palabras(char *palabras_transformadas,char *cadena_nueva, char *cadena){
	char numeros[]={'0','1','2','3','4','5','6','7','8','9'};
	char palabra[]="";
	char *p;
	strcpy(cadena_nueva,cadena);
	//se debe depurar el contenido de cadena_nueva
	for (int i=0;i<10;i++){
		p=strstr(cadena_nueva,numeros[0]);
		if (p){
			cadena_nueva.erase(p,1);
		}
	}
	
	
	
}
