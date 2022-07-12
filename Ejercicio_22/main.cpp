/*
 * Date: 13/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida una cantidad entera
 * de segundos y la imprime en formato horas:minutos: segundos.
*/

#include <iostream>

using namespace std;

int main()
{
    int h, m, s, hora;
        cout << "Por favor ingrese los segundos: ";
        cin >>hora;

        h = hora / 3600;
        hora = hora % 3600;
        m = hora / 60;
        s = hora % 60;

        cout <<h<<":"<<m<<":"<<s<<endl;

    return 0;
}
