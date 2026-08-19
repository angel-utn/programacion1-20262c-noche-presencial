#include <iostream>
using namespace std;

int main(){
  int a, b, bkp;
  cout << "Ingresar el valor de A: ";
  cin >> a;

  cout << "Ingresar el valor de B: ";
  cin >> b;

  cout << "A: " << a << endl;
  cout << "B: " << b << endl;
  cout << endl;

  // Realizamos el intercambio
  bkp = a;
  a = b;
  b = bkp;

  cout << "A: " << a << endl;
  cout << "B: " << b << endl;


  return 0;
}
