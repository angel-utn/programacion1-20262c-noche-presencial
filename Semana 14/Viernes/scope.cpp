#include <iostream>

using namespace std;
/**
   El ambito es el lugar donde viven las variables, y donde se pueden
   acceder a ellas

   los ambitos estan definidos por las { }

   si no existe en el ambito actual, busca si existe en el ambito superior
*/

int main(){
    int res; 
    
    res = 15;
    
    cout << "Se muestra el res del ambito de main: " << endl;
    cout << res << endl; 
    
    
    {
       /// res al no ser declarado dentro del ambito, 
       /// utiliza el del main y lo modifica
       res = 10; 
       
    }
    
    cout << "Se muestra el res del ambito de main: " << endl;
    cout << res << endl; 
    
    {
       int res;
       /// res al ser declarado dentro del ambito, 
       /// no utiliza el del main si no el que tiene interno
       /// esto no cambia el res del main
       res = 100; 
       
       cout << "Se muestra el res del nuevo ambito: " << endl;
       cout << res << endl; 
       
       /// al llegar al final de las llaves, el res local se destruye
    }
    
    cout << "Se muestra el res del ambito de main sin cambios: " << endl;
    cout << res << endl; 
    
    return 0;
}
