/*
 * Date: 13/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que imprima dos columnas
 * paralelas, una con los números del 1 al 50 y otra
 * con los números del 50 al 1.
*/

#include <iostream>
#define FIN 50
#define INICIO 1

using namespace std;

int main()
{
    for(int i = 0 ; i < FIN; i++){
        cout << (FIN-i) << "    "  << (INICIO+i) << endl;
    }

    return 0;
}
