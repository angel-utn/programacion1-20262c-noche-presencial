#include <iostream>

using namespace std;

/**
   Hacer un programa que dado un numero decimal, redondee el numero.
   Si es mayor a 0.5 redondea para arriba
   Si es menor a 0.5 redondea para abajo

   Ej: 
      1.5 => 2
      10.2 => 10
      15.9 => 16   
*/

int main(){
    int resul;
    float dato;

    cout << "Ingrese numero con decimal: ";
    cin >> dato;

    resul = dato + 0.5f;

    cout << "Redondeo: " << resul << endl;

    return 0;
}

