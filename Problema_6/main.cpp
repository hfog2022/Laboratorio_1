/*
 * Date: 24/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que encuentre el valor
 * aproximado del número de euler en base a
 * la siguiente suma infinita:
 * e = 1/0! + 1/1! + 1/2! + 1/3!+ 1/4! + 1/5!...
 * El usuario debe ingresar el número de elementos
 * usados en la aproximación
*/

#include <iostream>

using namespace std;

int fact(int);

int main()
{
    unsigned int suma;
    cout << "Por favor ingrese un numero: ";
    cin >> suma;
    double e = 0;
    for(unsigned int i =0; i <suma; i++){
        double u=fact(i);
        e += 1/u;
    }
    cout << "e es aproximadamente: " << e << endl;
    return 0;
}

int fact(int f){
    int factorial = f;
    if(factorial>1){
        factorial=f*fact(f-1);
        return factorial;

    }else{
        return 1;
    }

}










