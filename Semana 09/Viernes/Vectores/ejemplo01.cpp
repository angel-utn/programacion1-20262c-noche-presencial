/**
  Un profesor dispone de las calificaciones del primer parcial de sus 15 alumnos.
  Necesita un programa que permita cargar las 15 notas, calcular el promedio y
  listar la cantidad de calificaciones mayores al promedio.
*/

#include <iostream>
using namespace std;

int main(){
    const int TAM = 5;
    int notas[TAM], suma = 0, cantMayoresPromedio = 0;
    int p;
    float promedio;

    /// Cargar vector
    for(p = 0; p < TAM; p++){
        cout << "Ingresar nota #" << (p+1) << ": ";
        cin >> notas[p];
    }
    cout << endl << "--------------------------------------" << endl;
    /// Mostrar vector
    for(p = 0; p < TAM; p++){
        cout << "Elemento en posición " << p << ": " << notas[p]<< endl;
    }
    /// Sumar el vector
    for(p = 0; p < TAM; p++){
        suma += notas[p];
    }

    promedio = (float)suma / TAM;

    cout << "Promedio: " << promedio << endl;

    /// Contar mayores al promedio
    for(p = 0; p < TAM; p++){
        if (notas[p] > promedio){
            cantMayoresPromedio++;
        }
    }
    cout << endl << "Cantidad de notas mayores al promedio: " << cantMayoresPromedio << endl;

 return 0;
}
