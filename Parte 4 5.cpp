
#include <iostream>
#include <string>

using namespace std;
int main()
{
    cout << "Introduzca dos valores dobles y un carácter (+, -, * o /)";
    double val1 = 0;
    double val2 = 0;
    char op = ' ';
    while (cin>>val1>>val2>>op) {
        switch (op) {
        case '+':
            cout << "La suma de " << val1 << " y " << val2 << " es " << val1+val2 << ".\n";
            break;
        case '-':
            cout << "La diferencia de " << val1 << " y " << val2 << " es " << val1-val2 << ".\n";
            break;
        case '*':
            cout << "El producto de " << val1 << " y " << val2 << " es " << val1*val2 << ".\n";
            break;
        case '/':
            cout << "El cociente de " << val1 << " y " << val2 << " es " << val1/val2 << ".\n";
            break;
			default:
            cout << "Esta no es una operación válida (use +, -, * o /)\n";
            break;
        }
    }
}


