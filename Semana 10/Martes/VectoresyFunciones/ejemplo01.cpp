/**
  Un profesor dispone de las calificaciones del primer parcial de sus 15 alumnos.
  Necesita un programa que permita cargar las 15 notas, calcular el promedio y
  listar la cantidad de calificaciones mayores al promedio.
*/

#include <iostream>
using namespace std;

/// Declaración
void cargarVector(int vec[], int tam);
void ponerCero(int vec[], int tam);
int sumarVector(int vec[], int tam);
void mostrarVector(int vec[], int tam);
int contarMayoresAValor(int vec[], int tam, float valorAComparar);


int main(){
    const int TAM = 5;
    int notas[TAM], suma = 0, cantMayoresPromedio = 0, cantAprobados = 0;
    int p;
    float promedio;

    cargarVector(notas, TAM);
    cout << endl << "--------------------------------------" << endl;
    mostrarVector(notas, TAM);
    cout << endl << "--------------------------------------" << endl;
    suma = sumarVector(notas, TAM);
    promedio = (float)suma / TAM;
    cout << "Promedio: " << promedio << endl;

    cantMayoresPromedio = contarMayoresAValor(notas, TAM, promedio);
    cantAprobados = contarMayoresAValor(notas, TAM, 5);

    cout << endl << "Cantidad de notas mayores al promedio: " << cantMayoresPromedio << endl;
    cout << endl << "Cantidad de aprobados >= 6: " << cantAprobados << endl;
 return 0;
}


/// Definición
void cargarVector(int vec[], int tam){
    int p;
    for(p = 0; p < tam; p++){
        cout << "Ingresar valor #" << (p+1) << ": ";
        cin >> vec[p];
    }
}

int sumarVector(int vec[], int tam){
    int p, suma = 0;
    for(p = 0; p < tam; p++){
        suma += vec[p];
    }
    return suma;
}

void ponerCero(int vec[], int tam){
    int p;
    for(p = 0; p < tam; p++){
        vec[p] = 0;
    }
}

void mostrarVector(int vec[], int tam){
    int p;
    for(p = 0; p < tam; p++){
        cout << vec[p]<< endl;
    }
}

int contarMayoresAValor(int vec[], int tam, float valorAComparar){
    int i, cant = 0;
    for (i=0; i < tam; i++){
        if (vec[i] > valorAComparar){
            cant++;
        }
    }
    return cant;
}









