#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main(){

    int numero, i;
    srand(time(0));

    for(i=1; i<=5; i++){
        numero = (rand() % 54)+1;
        cout << numero << endl;
    }


    return 0;
}
