/*
 * Date: 22/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que identifique
 * si un carácter ingresado es una
 * vocal, una consonante o ninguna
 * de las 2 e imprime un mensaje según el caso.
*/

#include <iostream>

using namespace std;

int main()
{
    unsigned short int start_char_represent=int('a');
    unsigned short int end_char_represent=int('z');
    char user_probe = 0;
    char vocals[]={'a','e','i','o','u'};

    cout << "Ingrese un caracter : " ; cin >> user_probe;

    if(isupper(user_probe)){
        user_probe=tolower(user_probe);
       }

    if(int(user_probe)>=start_char_represent && int(user_probe)<=end_char_represent){

        for(unsigned short int indice = 0 ; indice <= 4 ; indice++ ){
            if(vocals[indice]==user_probe){
                cout << user_probe << " es una vocal "<<endl;
                exit(0);
               }
        }

        for ( unsigned short int min = start_char_represent ; min <= end_char_represent ; min++) {
            if(user_probe==char(min)){
                cout << user_probe << " es una consonante " << endl;
                exit(0);
            }
        }
    }
    else{
        cout << user_probe << " No es vocal ni consonante " << endl;
    }

    return 0;
}
