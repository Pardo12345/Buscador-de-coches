#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;


int main() {
	int opcion;

	do {
		cout << "" << endl;
		cout << " " << endl;
		cout << "1. Buscar coche" << endl;
		cout << "2. Visualizar datos" << endl;
		cout << "0. salir" << endl;
		cout << "Seleccione una opcion" << endl;
		cin >> opcion;
		cin.ignore();

		switch (opcion) {
		case 1:
			//Buscar();
			break;

		case 2:
			//Abrir_datos();
			break;

		case 0:
			cout << "Nos vemos en la proxima" << endl;
			break;

		default:
			cout << "Intentalo de nuevo, opcion no encontrada." << endl;
		}
	} while (opcion != 0);

	return 0;
}