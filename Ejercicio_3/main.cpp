/*
 * Date: 12/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida dos números
 * A y B e imprime en pantalla el mayor.
*/

#include <iostream>

using namespace std;

int main()
{
    int numero_a, numero_b;

        cout << "******Cual numero es mayor?******" << endl;
        cout << "Por favor ingresar el numero entero A: " <<endl;
        cin >> numero_a;
        cout << "Por favor ingresar el numero entero B: " <<endl;
        cin >> numero_b;

        if (numero_a > numero_b)
            cout << "El mayor es " << numero_a << endl;
        else
            cout << "El mayor es " << numero_b << endl;

    return 0;
}
