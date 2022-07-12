/*
 * Date: 12/06/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que pida un número N
 * e imprime el perímetro y área de un círculo con radio N.
*/


#include <iostream>
#define PI 3.1416

using namespace std;

int main()
{
    double radio, perimetro, area;
       cout << "***Perimetro y area de un circulo***" << endl;
       cout << "Por favor ingrese el valor del radio: ";
       cin >> radio;
       cout << " " << endl;
       perimetro = 2*PI*radio;
       cout << "Perimetro: " << perimetro << endl;
       cout << " " << endl;
       area = PI * radio * radio;
       cout << "Area: " << area << endl;

    return 0;
}
