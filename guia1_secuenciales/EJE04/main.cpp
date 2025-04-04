/*
PR1-GUIA1-EJ04.
Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión y la cantidad de pasajes
ocupados y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.

Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje de ocupación que se
informará será de un 40% y el porcentaje de no ocupación será de un 60%.

*************************************************************
MRP:
*************************************************************
1-IDENTIFICAR:

    - Pedir la cantidad de asientos totales ocupados y luego calcular el porcentaje de asientos ocupados
    y desocupados

2- ANALISIS

    DE:
        - asientosTotales
        - asientosNoOcupados

    DS:
        - porcentajeAsientosOcupados
        - porcentajeAsientosNoOcupados

    PROCESO:

        - asientosNoOcupados = asientosTotales - asientosOcupados

        - porcentajeAsientosOcupados = asientosOcupados * 100 / asientosTotales

        - porcentajeAsientosNoOcupados = asientosNoOcupados * 100 / asientosTotales


3- ESTRATEGIA:(QUE?)

    - Pedir los asientos totales y los asientos ocupados

    - calcular los asientos no ocupados
    - calucular el porcentaje de asientos ocupados y no ocupados

    - mostrar el porcentaje de asientos ocupados y no ocupados


4- ALGORITMO:(COMO?)

5- CODIFICAR

*/

#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int asientosTotales, asientosOcupados, asientosNoOcupados;
    float porcentajeAsientosOcupados, porcentajeAsientosNoOcupados;

    // Pedir los asientos totales y los asientos ocupados
    cout << "Ingrese la cantidad de asientos del avion: ";
    cin >> asientosTotales;

    cout << "Ingrese la cantidad de asientos vendidos (ocupados):";
    cin >> asientosOcupados;

    // calcular los asientos no ocupados
    asientosNoOcupados = asientosTotales - asientosOcupados;

    // calcular el porcentaje de asientos ocupados y no ocupados
    porcentajeAsientosOcupados = asientosOcupados* 100 / asientosTotales;
    porcentajeAsientosNoOcupados = asientosNoOcupados * 100 / asientosTotales;

    // mostrar el porcentaje de asientos ocupados y no ocupados
    cout << "***************************************************" << endl;
    cout << "El porcentaje de asientos ocupados   :" << porcentajeAsientosOcupados << " %" << endl;
    cout << "El porcentaje de asientos no ocupados:" << porcentajeAsientosNoOcupados << " %" << endl;

    return 0;
}
