/**
 * Modelo de Primer Parcial 2026 2C - Ejercicio 2
 * Restorán: 10 mozos. Por cada mozo se ingresa su código y luego sus mesas
 * (número de mesa, comensales, forma de pago, importe). Las mesas de cada
 * mozo terminan con número de mesa igual a 0.
 *
 * A) Por cada mozo, el importe promedio cobrado por mesa.
 * B) La forma de pago con la que se recaudó el mayor importe total del día.
 * C) Cantidad de mozos que atendieron al menos una mesa de más de 6 comensales.
 */
#include <iostream>
using namespace std;

int main(){
   const int CANT_MOZOS = 10;
   const int TOPE_COMENSALES = 6;

   int i;
   int codigoMozo, numeroMesa, comensales, formaPago;
   float importe;

   // A
   float importeMozo;
   int cantMesasMozo;
   float promedioMozo;
   // B
   float totalEfectivo = 0, totalTarjeta = 0, totalTransferencia = 0;
   // C
   bool atendioMesaGrande;
   int cantMozosMesaGrande = 0;

   for(i = 1; i <= CANT_MOZOS; i++){
      importeMozo = 0;
      cantMesasMozo = 0;
      atendioMesaGrande = false;

      cout << "Código de mozo: ";
      cin >> codigoMozo;

      cout << "Número de mesa (0 para terminar): ";
      cin >> numeroMesa;

      while(numeroMesa != 0){
         cout << "Cantidad de comensales: ";
         cin >> comensales;
         cout << "Forma de pago (1-Efectivo, 2-Tarjeta, 3-Transferencia): ";
         cin >> formaPago;
         cout << "Importe cobrado: ";
         cin >> importe;

         // A
         importeMozo += importe;
         cantMesasMozo++;

         // B
         switch(formaPago){
            case 1:
               totalEfectivo += importe;
            break;
            case 2:
               totalTarjeta += importe;
            break;
            case 3:
               totalTransferencia += importe;
            break;
         }

         // C
         if(comensales > TOPE_COMENSALES){
            atendioMesaGrande = true;
         }

         cout << "Número de mesa (0 para terminar): ";
         cin >> numeroMesa;
      }

      // A
      promedioMozo = importeMozo / cantMesasMozo;
      cout << endl << "PUNTO A - Mozo " << codigoMozo << ": importe promedio por mesa $" << promedioMozo << endl << endl;

      // C
      if(atendioMesaGrande == true){
         cantMozosMesaGrande++;
      }
   }

   cout << endl << "PUNTO B" << endl;
   if(totalEfectivo >= totalTarjeta && totalEfectivo >= totalTransferencia){
      cout << "Forma de pago con mayor recaudación: Efectivo" << endl;
   }
   else if(totalTarjeta >= totalTransferencia){
      cout << "Forma de pago con mayor recaudación: Tarjeta" << endl;
   }
   else{
      cout << "Forma de pago con mayor recaudación: Transferencia" << endl;
   }

   cout << endl << "PUNTO C" << endl;
   cout << "Mozos con al menos una mesa de más de " << TOPE_COMENSALES << " comensales: " << cantMozosMesaGrande << endl;

   return 0;
}
