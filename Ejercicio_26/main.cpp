/*
 * Date: 18/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida tres números e imprime el tipo de triangulo
 * (isósceles, equilátero,escaleno) que se formara, si sus lados tienen la
 * longitud definida por los números ingresados. Ten encuenta el caso
 * en que los números ingresados no forman un triángulo.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
        cout<<"Ingrese primer numero: " ;
        cin>>a;

        cout<<"Ingrese segundo numero: " ;
        cin>>b;

        cout<<"Ingrese tercer numero: " ;
        cin>>c;

        if(a == b && a == c){

        cout<<"Se forma un triangulo equilatero"<<endl;
        }
        else if(a == b || a == c || b == c)
        {
        cout<<"Se forma un triangulo isosceles."<<endl;
        }
        else if(a != b && a != b && b != c)
        {
        cout<<"Se forma un triangulo escaleno"<<endl;
        }

    return 0;
}
