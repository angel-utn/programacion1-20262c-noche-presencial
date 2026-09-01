#include <iostream>
using namespace std;

int main(){
  const float TIEMPO_MAXIMO = 2.5f;
  const int CANT_COMPETENCIAS = 3;

  float tiempo100mts;
  int cantCompGanadas;

  cout << "Ingresar el tiempo en completar los 100mts (en minutos): ";
  cin >> tiempo100mts;

  cout << "Cantidad de competencias ganadas: ";
  cin >> cantCompGanadas;

  if (tiempo100mts <= TIEMPO_MAXIMO && cantCompGanadas >= CANT_COMPETENCIAS){
    cout << "Beca de natación otorgada" << endl;
  }

 return 0;
}
