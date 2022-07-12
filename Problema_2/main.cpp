/*
 * Date: 22/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Se necesita un programa que permita determinar
 * la mínima combinación de billetes y monedas para
 * una cantidad de dinero determinada.
*/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
        long int dineroIngresado=0 , aux_monedas=0;
        unsigned int cambio[]={50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50 };
        unsigned int denominacion = sizeof(cambio)/sizeof(cambio[0]);

        cout << "Ingrese la cantidad de dinero a procesar : " ;
        cin >> dineroIngresado ;

        if(dineroIngresado<0){
            cout<< "Es necesario que ingrese cifras positivas para continuar. Intente nuevamente " << endl;
            exit(1);
        }

        for(unsigned int indice = 0; indice < denominacion ; indice ++ ){
            aux_monedas = ceil(dineroIngresado/cambio[indice]);
            dineroIngresado-=cambio[indice] * aux_monedas ;
            cout << setw(20) << left << cambio[indice]<<":"<< aux_monedas<< endl;
        }
        if(dineroIngresado!=0){
            cout<< setw(20) << left << "Faltante: " << dineroIngresado <<endl;
        }
    return 0;
}
