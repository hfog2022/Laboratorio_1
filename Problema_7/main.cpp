/*
 * Date: 24/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que reciba un número n y halla
 * la suma de todos los números pares en la serie
 * de Fibonacci menores a n.
*/

#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int m = 1;

    int aux = 0;
    int suma = 0;
    int numero = 0;

    cout << "Ingrese numero: "<<endl;
    cin >> numero;

    while ( aux < numero){

        aux = n + m;
        if(aux % 2 == 0){
            suma += aux;
        }
        n = m;
        m = aux;

    }

    cout << "El resultado de la suma es: " << suma << endl;
    system("pause");
}
