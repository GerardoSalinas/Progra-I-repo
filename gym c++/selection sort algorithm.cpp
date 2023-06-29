/*For this algorithm suppose you have a playlist and you want to order the songs from least to most played, that means from smallest to largest
  NOTA: Se trabaja con vectores porque sale mas facil de esa maner. Con arreglos no es muy interactivo.*/
#include <iostream>
#include <vector>
using namespace std;

int smallest_in_array(int M[]);//finds the smallest value in the array.
vector <int> selection_sort(vector<int> M);


int main(){
    vector <int> played_songs = {12,20,19,5,50,4,23,89};
    vector <int> p = selection_sort(played_songs);
    for (int t = 0; t<p.size(); t++){
        cout<<p[t]<<" ";
    }


}


int smallest_in_array(vector<int> M){//encuentra el numero mas pequeño en el vector y devuelve su posicion.
    int smallest = M[0];
    int smallest_index = 0;

    for (int i=0 ; i<M.size() ; i++){

        if (M[i]<smallest){

            smallest = M[i];
            smallest_index = i;

        }
    }

    return smallest_index;
}


vector <int> selection_sort(vector<int> M){
    vector <int> N;
    int pos= 0;
    for (int i=0 ; i<8; i++){
        pos = smallest_in_array(M);
        N.push_back(M[pos]);
        M.erase(M.begin()+pos);

    }

    return N;
}

