#include <iostream>
using namespace std;

int main(){
  /**
   El for tiene 3 partes: inicializacion; condicion; incremento
   for (inicio; condicion; incremento)
   lo que quieres que se repita va entre las { } 
  */

  for (int i = 1; i <= 5; i++){
    cout << "i = " << i << endl;
  }

  cout << endl;

  /// Tambien da 5 repeticiones pero la variable de control toma otros valores
  for (int i = 11; i <= 15; i++){
     cout << "i = " << i << endl;
  }

  cout << endl;

  /// Tambien da 5 repeticiones pero la variable de control va de 2 en 2
  for (int i = 1; i <= 10; i+=2){
     cout << "i = " << i << endl;
  }
  cout << endl;

 return 0;
}
