#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void rellenar(float temperaturas[][10]);
void mostrarArreglo(float temperaturas[][10], int arreglo_dias[]);
float promedio_arreglo(float temperaturas[][10]);

int main(){
    srand(unsigned (time (NULL)));
    float temperaturas[18][10];
    int arreglo_dias[10] = {26,27,28,29,30,1,2,3,4,5};

    rellenar(temperaturas);
    mostrarArreglo(temperaturas,arreglo_dias);
    char opcion = 'a';
    cout<<"Elija una opcion : "<<endl;
    cout<<"a) Promedio de temperatura por dia y por departamento.\nb) Numero de departamentos con temperatura mayor a 35 C.\n"
    <<"c) Departamentos que el dia 28 de Abril sobrepasaron la temperatura promedio de todos estos dias\nd) Calcular cuantos dias el departamento #10 registro una temperatura entre 36 y 40 C.\n"
    <<"e) Determine la mayor temperatura alcanzada durante ese periodo y escriba el o los departamentos y el o los dias que alcanzaron esa temperatura."<<endl;
    cin>>opcion;
    switch (opcion)
    {
    case 'a':
        {
            //sumar cada fila 
            float suma_fila = 0;
            for (int i = 0; i<18; i++){
                suma_fila = 0;
                for (int  j = 0; j<10; j++){
                    suma_fila += temperaturas[i][j];
                }
                cout<<"Promedio de temperatura de Departamento "<<i+1<<": "<<suma_fila/10<<endl;
            }
            //sumar cada columna
            float suma_columna = 0;
            
            for (int i = 0; i<10; i++){
                suma_columna = 0;
                for (int  j = 0; j<18; j++){
                    suma_columna += temperaturas[j][i];
                }

                cout<<"Promedio de temperatura del dia "<<arreglo_dias[i]<<": "<<suma_columna/18<<endl;
            }
            break;
        }
    case 'b'://numero de departamentos con una teperatura mayor a 35 C
        {
            int cont = 0;
            int cont_temp = 0;
            for (int i = 0; i<18; i++){
                for (int j = 0; j<10; j++){
                    if (temperaturas[i][j]>35){
                        cont_temp++;
                    }
                }
                if (cont_temp!=0){
                    cont++;
                }
            }
            cout<<cont<<" Departamento(s) registraron una temperatura mayor a los 35 C. "<<endl;

            break;
        }
    case 'c':
        {
            float prom_diez_dias = 0;
            prom_diez_dias = promedio_arreglo(temperaturas);
            cout<<"En el dia 28 de Abril el(los) departamento(s) ";
            for (int i = 0; i<18; i++){
                if (temperaturas[i][2] >= prom_diez_dias){
                    cout<<i+1<<" ";
                }
            }
            cout<<"registro(aron) una termperatura mayor o igual a la temperatura promedio en los 10 dias ("<<prom_diez_dias<<")"<<endl;
            break;
        }
        

    case 'd'://cuantas veces el departamento 10 alcanzo una temperatura de 36 a 40 centigrados.
        {
            int cont_dept_10 = 0;
            for (int h = 0; h<10; h++){
                if (36<=temperaturas[9][h] && temperaturas[9][h]<=40){
                    cont_dept_10 ++;
                }
            }
            cout<<"El departamento 10 alcanzo temperaturas entre 36 y 40 C un total de "<<cont_dept_10<<" veces."<<endl;
            break;
        }
    case 'e':
        {
            //determina la mayor temperatura en todo el arreglo
            float mayor_temp = 0;
            for (int i = 0; i<18; i++){
                for (int j = 0 ; j<10; j++){
                    if (temperaturas[i][j]>mayor_temp){
                        mayor_temp = temperaturas[i][j];
                    }
                }
            }
            cout<<"La temperatura maxima es : "<<mayor_temp<<endl;
            //busca que departamento alcanzo esa temperatura
            for (int i = 0; i<18; i++){
                for (int j = 0 ; j<10; j++){
                    if (temperaturas[i][j] == mayor_temp){
                        cout<<"El departamento "<<i+1<<" alcanzo la temperatura "<<mayor_temp<<" en el dia "<<arreglo_dias[j]<<endl;
                    }
                }
            }
            break;
        }
    default:
        break;
    }

    return 0;
}

void rellenar(float temperaturas[][10]){
    for (int i = 0; i<18; i++){
        for (int j = 0; j<10; j++){
            temperaturas[i][j] = (float)rand()/(RAND_MAX+1)*(43-28)+28; //genera numeros al azar [28,43]
        }
    }

}
void mostrarArreglo(float temperaturas[][10], int arreglo_dias[]){
    cout<<setfill(' ')<<setw(9)<<arreglo_dias[0]<<setfill(' ')<<setw(3)<<" "<<setfill(' ')<<setw(4)<<arreglo_dias[1]<<setfill(' ')<<setw(3)<<" "<<setfill(' ')<<setw(4)<<arreglo_dias[2]<<setfill(' ')<<setw(3)<<" "<<setfill(' ')<<setw(4)<<arreglo_dias[3]<<setfill(' ')<<setw(3)<<" "<<setfill(' ')<<setw(4)<<arreglo_dias[4];
    cout<<setfill(' ')<<setw(2)<<" "<<setfill(' ')<<setw(4)<<arreglo_dias[5]<<setfill(' ')<<setw(3)<<" "<<setfill(' ')<<setw(4)<<arreglo_dias[6]<<setfill(' ')<<setw(3)<<" "<<setfill(' ')<<setw(4)<<arreglo_dias[7]<<setfill(' ')<<setw(3)<<" "<<setfill(' ')<<setw(4)<<arreglo_dias[8]<<setfill(' ')<<setw(3)<<" "<<setfill(' ')<<setw(4)<<arreglo_dias[9]<<endl;
    for (int i = 0; i<18; i++){
        cout<<setfill(' ')<<setw(4)<<i+1<<"|";

        for (int j = 0; j<10; j++){
            cout<<setfill(' ')<<setw(5)<<setprecision(4)<<temperaturas[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;

}

float promedio_arreglo(float temperaturas[][10]){
    float promedio_diez_dias = 0,suma = 0;
            
    for (int i = 0; i<10; i++){
        
        for (int  j = 0; j<18; j++){
            suma += temperaturas[j][i];
        }
    }
    promedio_diez_dias = suma/180;

    return  promedio_diez_dias;

}
