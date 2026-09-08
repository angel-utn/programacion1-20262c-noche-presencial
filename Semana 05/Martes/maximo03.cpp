/**
  Hacer un programa para ingresar cinco números todos positivos.
  Calcular e informar el mayor de los números ingresados.
*/
#include <iostream>
using namespace std;

int main(){
 int i, n, maximo = 0;

  for(i=1; i<=5; i++){
   cout << "Ingresar número: ";
   cin >> n;

   if (n > maximo){
    maximo = n;
   }
 }

 cout << "El más grande es " << maximo << endl;

 return 0;
}
