//Parte 3 ejercicio 10

#include <iostream>
#include <string
using namespace std;
int main()
{
	string operation;	
	double d1 = 0;
	double d2 = 0;
	double res = 0;
	cout << "Introduzca una operación (+, -, *, /, más, menos, mul, div)\n"
        << "seguido de dos operandos\n";
	while (cin >> operation >> d1 >> d2) {
		if (operation == "+" || operation == "mas") res = d1 + d2;
		else if (operation == "-" || operation == "menos") res = d1 - d2;
		else if (operation == "*" || operation == "mul") res = d1 * d2;
		else if (operation == "/" || operation == "div") {
			if (d2 == 0)
				operation = "divzero";
			else
				res = d1 / d2;
		}
		else operation = "unknown";
		if (operation == "unknown")
			cout << "No conozco a este operador!\n";
		else if (operation == "divzero")
			cout << "No se puede dividir a cero!\n";
		else
			cout << d1 << ' ' << operation << ' ' << d2 << " = " << res << '\n';
		cout << "Inténtalo de nuevo\n";
	}
	return 0;
}
