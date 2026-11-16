#include <iostream>

using namespace std;

int res; /// ambito global

void calcular(){
    res = 1 + 10;
}

void mostrarResultado(){
    cout << "Resultado: " << res << endl;
}

int main(){
    calcular();
    mostrarResultado();
    return 0;
}
