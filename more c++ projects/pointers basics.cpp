#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
void change(int *x);//the function takes in a pointer.

int main(){
    int x=5;
    int* y=&x;

    cout << &x<<endl;//prints out the address of x variable.
    cout << y<<endl;//also prints out the address of the x variable but this time using the pointer
    cout << *y << endl;// prints out the value stored in the address to which y points to.
    *y = 7; //the pointer can also change the value stored in the variable to which it points to.
    change (&x);//calls the functio exchange by passing it a pointer which in this case is the address of the variable x.
    cout << x << endl;


    return 0;
}

void change (int x){
    x=10;
}