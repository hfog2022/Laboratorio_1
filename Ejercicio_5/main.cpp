/*
 * Date: 12/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida dos números A y B
 * e imprime en pantalla la división A/B con redondeo.
*/


#include <iostream>

using namespace std;

int main()
{
    int numero_a, numero_b, resultado;
        cout << "Por favor ingrese el numero entero A: " << endl;
        cin >> numero_a;
        cout << "Por favor ingrese el numero entero B: " << endl;
        cin >> numero_b;

        resultado = numero_a / numero_b;

        cout << numero_a << "/" << numero_b << "=" << resultado << endl;

    return 0;
}
