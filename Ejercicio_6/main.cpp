/*
 * Date: 12/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida dos números A y B
 * e imprime en pantalla la potencia AB,
 * sin hacer usode librerías matemáticas
*/

#include <iostream>

using namespace std;

int main()
{
    int numero_a, numero_b;
        int resultado = 0;

        cout << "Por favor ingrese el numero entero A: " << endl;
        cin >> numero_a;
        cout << "Por favor ingrese el numero entero B: " << endl;
        cin >> numero_b;

        int x=1;

        while (x < numero_b)
        {
            if (resultado < numero_a){
                    resultado = numero_a * numero_a;
            }
            else{
                resultado = resultado * numero_a;
            }

            x++;

        }


        cout << numero_a <<"^"<< numero_b << "=" <<resultado <<endl;

    return 0;
}
