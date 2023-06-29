/* VPL void Primos1(int P[],int n) */
 
#include <iostream>

using namespace std;

void Primos1(int P[], int n);
bool primo(int N);

int main(){
	int n;
	cout<<"Ingrese el valor de n: ";
	cin>>n;
	int P[n];
	Primos1(P,n);
	
	return 0;
}

void Primos1(int P[], int n){
	for (int j = 0; j<n; j++){
		int cont = 0, num=7;
		while (cont<n){
			if (num%6==1 && primo(num)==true){
				
				P[cont]=num;
				cont++;
				num++;
				
			}else{
				num++;
			}
		}
	}
	
	for (int i=0 ; i < n; i++){
		cout<<P[i]<<" ";
	}
	return;
}

bool primo(int N){
	int cont=0;
	for (int i=1; i<=N;i++){
		if (N%i==0){
			cont ++;
		}
	}
	if (cont==2){
		return true;
	}else{
		return false;
	}

}
 
