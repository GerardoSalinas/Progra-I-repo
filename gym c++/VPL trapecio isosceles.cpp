/* VPL */


#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main(){
	int puntos[3][2];
	cout<<"Ingrese los datos:"<<endl;
	for (int k=0; k<3;k++){
		for (int j=0; j<2; j++){
			cin>>puntos[k][j];
		}
	}	
	system("CLS");
	cout<<"[";
	for (int k=0; k<3;k++){
		for (int j=0; j<2; j++){
			cout<<" "<<puntos[k][j];
		}
	}
	cout<<" ]";
	return 0;
}


