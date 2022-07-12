/*
 * Date: 13/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida constantemente
 * números hasta que se ingrese el número cero e
 * imprime en pantalla la suma de todos los números ingresados.
*/

#include <iostream>

using namespace std;

int main()
{
    int numero=0 , suma=0, *ptr_numero=&numero ;

        for (int i = 0 ; i < 1 ; ) {
            cout << "Ingrese un numero : ";
            cin >> *ptr_numero;
            if(*ptr_numero != 0){
                suma+=*ptr_numero;
            }
            else{ i++ ;
            }
        }
        cout << "El resultado de la sumatoria es: "<<suma << endl;

    return 0;
}
