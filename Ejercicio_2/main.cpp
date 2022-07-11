/*
 *  Date: 12/06/2022
 *  Author: Hector Orozco
 *  Informatica II 2022-1
 *  Escribe un programa que pida un número N
 *  e imprime en pantalla si es par o impar.
*/

#include <iostream>

using namespace std;

int main()
{
    int numero;

        cout << "******Es par o impar?*****" << endl;
        cout << "Por favor ingresar un numero entero: " << endl;
        cin >>numero;

        if (numero % 2 == 0)
            cout << "El numero ingresado es un numero par." << endl;
        else
            cout << "El numero ingresado no es un numero par," <<endl;


    return 0;
}
