/*
 * Date: 12/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida un número N
 * e imprime en pantalla la suma de todos
 * los números entre0 y N (incluyéndose el mismo).
*/

#include <iostream>

using namespace std;

int main()
{
    int numero;
       int i = 1;
       int sumatoria = 0;
       cout << "***Sumatoria de un numero entero***" << endl;
       cout << "Por favor ingrese un numero entero: " ;
       cin >>numero;

       while(i <= numero){
           //cout << i << endl;
           sumatoria += i;
           i++;
       }
       cout <<"La sumatoria desde 0 hasta " << numero << " es: " << sumatoria <<endl;

    return 0;
}
