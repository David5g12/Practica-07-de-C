#include<iostream>
#include<vector>
#include<string>
#include <cstdlib>

using namespace std;

int main() {

	const int capacidad = 10;
	vector<int>elementos(capacidad);
	int cima = -1;
	cout << " Tecla elemento de la pila (termina con -1)";
	int x = 0;
	const int CLAVE = -1;
	while (x != CLAVE) {

		string entrada;
		cin >> entrada;

		x = atoi(entrada.c_str());
		if (x != 0 || entrada == "0") {
			if (cima < capacidad - 1) {
				cima++;
				elementos[cima] = x;
			}
			else {
				cout << "pila llena\n";
				break;
			}
		}
		else {
			cout << "Entrada no válida" << endl;
		}
	}
	if (cima >= 0) {
		cout << cima << " ";
		cout << "elementos de la pila\n";
		while (cima >= 0) {
			x = elementos[cima];
			cima--;
			cout << x << " ";
		}
	}
	else {
		cout << "pila vacia\n";
	}

	return 0;
}