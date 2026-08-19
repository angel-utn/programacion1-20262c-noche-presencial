#include <iostream>
using namespace std;

int main(){
  int cantA, cantB, cantC, total;
  float porcA, porcB, porcC;

  cout << "Cantidad de unidades de alfajor A: ";
  cin >> cantA;
  cout << "Cantidad de unidades de alfajor B: ";
  cin >> cantB;
  cout << "Cantidad de unidades de alfajor C: ";
  cin >> cantC;

  total = cantA + cantB + cantC;

  /*
    int / int --> int (cociente)
    float / int --> float
    int / float --> float
    float / float --> float
  */

  porcA = (float)cantA/total*100;
  porcB = (float)cantB/total*100;
  porcC = (float)cantC/total*100;

  //porcA = cantA*100/total;
  //porcB = cantB*100/total;
  //porcC = cantC*100/total;

  cout << "Alfajor A: " << porcA << endl;
  cout << "Alfajor B: " << porcB << endl;
  cout << "Alfajor C: " << porcC << endl;

  return 0;
}
