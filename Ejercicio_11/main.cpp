/*
 * Date: 12/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida un número N
 * e imprime en pantalla su tabla de multiplicar hasta 10xN.
*/

#include <iostream>

using namespace std;

int main()
{
    int numero;

        cout << "***Tabla de Multiplicar***" << endl;
        cout << "Por favor ingresa un numero entero: ";
        cin >> numero;
        cout <<endl;
        for(int i = 1; i <= 10; i++){
            cout <<i<<" X "<<numero<<" = " <<numero*i<<endl;
        }

    return 0;
}
