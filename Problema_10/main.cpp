/*
 * Date: 22/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que reciba
 * un número n e imprime el enésimo
 * número primo.
*/

#include <iostream>
#include<math.h>

using namespace std;

int primo(int);

int main()
{
    unsigned int i, numero, numero_primo = 0;
    cout << "Por favor ingrese un numero: ";
    cin >> numero;

    for(i = 2; i > 0; i++){

        if(primo(i)==1){
            numero_primo++;
            if(numero_primo == numero){
                cout << "El primo numero de "<< numero << " es: "<< i << endl;
                return 0;
            }
        }
    }
}

int primo(int i){
    unsigned int j;
    double x;

    if (i%2 == 0) {
        if (i==2)
            return 1;
        else
            return 0;
    }
    else {
          x=sqrt(i);
          j=3;
          while ((j<=x) && (i%j!=0)){
              j=j+2;
          }
          if (j>x)
              return 1;
          else
              return 0;
    }
}
