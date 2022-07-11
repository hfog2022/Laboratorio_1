/*
 * Date: 12/06/2022
 * Author Hector Orozco
 * Imformatica II 2022-1
 * Escribe un programa que pida dos números A y B e
 * imprime en pantalla el residuo de la división A/B.
 *
 */

#include <iostream>

using namespace std;

int main()
{
    int numero_a, numero_b;
        int residuo = 0;

        cout << "Por favor ingrese el numero entero A: " << endl;
        cin >> numero_a;
        cout << "Por favor ingrese el numero entero B: " << endl;
        cin >> numero_b;

        residuo = numero_a / numero_b;
        cout << "El residuo de la division "<<numero_a<<"/"<<numero_b << " es: "<< residuo << endl;
        return 0;
}
