/*
 * Date: 13/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida un número N
 * e imprime todos los divisores de N.
*/

#include <iostream>

using namespace std;

int main()
{
    int numero, residuo, i;
        cout << "***Divisores de un numero***" << endl;
        cout << "Por favor ingrese un numero: ";
        cin >> numero;
        cout << "Los divisores de "<<numero<< " son: " <<endl;
        cout <<endl;
        for(i = 1; i<=numero; i++){
                residuo = numero%i;
                if(residuo ==0 ){
                    cout << i <<endl;
                }

        }

    return 0;
}
