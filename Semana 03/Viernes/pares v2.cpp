#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3;

    cout << "Ingrese numero: ";
    cin >> n1;
    cout << "Ingrese numero: ";
    cin >> n2;
    cout << "Ingrese numero: ";
    cin >> n3;

    if(n1%2 == 0 && n2%2 == 0 && n3%2 == 0){
        cout << "Son todos pares" << endl;
    }
    else if (n1%2 == 0 || n2%2 == 0 || n3%2 == 0){
         cout << "Hay algun par" << endl;
    }
    else {
         cout << "No hay pares" << endl;
    }

    return 0;
}

