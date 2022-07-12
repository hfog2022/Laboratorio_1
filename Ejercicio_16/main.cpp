/*
 * Date: 13/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida constantemente
 * números hasta que se ingrese el número cero e
 * imprime en pantalla el promedio de los
 * números ingresados (excluyendo el cero).
*/

#include <iostream>

using namespace std;

int main()
{
    int numero = 0 , *ptr_numero = &numero ;
        int suma = 0 ,   *ptr_suma= & suma;
        int contador=0 , *ptr_contador=&contador;

        bool repetir = true ;

        while(repetir){
            cout << "Ingrese un numero: " ;
            cin  >> *ptr_numero;
            if(*ptr_numero != 0){
                *ptr_suma+=*ptr_numero;
                *ptr_contador += 1;
            }
            else{
                repetir=false;
            }
        }

        cout << "El promedio es: "<<(*ptr_suma/ *ptr_contador)<< endl;

    return 0;
}
