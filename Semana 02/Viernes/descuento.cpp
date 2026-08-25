#include<iostream>
using namespace std;

int main() {
	float monto, paga;
	cout << "Ingrese monto: " << endl;
	cin >> monto;
   
	if (monto>=25000) {
		paga = monto*0.9f;
	} else {
		paga = monto;
	}
	cout << "Debe pagar: " << paga << endl;
	return 0;
}

