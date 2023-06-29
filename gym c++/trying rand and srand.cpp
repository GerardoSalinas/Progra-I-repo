#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
	srand(time(0));
	for (int i = 0; i<10; i++){
		cout<<10+rand()%20<<endl;
	}
	
	
	return 0;
}
