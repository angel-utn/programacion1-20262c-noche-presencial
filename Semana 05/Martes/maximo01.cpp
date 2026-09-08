/**
  Hacer un programa para ingresar cinco números todos positivos.
  Calcular e informar el mayor de los números ingresados.
*/
#include <iostream>
using namespace std;

int main(){
 int n1, n2, n3, n4, n5;

 cout << "Ingresar número: ";
 cin >> n1;

 cout << "Ingresar número: ";
 cin >> n2;

 cout << "Ingresar número: ";
 cin >> n3;

 cout << "Ingresar número: ";
 cin >> n4;

 cout << "Ingresar número: ";
 cin >> n5;

 if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5) {
  cout << "El más grande es " << n1 << endl;
 }
 else{
  if (n2 > n3 && n2 > n4 && n2 > n5){
    cout << "El mas grande es " << n2 << endl;
  }
  else{
    if (n3 > n4 && n3 > n5){
      cout << "El más grande es " << n3 << endl;
    }
    else{
      if (n4 > n5){
        cout << "El más grande es " << n4 << endl;
      }
      else{
        cout << "El más grande es " << n5 << endl;
      }
    }
  }
 }


 return 0;
}
