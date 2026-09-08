#include <iostream>
using namespace std;

int main(){
  int num1, num2, num3, num4, num5;

  cout << "Ingrese un numero: ";
  cin >> num1;
  cout << "Ingrese un numero: ";
  cin >> num2;
  cout << "Ingrese un numero: ";
  cin >> num3;
  cout << "Ingrese un numero: ";
  cin >> num4;
  cout << "Ingrese un numero: ";
  cin >> num5;

  if (num1 % 3 == 0){
    cout << num1 << " es multiplo de 3" << endl;
  }
  if (num2 % 3 == 0){
    cout << num2 << " es multiplo de 3" << endl;
  }
  if (num3 % 3 == 0){
    cout << num3 << " es multiplo de 3" << endl;
  }
  if (num4 % 3 == 0){
    cout << num4 << " es multiplo de 3" << endl;
  }
  if (num5 % 3 == 0){
    cout << num5 << " es multiplo de 3" << endl;
  }

 return 0;
}
