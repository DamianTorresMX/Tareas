
#include <iostream>
using namespace std;

int main()
{
    const double dolar_per_yen = 0.01;
    const double dolar_per_euro = 1.35;
    const double dolar_per_pound = 1.61;
    const double dolar_per_yuan = 0.16;
    const double dolar_per_kroner = 0.18;
    double monto = 0;
    char moneda = ' ';
    cout << "Introduzca un importe seguido de una moneda (Y, e, p, y o k):\n";
    cin >> monto >> moneda;

    switch (moneda) {
    case 'Y':
        cout << monto << " yen es " << dolar_per_yen*monto << " dolar\n";
        break;
    case 'e':
        cout << monto << " euro es " << dolar_per_euro*monto << " dolar\n";
        break;
    case 'p':
        cout << monto << " pound es " << dolar_per_pound*monto << " dolar\n";
        break;
    case 'y':
        cout << monto << " yuan es " << dolar_per_yuan*monto << " dolar\n";
        break;
    case 'k':
        cout << monto << " kroner es " << dolar_per_kroner*monto << " dolar\n";
        break;
    default:
        cout << "Lo siento, no conozco la moneda '" << moneda << "'\n";
        break;
    }
	return 0;
}
