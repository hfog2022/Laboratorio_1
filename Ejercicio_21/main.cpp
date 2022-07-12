/*
 * Date: 13/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida un carácter C, si
 * es una letra la debe convertir de mayúscula a
 * minúscula y viceversa e imprimirla.
 */

#include <iostream>

using namespace std;

int main()
{
    char letra;
        char limiteMinuscula_a = 'a' , limiteMinuscula_z = 'z' ;
        char limiteMayuscula_A = 'A',  limiteMayuscula_Z='Z';
        int diferencia = limiteMinuscula_a-limiteMayuscula_A;

        cout << "Por favor ingrese una letra A - Z : ";
        cin >> letra;


        if (int(letra) >= int(limiteMinuscula_a) && int(letra) <= int(limiteMinuscula_z)) {
            cout << "Letra convertida: "<<char(letra-diferencia) << endl;
        }
        else if (int(letra) >= int(limiteMayuscula_A) && int(letra) <= int(limiteMayuscula_Z)) {
            cout << "Letra convertida: "<<char(letra+diferencia) << endl;
        }
        else{
            cout << "Por favor ingrese un valor entre a-z , A-Z "<<endl;
        }

    return 0;
}
