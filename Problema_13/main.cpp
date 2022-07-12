/*
 * Date: 22/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que reciba un
 * número y calcula la suma de todos
 * los primos menores que el número ingresado.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Por favor ingrese un numero: ";
    cin >> n;

    for(int i = 2; i < n; i++){

        int aumenta = 2;
        bool primo = true;

        while(primo && aumenta<i){

            if( i % aumenta == 0){
                primo = false;
            }
            else{
                aumenta++;
            }
        }
        if (primo){
            cout <<i <<" es un numero primo "<<endl;
        }
    }


    return 0;
}
