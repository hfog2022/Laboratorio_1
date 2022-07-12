/*
 * Date: 18/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que debe leer un mes y un
 * día de dicho mes para luego decir si esa
 * combinación de mes y día son válidos.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fecha = "";
       string mes ="";
       string dia = "";
       int int_mes = 0;
       int int_dia = 0;
       bool flag = true ;
       cout << "Ingrese una fecha para validar (mes/dia) : ";
       cin >> fecha ;
       for(unsigned short indice=0 ; indice < fecha.length() ; indice ++){
           if(fecha[indice] != '/' && flag == true ){
               mes=mes+fecha[indice];
           }

           else{
               if(flag==true){
                   indice++;
               }
               flag=false;
               dia=dia+fecha[indice];
           }
       }

       int_mes=stoi(mes);
       int_dia=stoi(dia);
       if(int_mes<=12 && int_mes >= 1 && int_dia>=1 && int_dia <= 30 ){
           if(int_mes==2 && int_dia==29){
               cout << int_mes<<"/"<<int_dia << " fecha valida en biciesto " << endl ;
           }
           else{
               cout << int_mes<<"/"<<int_dia << " fecha valida " << endl ;
           }
       }
       else if(mes.length()==0){
           cout <<mes << dia << " mes invalido " << endl ;
       }
       else{
           cout << mes<<"/"<< dia << " fecha invalida " << endl ;
       }

    return 0;
}
