/*VPL 1 Gerardo Andree Salinas Aplicano 20211020592*/
#include <iostream>

using namespace std;

bool VericarTriangular(int n);

int main(){
	int num = 1, cont = 0;
	cout<<"Ingrese los numeros: "<<endl;
	while(num>= 1){
		cin>>num;
		if (VericarTriangular(num) == true){
			cont++;
		}
		
	}
	cout<<endl;
	cout<<cont;
	
	return 0;
}

bool VericarTriangular(int n){
	int diferencia = 2, primer_num = 1;
	while(primer_num<n){
		primer_num += diferencia;
		diferencia ++;
		
	}
	if (primer_num == n){
		return true;
	}else{
		return false;
	}
	
}

