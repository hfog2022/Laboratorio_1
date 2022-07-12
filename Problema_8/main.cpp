/*
 * Date: 24/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que reciba 3 números a, b, c, y
 * calcule la suma de todos los múltiplos de a y b
 * que sean menores a c. Ten en cuenta no sumar
 * 2 veces los múltiplos comunes.
 *
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, x;

    cout << "Por favor ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Por favor ingrese el segundo numero: " << endl;
    cin >> num2;
    cout << "Por favor ingrese el tercer numero: " << endl;
    cin >> num3;

    for (x = num1; x<= num3; x++){
        cout<<x;
    }

   system("pause");
}


