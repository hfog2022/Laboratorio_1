/*
 * Date: 12/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida un número N
 * e imprime todas las potencias desde N^1 hasta N^5.
*/

#include <iostream>

using namespace std;

int main()
{
    int numero;
        int resultado = 0;
        int x = 1;


        cout << "***Potencias de un numero***" << endl;
        cout << "Por favor ingresa un numero entero: ";
        cin >> numero;



        for(x = 1; x <= 5; x++){
                if (resultado < numero){
                    resultado = numero * x;
                }
                else{
                     resultado = resultado * numero;
                }
                cout << numero <<"^"<< x << "=" <<resultado <<endl;
            }
             x++;

    return 0;
}
