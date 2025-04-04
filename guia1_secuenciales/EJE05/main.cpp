/*
PR1-GUIA1-EJ05.
Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión y la cantidad de pasajes
ocupados y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.

Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje de ocupación que se
informará será de un 40% y el porcentaje de no ocupación será de un 60%.

*************************************************************
MRP:
*************************************************************
1-IDENTIFICAR:

    - Pedir la cantidad de alfajores de cada marca y luego mostrar el porcentaje de venta de
    cada uno de ellos

2- ANALISIS

    DE:
        - alfajores1, alfajores2,alfajores3


    DS:
        - porcentajeAljajores1, porcentajeAlfajores2,porcentajeAlfajores3


    PROCESO:

        - alfajoresTotales = alfajores1 + alfajores2 + alfajores3

        - porcentajeAlfajores1 = alfajores1 * 100 / alfatoresTotales
        - porcentajeAlfajores2 = alfajores2 * 100 / alfatoresTotales
        - porcentajeAlfajores3 = alfajores3 * 100 / alfatoresTotales



3- ESTRATEGIA:(QUE?)

        - Pedir la cantidad de alfajores de cada marca

        - Calcular la cantidad de alfajores totales

        - Calcular el porcentaje de cada tipo de alfajor

        - Mostrar el porcentaje de cada alfajor


4- ALGORITMO:(COMO?)

5- CODIFICAR

*/

#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int alfajores1, alfajores2, alfajores3;
    int alfajoresTotales;
    float porcentajeAlfajores1, porcentajeAlfajores2, porcentajeAlfajores3;

    // Pedir la cantidad de alfajores de cada marca
    cout << "Ingrese la venta de alfajores tipo 1: ";
    cin >> alfajores1;

    cout << "Ingrese la venta de alfajores tipo 2: ";
    cin >> alfajores2;

    cout << "Ingrese la venta de alfajores tipo 3: ";
    cin >> alfajores3;

    // Calcular la cantidad de alfajores totales
    alfajoresTotales = alfajores1 + alfajores2 + alfajores3;

    // Calcular el porcentaje de cada tipo de alfajor
    porcentajeAlfajores1 = alfajores1 * 100.0 / alfajoresTotales;
    porcentajeAlfajores2 = alfajores2 * 100.0/ alfajoresTotales;
    porcentajeAlfajores3 = alfajores3 * 100.0 / alfajoresTotales;

    // Mostrar el porcentaje de cada alfajor
    cout << "****************************************************" << endl;
    cout << "La venta porcentual del alfajor tipo1 es: " << porcentajeAlfajores1 << " %" << endl;
    cout << "La venta porcentual del alfajor tipo2 es: " << porcentajeAlfajores2 << " %" << endl;
    cout << "La venta porcentual del alfajor tipo3 es: " << porcentajeAlfajores3 << " %" << endl;

    return 0;
}
