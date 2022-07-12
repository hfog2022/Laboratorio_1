/*
 * Date: 24/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Empezando con el número 1 y moviéndose
 * hacia la izquierda y en sentido
 * horario se genera una espiral de números.
 *
*/

#include <iostream>

using namespace std;

void mostrar(int );

int main()
{
        int dimesiones = 0;
        int auxiliar = 0;
        int n1=0;
        cout << "Ingrese un numro para la dimesiones de la matriz : " ;
        cin >> dimesiones;
        for(int i=dimesiones ;i >= 1 ; i-=2){
            mostrar(i);
        }

    return 0;
}

void mostrar(int a ){

    for(int b=(a*a)-(a-1);b<a*a;b++){
        cout << b <<" ";
    }
    cout << endl;
}
