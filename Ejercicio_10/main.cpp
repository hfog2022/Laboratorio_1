/*
 * Date: 12/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida un número N
 * e imprime en pantalla todos los múltiplos
 * de dicho númeroentre 1 y 100.
*/

#include <iostream>

using namespace std;

int main()
{
    int numero, x;

       cout << "***Multiplos de un numero***" << endl;
       cout << "Por favor ingrese un numero: ";
       cin >> numero;
       cout << "Multiplos de 33 menores que 100 : "<<endl;
       for(x = numero; x <= 100; x = x + numero){
           cout << x << endl;
       }

    return 0;
}
