/*
 * Date: 24/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida un número
 * entero N e imprime el resultado de la
 * suma de todos sus dígitos elevados
 * a sí mismos.
 *
*/

#include <iostream>

using namespace std;

int main()
{
    int numero= 0 ;
       int potencia = 1;
       int modulo=0;
       int sumatoria = 0 ;
       cout << "Por favor ingrese un numero: ";
       cin >> numero ;
       while (numero>=1) {
           modulo=numero%10;
           potencia=1;
           for(int i = 0 ;i < modulo ; i ++){
               potencia=potencia*modulo;
           }
           sumatoria=sumatoria+potencia;
           numero=numero/10;

       }
       cout << "El resultado de la suma es: "<<sumatoria<< endl;

    return 0;
}
