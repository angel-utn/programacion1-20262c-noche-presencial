#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Ingrese el numero: ";
    cin >> num;

    if (num > 0 )
    {
        cout << "Positivo";
    }
    else
    {
        if (num < 0)
        {
            cout << "Negativo";
        }
        else
        {
            cout << "Cero";
        }
    }
    return 0;
}
