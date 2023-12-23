#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <cstdlib>
#include <fstream>
#include<stdlib.h>
using namespace std;


int main() {
	int opcion;

	do {
		cout << "Buscador de coches" << endl;
		cout << " " << endl;
		cout << "1. Buscar coche" << endl;
		cout << "2. Visualizar datos" << endl;
		cout << "0. salir" << endl;
		cout << "Seleccione una opcion" << endl;
		cin >> opcion;
		cin.ignore();


		void Buscar();

		void Abrir_datos();

		switch (opcion) {
		case 1:
			Buscar();
			break;

		case 2:
			Abrir_datos();
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