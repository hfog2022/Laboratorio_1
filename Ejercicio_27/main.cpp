/*
 * Date: 18/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que actúe como una calculadora con
 * operaciones de suma, resta, multiplicación
 * y división, el usuario debe ingresar
 * los operandos y la operación n a realizar.
*/

#include <iostream>

using namespace std;

double Sumar(double,double);
double Restar(double,double);
double Multiplicar(double,double);
double Dividir(double,double);

int main()
{
    double val1;
    double val2;
    int operador;
    cout << "********* Calculadora C++ ********" << endl;
    cout << "**********************************" << endl;


    cout << "Por favor ingrese el primer valor: ";
    cin >> val1;

    cout << "Por favor ingrese el segundo valor: ";
    cin >> val2;
    cout << "**********************************" << endl;

    cout << "Sumar (1), Restar (2), Multiplicar (3) o Dividir (4)?: ";
    cin >> operador;

    switch(operador)
    {
        case 1:
            cout << "\n";
            cout <<val1 <<"+"<<val2<<"=" << Sumar(val1,val2) <<endl;
            cout << "\n";
        break;
        case 2:
            cout << "\n";
            cout <<val1 <<"-"<<val2<<"=" << Restar(val1,val2) <<endl;
            cout << "\n";
        break;
        case 3:
            cout << "\n";
            cout <<val1 <<"x"<<val2<<"=" << Multiplicar(val1,val2) <<endl;
            cout << "\n";
        break;
        case 4:
            cout << "\n";
            cout <<val1 <<"/"<<val2<<"=" << Dividir(val1,val2) <<endl;
            cout << "\n";
        break;
    }

    system("pause");
    return 0;
}


double Sumar(double x,double y)
{
    return x + y;
}


double Restar(double x,double y)
{
    return x - y;
}


double Multiplicar(double x,double y)
{
    return x * y;
}


double Dividir(double x,double y)
{
    return x / y;
}
