/*
PR1-GUIA1-EJ03.
Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más $700 de premio por cada auto vendido.
Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar
por pantalla el sueldo total a pagar.

Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $7800.

*************************************************************
MRP:
*************************************************************
1-IDENTIFICAR:

    - Pedir la cantidad de autos vendidos y mostrar el sueldo del vendedor

2- ANALISIS

    DE:
        - autosVendidos

    DS:
        - sueldoTotal

    PROCESO:

        - premio = comisionFija * autosVendidos
        - sueltoTotal = sueldoFijo + premio


3- ESTRATEGIA:(QUE?)

    - Pedir la cantidad de autos vendidos

    - Calcular el premido y el sueldo fijo

    - Mostrar el sueldo total

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/
#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int autosVendidos;
    float premio, sueldoTotal;
    const float SUELDO_FIJO = 5000;
    const float COMISION_FIJA = 700;

    // Pedir la cantidad de autos vendidos
    cout << "Ingrese la cantidad de autos vendidos: ";
    cin >> autosVendidos;

    // Calcular el premio y el sueldo fijo
    premio = COMISION_FIJA * autosVendidos;
    sueldoTotal = SUELDO_FIJO + premio;


    // Mostrar el sueldo total
    cout << "El sueldo del vendedor es: " << sueldoTotal << endl;

    return 0;
}
