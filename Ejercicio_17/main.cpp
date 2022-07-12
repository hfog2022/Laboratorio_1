/*
 * Date: 13/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida constantemente
 * números hasta que se ingrese el número cero e
 * imprime en pantalla el mayor de todos los números ingresados.
*/

#include <iostream>

using namespace std;

int main()
{
    cout <<"***El numero mayor***"<< endl;

       int numero = 0 , *ptr_numero =&numero , mayor = 0 ;

       for (int i = 0; i<1; ) {
           cout << "Ingrese un numero: ";
           cin >> *ptr_numero ;
           if(*ptr_numero != 0){
               if(mayor<*ptr_numero){
                   mayor=*ptr_numero;
               }
           }
           else{
               i++;
           }
       }
       cout << "El mayor numero ingresado fue: " << mayor << endl;

    return 0;
}
