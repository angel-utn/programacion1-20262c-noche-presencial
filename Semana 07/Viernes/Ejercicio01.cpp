/**
 * Modelo de Primer Parcial 2026 2C - Ejercicio 1
 * Torneo de pesca: 20 pescadores. Por cada uno se ingresa el código,
 * la cantidad de peces capturados y el peso total capturado (kg).
 *
 * A) Código del pescador con menor peso total, considerando solo a los
 *    pescadores que capturaron al menos un pez.
 * B) Peso promedio por pez capturado en todo el torneo.
 */
#include <iostream>
using namespace std;

int main(){
   const int CANT_PESCADORES = 20;

   int i;
   int codigo, cantPeces;
   float peso;

   // A
   bool huboPescadorConPeces = false;
   int codigoMenorPeso;
   float menorPeso;
   // B
   int totalPeces = 0;
   float totalPeso = 0;
   float pesoPromedio;

   for(i = 1; i <= CANT_PESCADORES; i++){
      cout << "Código de pescador: ";
      cin >> codigo;
      cout << "Cantidad de peces capturados: ";
      cin >> cantPeces;
      cout << "Peso total capturado (kg): ";
      cin >> peso;

      // A
      if(cantPeces > 0){
         if(huboPescadorConPeces == false || peso < menorPeso){
            menorPeso = peso;
            codigoMenorPeso = codigo;
            huboPescadorConPeces = true;
         }
      }

      // B
      totalPeces += cantPeces;
      totalPeso += peso;
   }

   cout << endl << "PUNTO A" << endl;
   if(huboPescadorConPeces == true){
      cout << "Pescador con menor peso total: " << codigoMenorPeso << endl;
   }
   else{
      cout << "Ningún pescador capturó peces." << endl;
   }

   cout << endl << "PUNTO B" << endl;
   if(totalPeces > 0){
      pesoPromedio = totalPeso / totalPeces;
      cout << "Peso promedio por pez: " << pesoPromedio << " kg" << endl;
   }
   else{
      cout << "No se capturaron peces en el torneo." << endl;
   }

   return 0;
}
