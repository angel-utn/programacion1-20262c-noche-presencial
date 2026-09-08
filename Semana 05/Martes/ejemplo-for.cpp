/**
Hacer un programa para ingresar cinco números enteros distintos
entre sí y listar el máximo de ellos. Suponer que los números pueden ser positivos,
negativos o cero.

*/
#include <iostream>
using namespace std;

int main(){
 int i, n, maximo;

  for(i=1; i<=5; i++){
   cout << "Ingresar número: ";
   cin >> n;
   if (i == 1 || n > maximo){
    maximo = n;
   }

 }

 cout << "El más grande es " << maximo << endl;

 return 0;
}
