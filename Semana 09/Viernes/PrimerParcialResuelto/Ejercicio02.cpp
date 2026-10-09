/**
 * Primer Parcial 2026 2C - Ejercicio 2
 * Torneo de pesca: 20 pescadores. Por cada captura se ingresa el código de
 * pescador, el tipo de pez (1-Pejerrey, 2-Atún, 3-Pez espada), el número de
 * muelle (1-Oeste, 2-Este, 3-Principal) y el peso en kilos. La información
 * está agrupada por pescador y sus capturas terminan con un código negativo.
 *
 * A) El muelle en el que se capturaron más peces.
 * B) Por cada pescador, la cantidad de peces de más de 10 kilos.
 * C) Cantidad de pescadores con al menos un pejerrey pero ningún atún.
 */
#include <iostream>
using namespace std;

int main(){
   const int CANT_PESCADORES = 20;
   const float PESO_GRANDE = 10;

   int i;
   int codigo, codigoPescador, tipoPez, muelle;
   float peso;

   // A
   int cantOeste = 0, cantEste = 0, cantPrincipal = 0;
   // B
   int cantPecesGrandes;
   // C
   bool pescoPejerrey, pescoAtun;
   int cantPescadoresC = 0;

   for(i = 1; i <= CANT_PESCADORES; i++){
      cantPecesGrandes = 0;
      pescoPejerrey = false;
      pescoAtun = false;

      cout << "Código de pescador (negativo para terminar): ";
      cin >> codigo;
      codigoPescador = codigo;

      while(codigo >= 0){
         cout << "Tipo de pez (1-Pejerrey, 2-Atún, 3-Pez espada): ";
         cin >> tipoPez;
         cout << "Número de muelle (1-Oeste, 2-Este, 3-Principal): ";
         cin >> muelle;
         cout << "Peso del pez (kg): ";
         cin >> peso;

         // A
         switch(muelle){
            case 1:
               cantOeste++;
            break;
            case 2:
               cantEste++;
            break;
            case 3:
               cantPrincipal++;
            break;
         }

         // B
         if(peso > PESO_GRANDE){
            cantPecesGrandes++;
         }

         // C
         if(tipoPez == 1){
            pescoPejerrey = true;
         }
         else if(tipoPez == 2){
            pescoAtun = true;
         }

         cout << "Código de pescador (negativo para terminar): ";
         cin >> codigo;
      }

      // B
      cout << endl << "PUNTO B - Pescador " << codigoPescador << ": peces de más de " << PESO_GRANDE << " kg: " << cantPecesGrandes << endl << endl;

      // C
      if(pescoPejerrey == true && pescoAtun == false){
         cantPescadoresC++;
      }
   }

   cout << endl << "PUNTO A" << endl;
   if(cantOeste > cantEste && cantOeste > cantPrincipal){
      cout << "Muelle con más peces capturados: Oeste" << endl;
   }
   else if(cantEste > cantPrincipal){
      cout << "Muelle con más peces capturados: Este" << endl;
   }
   else{
      cout << "Muelle con más peces capturados: Principal" << endl;
   }

   cout << endl << "PUNTO C" << endl;
   cout << "Pescadores con al menos un pejerrey y ningún atún: " << cantPescadoresC << endl;

   return 0;
}
