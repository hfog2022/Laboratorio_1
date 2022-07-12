/*
 * Date: 22/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que adivine un número A (entre 0 y 100)
*/

#include <iostream>
#include <time.h>

using namespace std;

void generarNumero(int * , int , int );
int main()
{

    int minimo=0;
    int maximo=100;
    int numero = 0 ;
    char resultado='0';
    bool salir=false;

    generarNumero(&numero , minimo, maximo);
    while(salir==false){
        cout << maximo-minimo << endl;
        cout << "rango "<<minimo << " --> "<< maximo << endl;
        cout << numero << endl;
        cout << "Para adivinar tu numero ingresa > < para indicar si es mayor o menor ";
        cin >> resultado;
        if(resultado=='>'){
            minimo=numero;
            generarNumero(&numero , minimo, maximo);
        }
        else{
            maximo=numero;
            generarNumero(&numero , minimo, maximo);
        }

    }
    return 0;
}

void generarNumero(int *ptr_numero , int min , int max){
    srand(time(0));
    int tmp_numero = min + rand() % max ;
    *ptr_numero = tmp_numero;
}
