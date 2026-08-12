/**
 * Enunciado: Desarrollar un programa en C++ que solicite al usuario su
 * nombre y la cantidad de kilómetros caminados. El programa debe calcular
 * las calorías quemadas utilizando un valor fijo de 60 calorías por
 * kilómetro y mostrar por pantalla un resumen con el nombre del usuario,
 * el valor de la constante utilizada y el resultado del cálculo.
 */

#include <iostream>
using namespace std;

int main() {
   const float CALORIAS_POR_KM = 60;

   string nombre;
   float kilometros, caloriasQuemadas;

   cout << "Ingrese su nombre: ";
   cin >> nombre;
   cout << "Ingrese la cantidad de kilómetros caminados: ";
   cin >> kilometros;

   caloriasQuemadas = kilometros * CALORIAS_POR_KM;

   cout << endl << "Resumen de la caminata" << endl;
   cout << "------------------------------------" << endl;
   cout << "Nombre: " << nombre << endl;
   cout << "Calorías quemadas por kilómetro: " << CALORIAS_POR_KM << endl;
   cout << "Calorías quemadas: " << caloriasQuemadas << endl;

   return 0;
}
