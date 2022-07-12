/*
 * Date: 13/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida un número N
 * e imprime si es o no un cuadrado perfecto.
*/

#include <iostream>

using namespace std;

int main()
{
    int numero=0;
       int i;
       bool escuadrado = false;

       cout << "***Cuadrado perfecto***" << endl;
       cout << "Ingrese un numero para comprobar si es cuadrado perfecto : ";
       cin >> numero ;

       for(i = 1; i < numero; i++){
           if(i * i == numero){
                   escuadrado=true;
                   break;
           }
       }
           if(escuadrado){
               cout <<numero << " es un cuadrado perfecto."<<endl;
           }
           else{
               cout <<numero << " No es un cuadrado perfecto."<<endl;
           }


    return 0;
}
