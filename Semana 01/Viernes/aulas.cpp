#include <iostream>
using namespace std;

int main(){
    int alumnos, cantidadAluas;

    cout << "Ingrese cantidad de alumnos: ";
    cin >> alumnos;

    cantidadAluas = alumnos / 50; /// realizamos una division entera

    cout << "Cantidad de Aulas: " << cantidadAluas << endl;

    cout << "Cantidad sobrantes: " << alumnos % 50 << endl; /// mostramos cuantos alumnos se quedan sin aula


    return 0;
}

