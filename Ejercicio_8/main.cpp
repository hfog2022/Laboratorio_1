/*
 * Date: 12/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida un número N
 * e imprime en pantalla su factorial.
*/

#include <iostream>

using namespace std;

int main()
{
    int numero;
        int fact=1;
        int i;

        cout << "***Factorial de un numero***" << endl;
        cout << "Por favor ingresar un numero: ";
        cin >> numero;

        if(numero<0) fact =0;
            else if(numero==0) fact=1;
            else{
                    for (i = 1; i <= numero; i++){
                        fact = fact*i;
                    }
                }
                cout<<numero<< "!" << " = " << fact << endl;

    return 0;
}
