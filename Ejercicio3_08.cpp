// Parte 3 ejercicio 7 ||Damian

#include <iostream>


using namespace std;

int main()
{
	int number = 0;
	cout << "Introduzca un número entero\n";
	cin >> number;
	if (number % 2 == 0) {
		cout << "El valor " << number << " Este es un número par.\n";
	}
	else {
		cout << "El valor " << number << " es un número impar.\n";
	}
	return 0;
}
