/*
 * Date: 22/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que calcula
 * el máximo factor primo de un número.
*/
#include <iostream>

using namespace std;


int main(){

    int n,f;

    cout <<"Ingrese un numero: ";
    cin >>n;

    f = 2;

    while (n>1) {
      if (n%f==0) {
        n = n/f;
        cout << f <<endl;

      }

      else
        f++;
    }

    return 0;
}


