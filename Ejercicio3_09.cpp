//Parte 3 ejercicio 9
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Introduzca un número deletreado\n";
	string number;
	int res = -1;
	while (cin >> number) {
		if (number == "cero") res = 0;
		else if (number == "uno") res = 1;
		else if (number == "dos") res = 2;
		else if (number == "tres") res = 3;
		else if (number == "cuatro") res = 4;
		else if (number == "cinco" || number == "Salir\n") return 0;
		if (res != -1)
			cout << "Has introducido el número " << res << '\n';
		else
			cout << "No es un número que conozca!\n";
		cout << "Por favor, introduzca otro número o \"Salir\"\n";
		res = -1;
	}

	return 0;
}
