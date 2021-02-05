
#include <iostream>
#include <string>

using namespace std;
int main()
{
    cout << "Piensa en un número entre 1 y 100.\n";
    cout << "Por cada conjetura, introduce si tu número es\n";
    cout << "(l)arger o (s)maller que el mostrado.\n";
    cout << "Introduzca 'c' (de 'correcto') si el número mostrado es el suyo.\n";

    int adivinar = 50;
    vector<int> diferencias(6);
    diferencias[0] = 25;
    diferencias[1] = 13;
    diferencias[2] = 6;
    diferencias[3] = 3;
    diferencias[4] = 2;
    diferencias[5] = 1;
    int counter = 0;
    char answer = ' ';

    while (answer != 'c') {
        cout << "Mi suposición: " << adivinar << endl;
        ++counter;
        cout << "¿Correcto, mayor o menor (c, l, s)? ";
        cin >> answer;
        switch (answer) {
        case 'c':

            break;
        case 'l':
            if (counter<=diferencias.size())
                adivinar += diferencias[counter-1];
            else
                ++adivinar;
            break;
        case 's':
            if (counter<=diferencias.size())
                adivinar -= diferencias[counter-1];
            else
                --adivinar;
            break;
        default:
            
            cout << "Esta no es una respuesta válida, utilice c, l o s"\n";
            --counter;
            break;
        }
        if (adivinar>100 || adivinar<1) {
            cout << "Su número debe estar entre 1 y 100.\n";
            return 0;
        }
        if (counter==7 && answer!='c')
        {
            cout << "Súper sospechoso, amigo. Ya debería tener tu número.\n";
            return 0;
        }
    }

    string s_try;
    if (counter==1)
        s_try = " pruebe con ";
    else
        s_try = " intenta ";
    cout << "Me llevó " << counter << s_try << "para encontrar su número, " << adivinar << ".\n";
}
