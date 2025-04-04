/*
PR1-GUIA1-EJ13.
Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a entregar.

Ejemplo A: Si el importe a retirar es $2500 se mostrará por pantalla que se deberán entregar 2 billetes de $1.000, 1 billete de $500,  0 billetes de $200 y 0 billetes de $100.
Ejemplo B: Si el importe a retirar es $3400 se mostrará por pantalla que se deberán entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0 billetes de $100.
Ejemplo C: Si el importe a retirar es $300 se mostrará por pantalla que se deberán entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0 billetes de $500.

Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos múltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o $10.


*************************************************************
MRP:
*************************************************************
1-IDENTIFICAR:

    - pedir la cantidad de dinero a entregar por el cajero y mostrar billetes de 1000, 500, 200 y 100

2- ANALISIS

    DE:
        - cantidadDinero


    DS:
        - billetes1000, billetes500, billetes200, billetes100


    PROCESO:

        - billetes1000 = (cantidadBilletes - resto1000) / 1000
        -resto1000 = cantidadBilletes % 1000

        - billetes500 = (resto1000 - resto500) / 500
        - resto500 = resto1000 % 500

        - billetes200 = (resto500 -resto200) / 200
        - resto200 = resto500 % 200

        - billetes100 = (resto200 - resto100) / 100
        -resto100 = resto200 % 100


3- ESTRATEGIA:(QUE?)

        - Pedir la cantidad de dinero a retirar
        - Calcular los billetes de 1000, 500, 200 y 100
        - Mostrar billetes de 1000, 500, 200 y 100


4- ALGORITMO:(COMO?)

5- CODIFICAR

*/

#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int cantidadDinero, billetes1000, billetes500, billetes200, billetes100;
    int resto1000, resto500, resto200, resto100;

    // Pedir la cantidad de dinero a retirar
    cout << "Ingrese la cantidad de dinero que desea retirar: ";
    cin >> cantidadDinero;

    // Calcular los billetes de 1000, 500, 200 y 100
    resto1000 = cantidadDinero % 1000;
    billetes1000 = (cantidadDinero - resto1000) / 1000;

    resto500 = resto1000 % 500;
    billetes500 = (resto1000 - resto500) / 500;

    resto200 = resto500 % 200;
    billetes200 = (resto500 - resto200) / 200;

    resto100 = resto200 % 100;
    billetes100 = (resto200 - resto100) / 100;


    // Mostrar billetes de 1000, 500, 200 y 100
    cout << "*******************************" << endl;
    cout << "billetes a retirar: " << endl;
    cout << "" << endl;
    cout << "BILLETES $1000: " << billetes1000 << endl;
    cout << "BILLETES $500 : " << billetes500 << endl;
    cout << "BILLETES $200 : " << billetes200 << endl;
    cout << "BILLETES $100 : " << billetes100 << endl;


    return 0;
}
