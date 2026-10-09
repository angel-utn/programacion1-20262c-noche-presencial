/**
 * Primer Parcial 2026 2C - Ejercicio 1
 * Restorán: 10 mozos. Por cada mozo se ingresa el código, la cantidad de
 * mesas atendidas, el total cobrado en efectivo y el total cobrado con
 * tarjeta en el día.
 *
 * A) Código del mozo que atendió la mayor cantidad de mesas.
 * B) Cantidad de mozos que cobraron únicamente en efectivo.
 */
#include <iostream>
using namespace std;

int main(){
   const int CANT_MOZOS = 10;

   int i;
   int codigoMozo, cantMesas;
   float totalEfectivo, totalTarjeta;

   // A
   int maxMesas, codigoMaxMesas;
   // B
   int cantSoloEfectivo = 0;

   for(i = 1; i <= CANT_MOZOS; i++){
      cout << "Código de mozo: ";
      cin >> codigoMozo;
      cout << "Cantidad de mesas atendidas: ";
      cin >> cantMesas;
      cout << "Total cobrado en efectivo: ";
      cin >> totalEfectivo;
      cout << "Total cobrado con tarjeta: ";
      cin >> totalTarjeta;

      // A
      if(i == 1 || cantMesas > maxMesas){
         maxMesas = cantMesas;
         codigoMaxMesas = codigoMozo;
      }

      // B
      if(totalEfectivo > 0 && totalTarjeta == 0){
         cantSoloEfectivo++;
      }
   }

   cout << endl << "PUNTO A" << endl;
   cout << "Mozo que atendió más mesas: " << codigoMaxMesas << endl;

   cout << endl << "PUNTO B" << endl;
   cout << "Mozos que cobraron únicamente en efectivo: " << cantSoloEfectivo << endl;

   return 0;
}
