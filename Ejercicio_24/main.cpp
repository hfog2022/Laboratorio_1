/*
 * Date: 13/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida un número entero
 * e imprime un cuadrado de dicho tamaño, los bordes
 * del cuadrado deben estar hechos con el carácter
 *  ‘+’ y el interior debe estar vacío.
*/

#include <iostream>

using namespace std;

int main()
{
    int lado;
       cout << "Por favor ingrese un numero entero: ";
       cin >>lado;

       for(int i = 0; i < lado; i++){
           for(int j = 0; j < lado; j++){
                   if(i == 0 || j == 0 || i == lado-1 || j == lado-1){
                       cout<< "+";
                   }
                   else{
                       cout<<" ";
                   }
           }
           cout<<endl;
       }

    return 0;
}
