#include <iostream>

using namespace std;

int main(){
    float numero;

    cout << "Ingrese un numero: ";
    cin >> numero;


    if(numero == (int)numero){
        cout << "Es entero" << endl;
    }
    else{
        cout << "No es entero" << endl;
    }


    return 0;
}

