/*
 * Date: 13/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida un número
 * N e imprime si es o no un número primo.
*/


#include <iostream>

using namespace std;

int main()
{
    int numero;
        bool primo = true;

        cout << "***Numero primo***" << endl;
        cout << "Por favor ingrese un numero entero: ";
        cin >>numero;

        for(int i = 2; i < numero; i++){
            if(numero % i == 0){
                primo = false;
            }

        }
        if (primo == true){
            cout <<numero <<" es un numero primo."<<endl;
        }
        else{
            cout <<numero <<" No es un numero primo."<<endl;
        }

    return 0;
}
