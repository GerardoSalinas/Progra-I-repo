#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(){
    int num_grupos, num_alumnos, num_materias;
    cout<<"Ingrese la cantidad de grupos: ";
    cin>>num_grupos;
    cout<<"Ingrese la cantidad de alumnos por grupo: ";
    cin>>num_alumnos;
    cout<<"Ingrese la cantidad de materias: ";
    cin>>num_materias;

    system("CLS");

    double nota, suma_notas, prom_materia, suma_prom_materias, prom_alumno, suma_prom_alumnos, prom_grupo, suma_prom_grupos, prom_grupos;
    
    for (int grupo = 0; grupo<num_grupos; grupo++ ){

        prom_alumno = 0;
        suma_prom_alumnos = 0;

        for (int alumno = 0; alumno<num_alumnos; alumno++){

            prom_materia = 0;
            suma_prom_materias = 0;

            for (int materia = 0; materia<num_materias; materia++){

                    suma_notas = 0; 

                for (int parcial = 0; parcial<3; parcial++){

                    cout<<"Grupo "<<grupo+1<<" | Alumno "<<alumno+1<<" | materia "<<materia+1<<" nota "<<parcial+1<<" : ";
                    cin>>nota;
                    suma_notas += nota;

                }
                
                prom_materia = suma_notas/3; //promedio de una materia
                suma_prom_materias += prom_materia; //suma de los promedios de todas la materias
            }
            prom_alumno = suma_prom_materias/num_materias; //promedio del alumno
            cout<<"\tPromedio del alumno "<<alumno+1<<" ==> "<<prom_alumno<<endl;
            suma_prom_alumnos += prom_alumno; //suma de los promedios de cada alumno
        }
        prom_grupo = suma_prom_alumnos/num_alumnos; //promedio de grupo
        cout<<"\tPromedio del grupo "<<grupo+1<<" ==> "<<prom_grupo<<endl;
        suma_prom_grupos += prom_grupo; 
    }

    prom_grupos = suma_prom_grupos/num_grupos; //promedio de todos los grupos
    cout<<"\tPromedio de los "<<num_grupos<<" grupos"<<" ==> "<<prom_grupos<<endl;
}