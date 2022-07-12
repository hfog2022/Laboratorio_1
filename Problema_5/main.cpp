/*
 * Date: 25/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que muestre un rombo en la pantalla
 * El tamaño del patrón estará determinado por un número
 * entero impar que ingrese el usuario. En el
 * ejemplo mostrado, el tamaño de la figura es 7.
*/

#include <iostream>

using namespace std;

void espacios_vacios(int x){
    for(int i=0;i<x;i++)
        cout<<" ";
}

void asteriscos(int x){
    for(int i=0;i<x;i++)
        cout<<"*";
    cout<<endl;
}

int main () {
    int base;
    do{
        cout<<"Por favor ingrese un numero impar: ";
        cin>>base;
    }

    while(base%2==0 ||base<=0);
    int b=base/2;
    int cont=1;
    bool bandera=true;
    for(int i=0;i<base;i++){
        espacios_vacios(b);
        asteriscos(cont);

        if(b>0 && bandera==true) {
            b=b-1;
            cont=cont+2;

        }
        else{
            b=b+1;
            cont=cont-2;
            bandera=false;
           }
    }

    return 0;
}
