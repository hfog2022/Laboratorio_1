/*
 * Date: 13/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida un número N
 * e imprime en pantalla la cantidad de dígitos de N.
*/

#include <iostream>

using namespace std;

int main()
{
    int n, x = 0;

        cout << "***Cifras de un numero***" << endl;
        cout << "Por favor ingrese un numero entero: \n";
        cin >> n;

        while(n > 0){
            n = n / 10;
            x++;
        }
        cout << "El numero tiene "<< x <<" digitos"<<endl;

    return 0;
}
