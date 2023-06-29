#include <iostream>
#include <cmath>

using namespace std;

double N(double x, double y);
double S(double x, double y);
double t(double x, double y);

int main(){
    int x_0 = 3, y_0 = 3,x_n1 = 0, y_n1 = 0,n = 0,tar = 0;
    bool peekaboo = false;
    while (peekaboo == false){
        x_n1 = x_0 + S(x_0,y_0)/N(S(x_0,y_0),t(x_0,y_0));
        y_n1 = y_0 + t(x_0,y_0)/N(S(x_0,y_0),t(x_0,y_0));
        tar = N(S(x_0,y_0),t(x_0,y_0));
        if (tar<pow(10,-2)){
            peekaboo = true;

        }else{
            x_0 = x_n1;
            y_0 = y_n1;
        }
        n++;

    } 
    cout<<"x_n ==> "<<x_0<<"\ty_n ==> "<<y_0<<endl;
    cout<<"n ==> "<<n<<endl;
    return 0;
}

double N(double x, double y){
    return sqrt(pow(x,2)+pow(y,2));
}
double S(double x, double y){
    return -2*x - cos(y)+y*cos(x);
}
double t(double x, double y){
    return x*sin(y) + sin(x)-4*y;
}