/*
 * Date: 13/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida dos números A y B
 * e imprime en pantalla el mínimo común múltiplo entre los dos.
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, mcm, min;
        cout << "***Minimo comun multiplo***" << endl;
        cout <<endl;
        cout << "Por favor ingrese el primer numero: ";
        cin >>num1;
        cout << "Por favor ingrese el segundo numero: ";
        cin >>num2;

        min = std::min(num1, num2);

        for(int i = 1; i <= min; i++){
            if(num1 % i == 0 && num2 % i == 0){
                int mcd = i;
                mcm = (num1 * num2)/mcd;
            }
        }

        cout << "El MCM de " <<num1<< " y "<<num2<< " es: "<<mcm<<endl;

    return 0;
}
