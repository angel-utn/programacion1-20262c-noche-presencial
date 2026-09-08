#include <iostream>
using namespace std;

int main(){
  int num;

  for (int i = 0; i < 5; i++){
    cout << "Ingrese un numero: ";
    cin >> num;
    if (num % 3 == 0){
      cout << num << " es multiplo de 3" << endl;
    }
  }

 return 0;
}
