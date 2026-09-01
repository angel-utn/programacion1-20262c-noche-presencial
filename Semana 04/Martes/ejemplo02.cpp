#include <iostream>
using namespace std;

int main(){
  const int DIA_SIN_VACUNA = 7;
  const int HORARIO_LIMITE = 20;
  int numeroDia;
  int horario;

  cout << "Número de día (1 - Lunes / 7 - Domingo): ";
  cin >> numeroDia;

  cout << "Horario (24 hs): ";
  cin >> horario;

  if (numeroDia == DIA_SIN_VACUNA || horario > HORARIO_LIMITE){
    cout << "No se aplican vacunas";
  }

 return 0;
}
