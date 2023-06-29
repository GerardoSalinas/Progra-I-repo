#include <iostream>

using namespace std;

int main(){
    int num = 0,suma=0,subsuma1 = 0,h=1,subsuma2=0;
       do{
        switch (h)
        {
        case 1:
            num = 33;
            break;
        case 2:
            num = 47;
         break;
        case 3:
            num = 83;
            break;
        default:
            break;
        }
        suma=0;
        for(int i = 0; i<13; i++){
            subsuma2 = 0;
            for (int j = 0; j<11; j++){
                subsuma1 = 0;
                for(int k = 0; k<7; k++){
                    subsuma1 += num; 
                }
                subsuma2+=subsuma1;
            }
            suma+=subsuma2;
        }
        cout<<"El resultado de "<<num<<"*1001 es: "<<suma<<endl;
        h++;
       }while (h<=3);

    return 0;
}