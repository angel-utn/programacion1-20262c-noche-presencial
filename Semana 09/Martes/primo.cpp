#include <iostream>
using namespace std;
bool esPrimo(int n);
int cantidadDivisores(int n);
bool esDivisible(int dividendo, int divisor);

int main(){
    int n;
    cout << "Ingrese numero: ";
    cin >> n;
    if(esPrimo(n)){
        cout << "Es primo"<<endl;
    }
    else{
        cout << "No es primo"<<endl;
    }

    return 0;
}

bool esDivisible(int dividendo, int divisor){
    if(dividendo % divisor == 0){
        return true;
    }
    else{
        return false;
    }
}

int cantidadDivisores(int n){
    int cd = 0;

    for(int i=1; i<=n; i++){
        if(esDivisible(n,i)){
            cd++;
        }
    }
    return cd;
}

bool esPrimo(int n){
    if(cantidadDivisores(n) == 2){
        return true;
    }
    else{
        return false;
    }
}
