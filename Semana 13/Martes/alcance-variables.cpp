#include <iostream>
using namespace std;

int variable = 10000; // Declaracion de variable global

void miFuncion();

void miFuncion(){
    int variable = 1000;
    cout << variable << endl; // Usa variable local de miFuncion
}

int main(){
    miFuncion();

    for(int i = 1; i<= 3; i++){
        int variable = 3000;
        cout << variable << endl;   // Usa variable local del for
    }

    cout << variable << endl;  // Usa la variable global


 return 0;
}
