/*
 * Date: 18/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que genere un número
 * aleatorio A (entre 0 y 100)
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int x, adivinado = 0, num, intentos = 0;
    srand((unsigned)time(NULL));
    x = rand()%100;

    while(adivinado == 0){
        cout << "Por favor ingrese un numero: " << endl;
        cin >>num;

        if (num>=1 && num<=100){
            intentos= intentos+1;
            if(num>x){
               cout << "El numero a adivinar es menor";
               cout << endl << endl;
            }else if(num<x){
                cout << "El numero a adivinar es mayor" << endl;
                cout << endl << endl;
            }else{
                cout <<"Numero adivinado! en "<< intentos << " intentos" << endl;
                adivinado = 1;
            }
        }
    }




    return 0;
}
