/*
 * Date: 13/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida un número N
 * e imprime si es o no un palíndromo
 * (igual de derecha a izquierda que de izquierda a derecha).
*/

#include <iostream>

using namespace std;

int invertir(int n);
bool esPalindromo(int n);

int main(){

    int n;
        cout <<"Por favor ingrese un numero entero: ";
        cin >> n;
        if(esPalindromo(n)){
            cout << n << " es un numero palindromo." <<endl;
        }
        else{
            cout << n << " No es un numero palindromo." <<endl;
        }


        return 0;
}


     int invertir(int n){
        int respuesta = 0;

        while(n > 0){
            respuesta = respuesta + n % 10;
            respuesta = respuesta * 10;
            n = n/10;
        }
        return respuesta/10;

}

    bool esPalindromo(int n){
        if(n == invertir(n)){
                return true;
        }
        else{
            return false;
        }
    }

