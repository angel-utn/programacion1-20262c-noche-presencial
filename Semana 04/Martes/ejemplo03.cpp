#include <iostream>
using namespace std;

int main(){
  char tipoVacuna;
  int cantidad, cantidadSinDescuento;
  float total=0;
  bool tipoVacunaCorrecta = true;

  cout << "Tipo de vacuna: ";
  cin >> tipoVacuna;

  cout << "Cantidad de dosis: ";
  cin >> cantidad;

  switch(tipoVacuna){
    case '1':
    case 'A':
    case 'a':
      // Código 1 (antigripal $4.500): aplicar un 10% de
      // descuento si se compran 3 o más dosis.
      total = cantidad * 4500;
      if (cantidad >= 3){
        total = total * 0.9;
      }

    break;

    case '2':
    case 'F':
    case 'f':

      if (cantidad <= 5){
        total = cantidad * 9000;
        total = total * 0.8;
      }
      else{
        cantidadSinDescuento = cantidad - 5;
        total = (36000) + cantidadSinDescuento * 9000;
      }

    break;

    case '3':
    case 'N':
    case 'n':
      total = cantidad * 10000;
      if (cantidad == 1){
        total += 500;
      }

    break;

    default:
      cout << "Tipo de vacuna incorrecto" << endl;
      tipoVacunaCorrecta = false;
    break;

  }

  if (tipoVacunaCorrecta == true){
    cout << "El importe total es: $ " << total << endl;
  }


 return 0;
}
