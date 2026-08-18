// NOMBRE Y APELLIDO:
// EJERCICIO:
// ENUNCIADO:


#include <iostream>

using namespace std;

int main(){
    int nota1, nota2, nota3;
    int promedio;

    cout << "Ingrese nota: ";
    cin >> nota1;
    cout << "Ingrese nota: ";
    cin >> nota2;
    cout << "Ingrese nota: ";
    cin >> nota3;

    promedio = (float)(nota1 + nota2 + nota3) / 3;

    cout << "Promedio: " << promedio << endl;

    return 0;
}

