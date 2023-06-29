#include <iostream>

using namespace std;

int main(){
	int array[6] ={1,2,3,4,5,6};
	int* p = array;
	
	p+4 = 11;
	return 0;
}
