/*
 * Date: 24/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa para leer dos números enteros
 * con el siguiente significado: el valor del primer
 * número representa una hora del día en un reloj de
 * 24 horas, de modo que 1245 representa las doce y
 * cuarenta y cinco de la tarde. El segundo entero
 * representa un tiempo de duración de la misma
 * manera, por lo que 345 representa tres horas y 45 minutos.
*/

#include <iostream>

using namespace std;

int main()
{
    int primero = 0, segundo = 0;

    cout << "Por favor ingrese el primer numero (0 - 24): " << endl;
    cin >> primero;
    if(primero > 24){
        cout <<"Numero no valido" <<endl;
    }

    cout << "Por favor ingrese el segundo numero (0 - 60): " << endl;
    cin >> segundo;
    if(segundo > 60){
            cout <<"Numero no valido" <<endl;
    }else{
        cout <<"La hora es: "<<primero << segundo<<endl;

    }


    return 0;
}
