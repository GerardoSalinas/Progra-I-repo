#include <iostream>
#include <cstring>

using namespace std;

struct Jugador{ //jugador

	int num_fichas = 9;
	string nombre = "Gerardo";
	char status = 'n'; //n para ninguno, l lose , w gana .
	
};

int main(){
	
	Jugador jugador1;
	jugador1.num_fichas = 9;
	
	
	return 0;
}
