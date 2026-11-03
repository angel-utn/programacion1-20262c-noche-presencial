#include <iostream>
using namespace std;

void mostrarVector(int v[], int tam);

int main(){

    const int TAM = 5;
    int v[TAM] = {10, 3, 5, 8, 4};
    int i, j, aux, posMin;

    cout << "Antes de ordenar: " << endl;
    mostrarVector(v, TAM);

    // Ordenamiento: Algoritmo de Selección
    for(i=0; i < TAM - 1; i++){
        posMin = i;

        for(j = i + 1; j < TAM; j++){
           if(v[j] < v[posMin]){
            posMin = j;
           }
        }

        aux = v[i];
        v[i] = v[posMin];
        v[posMin] = aux;

    }

    cout << endl << "Después de ordenar: " << endl;
    mostrarVector(v, TAM);


 return 0;
}


void mostrarVector(int v[], int tam){
    int i;
    for (i=0; i<tam; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
