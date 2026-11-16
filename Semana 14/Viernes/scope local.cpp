#include <iostream>

using namespace std;
/**
   Una forma de resolver el problema del ambito global
   es utilizar referencias
*/


void calcular(int &res){
    res = 1 + 10;
}

void mostrarResultado(int res){
    cout << "Resultado: " << res << endl;
}

int main(){
    int res; /// deja de ser ambito global y pasa al ambito local
    calcular(res);
    mostrarResultado(res);
    return 0;
}
